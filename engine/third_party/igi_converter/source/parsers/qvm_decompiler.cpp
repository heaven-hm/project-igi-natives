#include "qvm_decompiler.h"
#include "../logger.h"
#include "../../native/asset_json.hpp"

#include <algorithm>
#include <charconv>
#include <cstdint>
#include <fstream>
#include <map>
#include <memory>
#include <string>
#include <vector>

// Float formatting helper — reproduces the full-precision decimal output of the
// original IGI1Conv tool (e.g. 0.30000001192092896, not truncated 0.3000000119).
// %.17g gives the shortest 17-significant-digit representation, which is the
// exact double value of the 32-bit float and round-trips through strtof/strtod.
static std::string FloatStr(float v)
{
    char buf[64];
    snprintf(buf, sizeof(buf), "%.17g", (double)v);
    std::string s(buf);

    // For fixed notation (no exponent), trim trailing zeros but keep at least one
    // decimal digit so the token is always recognizable as a float.
    if (s.find('e') == std::string::npos && s.find('E') == std::string::npos)
    {
        if (s.find('.') != std::string::npos)
        {
            while (!s.empty() && s.back() == '0')
                s.pop_back();
            if (!s.empty() && s.back() == '.')
                s.pop_back();
        }
        // Ensure the value has a '.' so the QSC parser treats it as a float token.
        if (s.find('.') == std::string::npos)
            s += ".0";
    }
    return s;
}

// String escaping helper matching Python string replacement exactly
static std::string EscapeQSCString(const std::string &s)
{
    std::string result;
    for (char c : s)
    {
        if (c == '\n')
            result += "\\n";
        else if (c == '"')
            result += "\\\"";
        else
            result += c;
    }
    return result;
}

// Priority mapping matching Python dict priority exactly
static int GetPriority(const std::string &op)
{
    if (op == "+")
        return 2;
    if (op == "-")
        return 2;
    if (op == "*")
        return 3;
    if (op == "/")
        return 3;
    if (op == "<<")
        return 5;
    if (op == ">>")
        return 5;
    if (op == "&")
        return 8;
    if (op == "|")
        return 10;
    if (op == "^")
        return 9;
    if (op == "&&")
        return 11;
    if (op == "||")
        return 12;
    if (op == "==")
        return 7;
    if (op == "!=")
        return 7;
    if (op == "<")
        return 6;
    if (op == "<=")
        return 6;
    if (op == ">")
        return 6;
    if (op == ">=")
        return 6;
    if (op == "=")
        return 14;
    if (op == "~")
        return 2;
    if (op == "!")
        return 2;
    return 0;
}

enum class ASTNodeType
{
    LiteralNumber,
    LiteralConst,
    LiteralString,
    LiteralIdentifier,
    ExpressionUnary,
    ExpressionBinary,
    ExpressionCall,
    StatementParenthese,
    StatementWhile,
    StatementIf
};

struct ASTNode
{
    ASTNodeType type;
    explicit ASTNode(ASTNodeType t) : type(t) {}
    virtual ~ASTNode() = default;
    virtual std::string strepr(int tabs) const = 0;
};

struct LiteralNumberNode : public ASTNode
{
    std::string value;
    explicit LiteralNumberNode(std::string val)
        : ASTNode(ASTNodeType::LiteralNumber), value(std::move(val))
    {
    }
    std::string strepr(int tabs) const override
    {
        return value;
    }
};

struct LiteralConstNode : public ASTNode
{
    std::string value;
    explicit LiteralConstNode(std::string val)
        : ASTNode(ASTNodeType::LiteralConst), value(std::move(val))
    {
    }
    std::string strepr(int tabs) const override
    {
        return value;
    }
};

struct LiteralStringNode : public ASTNode
{
    std::string value;
    explicit LiteralStringNode(std::string val)
        : ASTNode(ASTNodeType::LiteralString), value(std::move(val))
    {
    }
    std::string strepr(int tabs) const override
    {
        return value;
    }
};

struct LiteralIdentifierNode : public ASTNode
{
    std::string value;
    explicit LiteralIdentifierNode(std::string val)
        : ASTNode(ASTNodeType::LiteralIdentifier), value(std::move(val))
    {
    }
    std::string strepr(int tabs) const override
    {
        return value;
    }
};

