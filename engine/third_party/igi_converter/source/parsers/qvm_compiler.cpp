#include "qvm_compiler.h"
#include "qvm_parser.h" // for QVMOpType
#include <cstring>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <unordered_map>

namespace qvm {

using qsc::Node;
using qsc::NodeKind;

namespace {

// ---------- Generator ----------
//
// Emits a flat byte stream + identifier/string pools. Layout details
// (extracted from qvm_parser.cpp + qvm_decompiler.cpp):
//
//   CALL  : 1B op + 4B count + count*4B argument start-offsets (absolute
//           code-section byte addresses). Immediately followed by a BRA
//           that the runtime executes to skip past the inline argument
//           sub-programs. Each argument sub-program ends with a RET so
//           the runtime returns control to the BRA.
//   BF/BRA: 1B op + 4B signed offset, relative to (instr.address + 5).
//
// PUSH variants chosen by smallest fit:
//   Numbers       : PUSH0/PUSH1/PUSHM for {0,1,-1}; PUSHB if 0..255;
//                   PUSHW if 0..65535; otherwise PUSH (4-byte raw).
//   Identifiers   : PUSHIIB / PUSHIIW / PUSHII (operand = ITable index).
//   Strings       : PUSHSIB / PUSHSIW / PUSHSI (operand = STable index).

struct Gen {
  std::vector<uint8_t> code;

  std::vector<std::string> idents; // appended in order
  std::vector<std::string> strings;
  std::unordered_map<std::string, uint32_t> identIndex;
  std::unordered_map<std::string, uint32_t> stringIndex;

  // ---- byte emitters ----
  void emit8(uint8_t v) { code.push_back(v); }
  void emit16(uint16_t v) {
    code.push_back((uint8_t)(v & 0xFF));
    code.push_back((uint8_t)((v >> 8) & 0xFF));
  }
  void emit32(uint32_t v) {
    for (int i = 0; i < 4; ++i)
      code.push_back((uint8_t)((v >> (8 * i)) & 0xFF));
  }
  void emit32At(uint32_t at, uint32_t v) {
    for (int i = 0; i < 4; ++i)
      code[at + i] = (uint8_t)((v >> (8 * i)) & 0xFF);
  }
  void emitOp(QVMOpType op) { code.push_back((uint8_t)op); }
  uint32_t here() const { return (uint32_t)code.size(); }

  // ---- interning ----
  uint32_t internIdent(const std::string &name) {
    auto it = identIndex.find(name);
    if (it != identIndex.end())
      return it->second;
    uint32_t idx = (uint32_t)idents.size();
    idents.push_back(name);
    identIndex[name] = idx;
    return idx;
  }
  uint32_t internString(const std::string &s) {
    auto it = stringIndex.find(s);
    if (it != stringIndex.end())
      return it->second;
    uint32_t idx = (uint32_t)strings.size();
    strings.push_back(s);
    stringIndex[s] = idx;
    return idx;
  }

  // ---- typed pushes ----
  void pushIdent(const std::string &name) {
    uint32_t idx = internIdent(name);
    if (idx < 256) {
      emitOp(QVMOpType::PUSHIIB);
      emit8((uint8_t)idx);
    } else if (idx < 65536) {
      emitOp(QVMOpType::PUSHIIW);
      emit16((uint16_t)idx);
    } else {
      emitOp(QVMOpType::PUSHII);
      emit32(idx);
    }
  }
  void pushString(const std::string &str) {
    uint32_t idx = internString(str);
    if (idx < 256) {
      emitOp(QVMOpType::PUSHSIB);
      emit8((uint8_t)idx);
    } else if (idx < 65536) {
      emitOp(QVMOpType::PUSHSIW);
      emit16((uint16_t)idx);
    } else {
      emitOp(QVMOpType::PUSHSI);
      emit32(idx);
    }
  }
  void pushInt(int32_t v) {
    if (v == 0) {
      emitOp(QVMOpType::PUSH0);
      return;
    }
    if (v == 1) {
      emitOp(QVMOpType::PUSH1);
      return;
    }
    if (v == -1) {
      emitOp(QVMOpType::PUSHM);
      return;
    }
    // PUSHB / PUSHW use SIGNED ranges to match legacy IGI1Conv output.
    // E.g. 255 must use PUSHW (4 bytes) — PUSHB would re-interpret as -1.
    if (v >= -128 && v <= 127) {
      emitOp(QVMOpType::PUSHB);
      emit8((uint8_t)(int8_t)v);
      return;
    }
    if (v >= -32768 && v <= 32767) {
      emitOp(QVMOpType::PUSHW);
      emit16((uint16_t)(int16_t)v);
      return;
    }
    emitOp(QVMOpType::PUSH);
    emit32((uint32_t)v);
  }
  void pushFloat(float f) {
    emitOp(QVMOpType::PUSHF);
    uint32_t bits;
    std::memcpy(&bits, &f, 4);
    emit32(bits);
  }