struct ExpressionUnaryNode : public ASTNode
{
    std::string op;
    std::shared_ptr<ASTNode> argument;
    ExpressionUnaryNode(std::string o, std::shared_ptr<ASTNode> arg)
        : ASTNode(ASTNodeType::ExpressionUnary), op(std::move(o)), argument(std::move(arg))
    {
    }
    std::string strepr(int tabs) const override
    {
        return op + argument->strepr(tabs);
    }
};

struct ExpressionBinaryNode : public ASTNode
{
    std::string op;
    std::shared_ptr<ASTNode> left;
    std::shared_ptr<ASTNode> right;
    ExpressionBinaryNode(std::string o, std::shared_ptr<ASTNode> l, std::shared_ptr<ASTNode> r)
        : ASTNode(ASTNodeType::ExpressionBinary), op(std::move(o)), left(std::move(l)),
          right(std::move(r))
    {
    }
    std::string strepr(int tabs) const override
    {
        return left->strepr(tabs) + " " + op + " " + right->strepr(tabs);
    }
};

struct StatementParentheseNode : public ASTNode
{
    std::shared_ptr<ASTNode> body;
    explicit StatementParentheseNode(std::shared_ptr<ASTNode> b)
        : ASTNode(ASTNodeType::StatementParenthese), body(std::move(b))
    {
    }
    std::string strepr(int tabs) const override
    {
        return "(" + body->strepr(tabs) + ")";
    }
};

struct ExpressionCallNode : public ASTNode
{
    std::shared_ptr<ASTNode> callee;
    std::vector<std::vector<std::shared_ptr<ASTNode>>> arguments;
    ExpressionCallNode(std::shared_ptr<ASTNode> c,
                       std::vector<std::vector<std::shared_ptr<ASTNode>>> args)
        : ASTNode(ASTNodeType::ExpressionCall), callee(std::move(c)), arguments(std::move(args))
    {
    }
    std::string strepr(int tabs) const override
    {
        std::string c = callee->strepr(tabs);
        size_t l = c.length();
        std::vector<std::string> a;
        for (const auto &arg : arguments)
        {
            if (arg.empty())
                continue;
            std::string s = arg[0]->strepr(tabs + 1);
            if (arg[0]->type == ASTNodeType::ExpressionCall)
            {
                std::string tabsStr(tabs + 1, '\t');
                s = "\n" + tabsStr + s;
                l = s.length() + 2;
            }
            else
            {
                if (l + s.length() > 300)
                {
                    s = "\n" + s;
                    l = s.length() + 2;
                }
                else
                {
                    l += s.length() + 2;
                }
            }
            a.push_back(s);
        }

        std::string argsJoined;
        for (size_t i = 0; i < a.size(); ++i)
        {
            if (i > 0)
                argsJoined += ", ";
            argsJoined += a[i];
        }
        return c + "(" + argsJoined + ")";
    }
};

struct StatementWhileNode : public ASTNode
{
    std::shared_ptr<ASTNode> test;
    std::vector<std::shared_ptr<ASTNode>> body;
    StatementWhileNode(std::shared_ptr<ASTNode> t, std::vector<std::shared_ptr<ASTNode>> b)
        : ASTNode(ASTNodeType::StatementWhile), test(std::move(t)), body(std::move(b))
    {
    }
    std::string strepr(int tabs) const override
    {
        std::string tabsStr(tabs, '\t');
        std::string text;
        text += tabsStr + "while(" + test->strepr(tabs + 1) + ")\n";
        text += tabsStr + "{\n";

        for (const auto &sst : body)
        {
            if (sst->type == ASTNodeType::StatementIf || sst->type == ASTNodeType::StatementWhile)
            {
                text += sst->strepr(tabs + 1) + "\n";
            }
            else
            {
                std::string tabsPlus(tabs + 1, '\t');
                text += tabsPlus + sst->strepr(tabs + 1) + ";\n";
            }
        }
        text += tabsStr + "}\n";
        return text;
    }
};

struct StatementIfNode : public ASTNode
{
    std::shared_ptr<ASTNode> test;
    std::vector<std::shared_ptr<ASTNode>> trueBranch;
    std::vector<std::shared_ptr<ASTNode>> falseBranch;
    bool hasFalse;

    StatementIfNode(std::shared_ptr<ASTNode> t, std::vector<std::shared_ptr<ASTNode>> tr)
        : ASTNode(ASTNodeType::StatementIf), test(std::move(t)), trueBranch(std::move(tr)),
          hasFalse(false)
    {
    }

    StatementIfNode(std::shared_ptr<ASTNode> t, std::vector<std::shared_ptr<ASTNode>> tr,
                    std::vector<std::shared_ptr<ASTNode>> fa)
        : ASTNode(ASTNodeType::StatementIf), test(std::move(t)), trueBranch(std::move(tr)),
          falseBranch(std::move(fa)), hasFalse(true)
    {
    }

    std::string strepr(int tabs) const override
    {
        std::string tabsStr(tabs, '\t');
        std::string text;
        text += tabsStr + "if(" + test->strepr(tabs + 1) + ")\n";
        text += tabsStr + "{\n";

        for (const auto &sst : trueBranch)
        {
            if (sst->type == ASTNodeType::StatementIf || sst->type == ASTNodeType::StatementWhile)
            {
                text += sst->strepr(tabs + 1);
            }
            else
            {
                std::string tabsPlus(tabs + 1, '\t');
                text += tabsPlus + sst->strepr(tabs + 1) + ";\n";
            }
        }
        text += tabsStr + "}\n";

        if (hasFalse)
        {
            text += tabsStr + "else\n";
            text += tabsStr + "{\n";
            for (const auto &sst : falseBranch)
            {
                if (sst->type == ASTNodeType::StatementIf ||
                    sst->type == ASTNodeType::StatementWhile)
                {
                    text += sst->strepr(tabs + 1) + "\n";
                }
                else
                {
                    std::string tabsPlus(tabs + 1, '\t');
                    text += tabsPlus + sst->strepr(tabs + 1) + ";\n";
                }
            }
            text += tabsStr + "}\n";
        }
        return text;
    }
};