  // ---- operator opcode tables ----
  static QVMOpType BinaryOp(const std::string &op) {
    if (op == "+")
      return QVMOpType::ADD;
    if (op == "-")
      return QVMOpType::SUB;
    if (op == "*")
      return QVMOpType::MUL;
    if (op == "/")
      return QVMOpType::DIV;
    if (op == "<<")
      return QVMOpType::SHL;
    if (op == ">>")
      return QVMOpType::SHR;
    if (op == "&")
      return QVMOpType::AND;
    if (op == "|")
      return QVMOpType::OR;
    if (op == "^")
      return QVMOpType::XOR;
    if (op == "&&")
      return QVMOpType::LAND;
    if (op == "||")
      return QVMOpType::LOR;
    if (op == "==")
      return QVMOpType::EQ;
    if (op == "!=")
      return QVMOpType::NE;
    if (op == "<")
      return QVMOpType::LT;
    if (op == "<=")
      return QVMOpType::LE;
    if (op == ">")
      return QVMOpType::GT;
    if (op == ">=")
      return QVMOpType::GE;
    if (op == "=")
      return QVMOpType::ASSIGN;
    throw std::runtime_error("unknown binary operator: " + op);
  }
  static QVMOpType UnaryOp(const std::string &op) {
    if (op == "-")
      return QVMOpType::MINUS;
    if (op == "+")
      return QVMOpType::PLUS;
    if (op == "~")
      return QVMOpType::INV;
    if (op == "!")
      return QVMOpType::NOT;
    throw std::runtime_error("unknown unary operator: " + op);
  }

  // ---- expression / statement emission ----

  void emitExpr(const Node &node) {
    switch (node.kind) {
    case NodeKind::IntLit:
      pushInt(node.i_val);
      return;
    case NodeKind::FloatLit:
      pushFloat(node.f_val);
      return;
    case NodeKind::BoolLit:
      // Legacy IGI1Conv treats TRUE/FALSE as ordinary interned
      // identifiers (resolved to runtime globals), NOT as PUSH1/0
      // literals. Match that to preserve identifier-pool parity.
      pushIdent(node.b_val ? "TRUE" : "FALSE");
      return;
    case NodeKind::StringLit:
      pushString(node.s_val);
      return;
    case NodeKind::IdentLit:
      pushIdent(node.s_val);
      return;

    case NodeKind::Unary:
      emitExpr(*node.children[0]);
      emitOp(UnaryOp(node.s_val));
      return;

    case NodeKind::Binary:
      emitExpr(*node.children[0]);
      emitExpr(*node.children[1]);
      emitOp(BinaryOp(node.s_val));
      return;

    case NodeKind::Call:
      emitCall(node);
      return;

    default:
      throw std::runtime_error("emitExpr: unexpected node kind");
    }
  }

  void emitCall(const Node &n) {
    // 1. Push callee identifier.
    pushIdent(n.s_val);

    // 2. Emit CALL opcode + count + placeholder arg-offset slots.
    uint32_t callOpAddr = here();
    emitOp(QVMOpType::CALL);
    emit32((uint32_t)n.children.size());
    uint32_t argSlotsStart = here();
    for (size_t i = 0; i < n.children.size(); ++i)
      emit32(0);

    // 3. Emit BRA (skip past inline arg blocks) with placeholder offset.
    uint32_t braAddr = here();
    emitOp(QVMOpType::BRA);
    uint32_t braOffsetSlot = here();
    emit32(0);

    // 4. For each arg: record absolute start address, emit arg code, RET.
    for (size_t i = 0; i < n.children.size(); ++i) {
      uint32_t argStart = here();
      emit32At(argSlotsStart + (uint32_t)i * 4, argStart);
      emitExpr(*n.children[i]);
      // Legacy uses BRK (0x00) as the arg sub-program terminator.
      emitOp(QVMOpType::BRK);
    }

    // 5. Patch BRA offset = (end_of_args - (BRA + 5)).
    uint32_t afterArgs = here();
    int32_t braOffset = (int32_t)afterArgs - (int32_t)(braAddr + 5);
    emit32At(braOffsetSlot, (uint32_t)braOffset);

    (void)callOpAddr; // currently unused
  }

  void emitStmt(const Node &node) {
    switch (node.kind) {
    case NodeKind::Block:
      for (const auto &c : node.children)
        emitStmt(*c);
      return;

    case NodeKind::ExprStmt:
      emitExpr(*node.children[0]);
      emitOp(QVMOpType::POP); // discard top-of-stack
      return;

    case NodeKind::If:
      emitIf(node);
      return;

    case NodeKind::While:
      emitWhile(node);
      return;

    default:
      // Sometimes parser yields an empty Block for `;` empty stmts.
      return;
    }
  }

  void emitIf(const Node &n) {
    // children: [cond, then, (else)?]
    emitExpr(*n.children[0]);
    uint32_t bfAddr = here();
    emitOp(QVMOpType::BF);
    uint32_t bfSlot = here();
    emit32(0);

    emitStmt(*n.children[1]);

    if (n.children.size() == 3) {
      uint32_t braAddr = here();
      emitOp(QVMOpType::BRA);
      uint32_t braSlot = here();
      emit32(0);

      uint32_t elseStart = here();
      int32_t bfOff = (int32_t)elseStart - (int32_t)(bfAddr + 5);
      emit32At(bfSlot, (uint32_t)bfOff);

      emitStmt(*n.children[2]);

      uint32_t afterElse = here();
      int32_t braOff = (int32_t)afterElse - (int32_t)(braAddr + 5);
      emit32At(braSlot, (uint32_t)braOff);
    } else {
      // Plain `if (...) THEN` — emit a trailing BRA(0). It is a runtime
      // no-op (jumps 0 bytes forward), but the decompiler's walk uses
      // BRA/RET/BRK as terminators when reconstructing the then-body
      // (qvm_decompiler.cpp:278). Without it, the walk would spill into
      // following statements and duplicate them inside the if. The
      // existing if-else path already emits this BRA for skip-else duty.
      uint32_t termAddr = here();
      emitOp(QVMOpType::BRA);
      emit32(0);
      uint32_t afterThen = here();
      int32_t bfOff = (int32_t)afterThen - (int32_t)(bfAddr + 5);
      emit32At(bfSlot, (uint32_t)bfOff);
      (void)termAddr;
    }
  }

  void emitWhile(const Node &n) {
    // children: [cond, body]
    uint32_t loopTop = here();
    emitExpr(*n.children[0]);
    uint32_t bfAddr = here();
    emitOp(QVMOpType::BF);
    uint32_t bfSlot = here();
    emit32(0);

    emitStmt(*n.children[1]);

    uint32_t braAddr = here();
    emitOp(QVMOpType::BRA);
    // Back-jump to loop top: offset relative to (BRA + 5).
    int32_t backOff = (int32_t)loopTop - (int32_t)(braAddr + 5);
    emit32((uint32_t)backOff);

    uint32_t afterLoop = here();
    int32_t bfOff = (int32_t)afterLoop - (int32_t)(bfAddr + 5);
    emit32At(bfSlot, (uint32_t)bfOff);
  }