static std::vector<std::shared_ptr<ASTNode>>
walk(const QVMFile &qvm, const std::map<uint32_t, size_t> &addrToInstrIndex, uint32_t &address,
     bool &success, uint32_t until = 0xFFFFFFFF)
{
    std::vector<std::shared_ptr<ASTNode>> statements;

    while (true)
    {
        auto it = addrToInstrIndex.find(address);
        if (it == addrToInstrIndex.end())
        {
            break;
        }

        const QVMInstruction &op = qvm.instructions[it->second];

        if (until != 0xFFFFFFFF && op.address == until)
        {
            break;
        }

        if (op.type == QVMOpType::BRK || op.type == QVMOpType::BRA || op.type == QVMOpType::RET)
        {
            break;
        }

        else if (op.type == QVMOpType::NOP)
        {
            address = op.address + op.size;
        }

        else if (op.type == QVMOpType::POP)
        {
            address = op.address + op.size;
        }

        else if (op.type == QVMOpType::PUSH || op.type == QVMOpType::PUSHB ||
                 op.type == QVMOpType::PUSHW || op.type == QVMOpType::PUSHF)
        {
            std::string val;
            if (op.type == QVMOpType::PUSHF)
            {
                val = FloatStr(op.operand_float);
            }
            else
            {
                val = std::to_string(op.operand);
            }
            statements.push_back(std::make_shared<LiteralNumberNode>(val));
            address = op.address + op.size;
        }

        else if (op.type == QVMOpType::PUSH0)
        {
            statements.push_back(std::make_shared<LiteralConstNode>("0"));
            address = op.address + op.size;
        }
        else if (op.type == QVMOpType::PUSH1)
        {
            statements.push_back(std::make_shared<LiteralConstNode>("1"));
            address = op.address + op.size;
        }
        else if (op.type == QVMOpType::PUSHM)
        {
            statements.push_back(std::make_shared<LiteralConstNode>("4294967295"));
            address = op.address + op.size;
        }

        else if (op.type == QVMOpType::PUSHSI || op.type == QVMOpType::PUSHSIB ||
                 op.type == QVMOpType::PUSHSIW)
        {
            std::string val = "\"\"";
            if (op.operand < qvm.strings.size())
            {
                val = "\"" + EscapeQSCString(qvm.strings[op.operand]) + "\"";
            }
            statements.push_back(std::make_shared<LiteralStringNode>(val));
            address = op.address + op.size;
        }

        else if (op.type == QVMOpType::PUSHII || op.type == QVMOpType::PUSHIIB ||
                 op.type == QVMOpType::PUSHIIW)
        {
            std::string val = "id_unknown";
            if (op.operand < qvm.identifiers.size())
            {
                val = EscapeQSCString(qvm.identifiers[op.operand]);
            }
            statements.push_back(std::make_shared<LiteralIdentifierNode>(val));
            address = op.address + op.size;
        }

        else if (op.type == QVMOpType::PLUS || op.type == QVMOpType::MINUS ||
                 op.type == QVMOpType::INV || op.type == QVMOpType::NOT)
        {
            std::string opStr;
            if (op.type == QVMOpType::PLUS)
                opStr = "+";
            else if (op.type == QVMOpType::MINUS)
                opStr = "-";
            else if (op.type == QVMOpType::INV)
                opStr = "~";
            else if (op.type == QVMOpType::NOT)
                opStr = "!";

            if (statements.empty())
            {
                Logger::Get().Log(LogLevel::ERR,
                                  "[QVM_Decompile] Error: unary expression lacks argument");
                success = false;
                return {};
            }
            std::shared_ptr<ASTNode> argument = statements.back();
            statements.pop_back();

            if (argument->type == ASTNodeType::ExpressionUnary ||
                argument->type == ASTNodeType::ExpressionBinary)
            {
                argument = std::make_shared<StatementParentheseNode>(argument);
            }

            statements.push_back(std::make_shared<ExpressionUnaryNode>(opStr, argument));
            address = op.address + op.size;
        }

        else if (op.type == QVMOpType::ADD || op.type == QVMOpType::SUB ||
                 op.type == QVMOpType::MUL || op.type == QVMOpType::DIV ||
                 op.type == QVMOpType::SHL || op.type == QVMOpType::SHR ||
                 op.type == QVMOpType::AND || op.type == QVMOpType::OR ||
                 op.type == QVMOpType::XOR || op.type == QVMOpType::LAND ||
                 op.type == QVMOpType::LOR || op.type == QVMOpType::EQ ||
                 op.type == QVMOpType::NE || op.type == QVMOpType::LT || op.type == QVMOpType::LE ||
                 op.type == QVMOpType::GT || op.type == QVMOpType::GE ||
                 op.type == QVMOpType::ASSIGN)
        {

            std::string opStr;
            if (op.type == QVMOpType::ADD)
                opStr = "+";
            else if (op.type == QVMOpType::SUB)
                opStr = "-";
            else if (op.type == QVMOpType::MUL)
                opStr = "*";
            else if (op.type == QVMOpType::DIV)
                opStr = "/";
            else if (op.type == QVMOpType::SHL)
                opStr = "<<";
            else if (op.type == QVMOpType::SHR)
                opStr = ">>";
            else if (op.type == QVMOpType::AND)
                opStr = "&";
            else if (op.type == QVMOpType::OR)
                opStr = "|";
            else if (op.type == QVMOpType::XOR)
                opStr = "^";
            else if (op.type == QVMOpType::LAND)
                opStr = "&&";
            else if (op.type == QVMOpType::LOR)
                opStr = "||";
            else if (op.type == QVMOpType::EQ)
                opStr = "==";
            else if (op.type == QVMOpType::NE)
                opStr = "!=";
            else if (op.type == QVMOpType::LT)
                opStr = "<";
            else if (op.type == QVMOpType::LE)
                opStr = "<=";
            else if (op.type == QVMOpType::GT)
                opStr = ">";
            else if (op.type == QVMOpType::GE)
                opStr = ">=";
            else if (op.type == QVMOpType::ASSIGN)
                opStr = "=";

            if (statements.size() < 2)
            {
                Logger::Get().Log(LogLevel::ERR,
                                  "[QVM_Decompile] Error: binary expression lacks arguments");
                success = false;
                return {};
            }

            std::shared_ptr<ASTNode> right = statements.back();
            statements.pop_back();
            std::shared_ptr<ASTNode> left = statements.back();
            statements.pop_back();

            if (right->type == ASTNodeType::ExpressionBinary)
            {
                auto rightBin = std::static_pointer_cast<ExpressionBinaryNode>(right);
                if (GetPriority(opStr) < GetPriority(rightBin->op))
                {
                    right = std::make_shared<StatementParentheseNode>(right);
                }
            }

            if (left->type == ASTNodeType::ExpressionBinary)
            {
                auto leftBin = std::static_pointer_cast<ExpressionBinaryNode>(left);
                if (GetPriority(opStr) < GetPriority(leftBin->op))
                {
                    left = std::make_shared<StatementParentheseNode>(left);
                }
            }

            statements.push_back(std::make_shared<ExpressionBinaryNode>(opStr, left, right));
            address = op.address + op.size;
        }

        else if (op.type == QVMOpType::CALL)
        {
            if (statements.empty())
            {
                Logger::Get().Log(LogLevel::ERR,
                                  "[QVM_Decompile] Error: call expression lacks callee");
                success = false;
                return {};
            }
            std::shared_ptr<ASTNode> callee = statements.back();
            statements.pop_back();

            std::vector<std::vector<std::shared_ptr<ASTNode>>> arguments;
            for (int32_t jump : op.call_targets)
            {
                uint32_t argAddr = static_cast<uint32_t>(jump);
                auto argStmts = walk(qvm, addrToInstrIndex, argAddr, success);
                if (!success)
                {
                    return {};
                }
                arguments.push_back(argStmts);
            }

            statements.push_back(std::make_shared<ExpressionCallNode>(callee, arguments));

            uint32_t exAddr = op.address + op.size;
            auto itEx = addrToInstrIndex.find(exAddr);
            if (itEx != addrToInstrIndex.end())
            {
                const QVMInstruction &ex = qvm.instructions[itEx->second];
                address = ex.address + ex.size + static_cast<int32_t>(ex.operand);
            }
            else
            {
                address = exAddr;
            }
        }

        else if (op.type == QVMOpType::BF)
        {
            if (statements.empty())
            {
                Logger::Get().Log(
                    LogLevel::ERR,
                    "[QVM_Decompile] Error: conditional branch lacks test expression");
                success = false;
                return {};
            }
            std::shared_ptr<ASTNode> test = statements.back();
            statements.pop_back();

            bool isWhile = false;
            bool isIfElse = false;
            int32_t exData = 0;
            uint32_t exAddr = 0;
            uint32_t exSize = 0;

            uint32_t targetAddr = op.address + op.size + static_cast<int32_t>(op.operand);
            if (targetAddr >= 5)
            {
                uint32_t prevAddr = targetAddr - 5;
                auto itPrev = addrToInstrIndex.find(prevAddr);
                if (itPrev != addrToInstrIndex.end())
                {
                    const QVMInstruction &ex = qvm.instructions[itPrev->second];
                    if (ex.type == QVMOpType::BRA)
                    {
                        exData = static_cast<int32_t>(ex.operand);
                        exAddr = ex.address;
                        exSize = ex.size;
                        if (exData < 0)
                        {
                            isWhile = true;
                        }
                        else if (exData > 0)
                        {
                            isIfElse = true;
                        }
                    }
                }
            }

            if (isWhile)
            {
                uint32_t bodyAddr = op.address + op.size;
                auto body = walk(qvm, addrToInstrIndex, bodyAddr, success);
                if (!success)
                {
                    return {};
                }
                statements.push_back(std::make_shared<StatementWhileNode>(test, body));
                address = targetAddr;
            }
            else
            {
                uint32_t trueAddr = op.address + op.size;
                auto trueBranch = walk(qvm, addrToInstrIndex, trueAddr, success);
                if (!success)
                {
                    return {};
                }
                address = targetAddr;

                if (isIfElse)
                {
                    uint32_t falseAddr = targetAddr;
                    uint32_t untilAddr = exAddr + exSize + exData;
                    auto falseBranch = walk(qvm, addrToInstrIndex, falseAddr, success, untilAddr);
                    if (!success)
                    {
                        return {};
                    }
                    statements.push_back(
                        std::make_shared<StatementIfNode>(test, trueBranch, falseBranch));
                    address = untilAddr;
                }
                else
                {
                    statements.push_back(std::make_shared<StatementIfNode>(test, trueBranch));
                }
            }
        }

        else
        {
            Logger::Get().Log(LogLevel::ERR, "[QVM_Decompile] Error: Unhandled opcode: " +
                                                 std::to_string(static_cast<int>(op.type)));
            success = false;
            return {};
        }
    }

    return statements;
}