  void emitProgram(const Node &n) {
    for (const auto &c : n.children)
      emitStmt(*c);
    // Legacy emits a trailing BRK to mark end-of-program for the runtime.
    emitOp(QVMOpType::BRK);
  }
};

// ---------- Assembler ----------

void appendU32(std::vector<uint8_t> &out, uint32_t v) {
  for (int i = 0; i < 4; ++i)
    out.push_back((uint8_t)((v >> (8 * i)) & 0xFF));
}

std::vector<uint8_t> assemble(const Gen &g) {
  // Section layout: [Header(60)][ITable][IValue][STable][SValue][CTable]

  // Build IValue / SValue pools and per-entry offsets.
  std::vector<uint8_t> ivalue;
  std::vector<uint32_t> itable;
  itable.reserve(g.idents.size());
  for (const auto &s : g.idents) {
    itable.push_back((uint32_t)ivalue.size());
    ivalue.insert(ivalue.end(), s.begin(), s.end());
    ivalue.push_back(0);
  }
  std::vector<uint8_t> svalue;
  std::vector<uint32_t> stable;
  stable.reserve(g.strings.size());
  for (const auto &s : g.strings) {
    stable.push_back((uint32_t)svalue.size());
    svalue.insert(svalue.end(), s.begin(), s.end());
    svalue.push_back(0);
  }

  uint32_t of_itable = 60;
  uint32_t sz_itable = (uint32_t)(itable.size() * 4);
  uint32_t of_ivalue = of_itable + sz_itable;
  uint32_t sz_ivalue = (uint32_t)ivalue.size();
  uint32_t of_stable = of_ivalue + sz_ivalue;
  uint32_t sz_stable = (uint32_t)(stable.size() * 4);
  uint32_t of_svalue = of_stable + sz_stable;
  uint32_t sz_svalue = (uint32_t)svalue.size();
  uint32_t of_ctable = of_svalue + sz_svalue;
  uint32_t sz_ctable = (uint32_t)g.code.size();

  std::vector<uint8_t> out;
  out.reserve(of_ctable + sz_ctable);

  // Header
  out.push_back('L');
  out.push_back('O');
  out.push_back('O');
  out.push_back('P');
  appendU32(out, 8); // ver_major
  appendU32(out, 5); // ver_minor
  appendU32(out, of_itable);
  appendU32(out, of_ivalue);
  appendU32(out, sz_itable);
  appendU32(out, sz_ivalue);
  appendU32(out, of_stable);
  appendU32(out, of_svalue);
  appendU32(out, sz_stable);
  appendU32(out, sz_svalue);
  appendU32(out, of_ctable);
  appendU32(out, sz_ctable);
  appendU32(out, 0); // unknown_1
  appendU32(out, 0); // unknown_2

  // ITable
  for (uint32_t v : itable)
    appendU32(out, v);
  // IValue
  out.insert(out.end(), ivalue.begin(), ivalue.end());
  // STable
  for (uint32_t v : stable)
    appendU32(out, v);
  // SValue
  out.insert(out.end(), svalue.begin(), svalue.end());
  // CTable
  out.insert(out.end(), g.code.begin(), g.code.end());

  return out;
}

} // namespace

CompileResult Compile(const Node &program) {
  CompileResult result;
  try {
    Gen gen;
    gen.emitProgram(program);
    result.binary = assemble(gen);
  } catch (const std::exception &ex) {
    result.ok = false;
    result.error = ex.what();
  }
  return result;
}

bool CompileToFile(const Node &program, const std::string &outPath,
                   std::string *error) {
  CompileResult result = Compile(program);
  if (!result.ok) {
    if (error)
      *error = result.error;
    return false;
  }
  std::ofstream f(outPath, std::ios::binary | std::ios::trunc);
  if (!f) {
    if (error)
      *error = "failed to open output: " + outPath;
    return false;
  }
  f.write((const char *)result.binary.data(),
          (std::streamsize)result.binary.size());
  return (bool)f;
}

} // namespace qvm