std::string QVM_DecompileToString(const QVMFile &qvm)
{
    if (!qvm.valid)
    {
        Logger::Get().Log(LogLevel::ERR, "[QVM_Decompile] QVM is not valid: " + qvm.error);
        return "";
    }

    if (qvm.instructions.empty())
    {
        return "";
    }

    std::map<uint32_t, size_t> addrToInstrIndex;
    for (size_t i = 0; i < qvm.instructions.size(); ++i)
    {
        addrToInstrIndex[qvm.instructions[i].address] = i;
    }

    uint32_t address = 0;
    bool success = true;
    auto qvmtree = walk(qvm, addrToInstrIndex, address, success);
    if (!success)
    {
        Logger::Get().Log(LogLevel::ERR,
                          "[QVM_Decompile] Decompilation failed during AST reconstruction.");
        return "";
    }

    std::string qvmtext;
    for (const auto &st : qvmtree)
    {
        if (st->type == ASTNodeType::StatementIf || st->type == ASTNodeType::StatementWhile)
        {
            qvmtext += st->strepr(0);
        }
        else
        {
            qvmtext += st->strepr(0) + ";\n";
        }
    }

    return qvmtext;
}

bool QVM_Decompile(const QVMFile &qvm, const std::string &outpath)
{
    if (!qvm.valid)
    {
        Logger::Get().Log(LogLevel::ERR, "[QVM_Decompile] QVM is not valid: " + qvm.error);
        return false;
    }

    std::string qvmtext;
    if (!qvm.instructions.empty())
    {
        std::map<uint32_t, size_t> addrToInstrIndex;
        for (size_t i = 0; i < qvm.instructions.size(); ++i)
        {
            addrToInstrIndex[qvm.instructions[i].address] = i;
        }

        uint32_t address = 0;
        bool success = true;
        auto qvmtree = walk(qvm, addrToInstrIndex, address, success);
        if (!success)
        {
            Logger::Get().Log(LogLevel::ERR,
                              "[QVM_Decompile] Decompilation failed during AST reconstruction.");
            return false;
        }

        for (const auto &st : qvmtree)
        {
            if (st->type == ASTNodeType::StatementIf || st->type == ASTNodeType::StatementWhile)
            {
                qvmtext += st->strepr(0);
            }
            else
            {
                qvmtext += st->strepr(0) + ";\n";
            }
        }
    }

    if (qvm.header.ver_minor == 6 || qvm.header.ver_minor == 7) {
        const std::string metadata = outpath + ".qvm-version";
        std::ifstream previous(metadata, std::ios::binary);
        if (previous) {
            const std::string value((std::istreambuf_iterator<char>(previous)), {});
            if (value != "8.6\n" && value != "8.7\n") {
                Logger::Get().Log(LogLevel::ERR, "Refusing to overwrite unrelated QVM metadata: " + metadata);
                return false;
            }
        }
    }

    const auto layoutPath = gconv::fs::path(outpath + ".qvm-layout");
    if (gconv::fs::exists(layoutPath)) {
        try {
            const auto previous = gconv::readJson(layoutPath);
            if (previous.value("kind", "") != "igi2-qvm-layout" || previous.value("version", 0) != 1)
                throw std::runtime_error("Unrelated QVM layout metadata");
        } catch (const std::exception &error) {
            Logger::Get().Log(LogLevel::ERR, error.what());
            return false;
        }
    }

    std::ofstream out(outpath, std::ios::binary);
    if (!out.is_open())
    {
        Logger::Get().Log(LogLevel::ERR, "[QVM_Decompile] Cannot open output file: " + outpath);
        return false;
    }

    out << qvmtext;
    out.flush();
    out.close();
    if (!out) return false;
    // Metadata lives beside the source, never inside the QSC program.
    if (qvm.header.ver_minor == 6 || qvm.header.ver_minor == 7) {
        const std::string metadata = outpath + ".qvm-version";
        std::ofstream version(metadata, std::ios::binary);
        version << "8." << qvm.header.ver_minor << "\n";
        version.close();
        if (!version) return false;
    }

    if (qvm.header.ver_minor >= 6 &&
        (qvm.trailerOffset || !qvm.trailer.empty() || qvm.header.unknown_1 || qvm.header.unknown_2)) {
        gconv::saveJson(layoutPath, {{"kind", "igi2-qvm-layout"}, {"version", 1},
            {"minor", qvm.header.ver_minor}, {"section_end", qvm.sectionEnd},
            {"trailer_offset", qvm.trailerOffset},
            {"reserved", {qvm.header.unknown_1, qvm.header.unknown_2}},
            {"trailer", gconv::encodeHex(qvm.trailer, 0, qvm.trailer.size())}});
    } else if (gconv::fs::exists(layoutPath)) {
        gconv::fs::remove(layoutPath);
    }

    Logger::Get().Log(LogLevel::INFO, "[QVM_Decompile] Written " +
                                          std::to_string(qvm.instructions.size()) +
                                          " instructions to " + outpath);
    return true;
}
