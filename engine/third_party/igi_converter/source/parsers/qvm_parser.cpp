#include "qvm_parser.h"
#include <algorithm>
#include <utility>
#include <cstring>
#include <fstream>

// Operand sizes for each opcode (in bytes following the opcode byte).
// -1 means special handling (CALL).
static int QVM_OperandSize(QVMOpType op)
{
    switch (op)
    {
    case QVMOpType::PUSH:
        return 4;
    case QVMOpType::PUSHB:
        return 1;
    case QVMOpType::PUSHW:
        return 2;
    case QVMOpType::PUSHF:
        return 4;
    case QVMOpType::PUSHA:
        return 4; // push address (4-byte code offset)
    case QVMOpType::PUSHS:
        return 4; // push string (4-byte string-pool index)
    case QVMOpType::PUSHSI:
        return 4;
    case QVMOpType::PUSHSIB:
        return 1;
    case QVMOpType::PUSHSIW:
        return 2;
    case QVMOpType::PUSHI:
        return 4; // push integer immediate (4-byte value)
    case QVMOpType::PUSHII:
        return 4;
    case QVMOpType::PUSHIIB:
        return 1;
    case QVMOpType::PUSHIIW:
        return 2;
    case QVMOpType::BRA:
        return 4;
    case QVMOpType::BF:
        return 4;
    case QVMOpType::BT:
        return 4;
    case QVMOpType::JSR:
        return 4; // jump to subroutine (4-byte code offset)
    case QVMOpType::CALL:
        return -1; // special: count + targets
    default:
        return 0;
    }
}

const char *QVM_OpName(QVMOpType op)
{
    static const char *names[] = {
        "BRK",     "NOP",     "PUSH",  "PUSHB",  "PUSHW",   "PUSHF",   "PUSHA",  "PUSHS", "PUSHSI",
        "PUSHSIB", "PUSHSIW", "PUSHI", "PUSHII", "PUSHIIB", "PUSHIIW", "PUSH0",  "PUSH1", "PUSHM",
        "POP",     "RET",     "BRA",   "BF",     "BT",      "JSR",     "CALL",   "ADD",   "SUB",
        "MUL",     "DIV",     "SHL",   "SHR",    "AND",     "OR",      "XOR",    "LAND",  "LOR",
        "EQ",      "NE",      "LT",    "LE",     "GT",      "GE",      "ASSIGN", "PLUS",  "MINUS",
        "INV",     "NOT",     "BLK",   "ILLEGAL"};
    int idx = static_cast<int>(op);
    if (idx >= 0 && idx < static_cast<int>(QVMOpType::OP_COUNT))
        return names[idx];
    return "UNKNOWN";
}

// Helper: read a little-endian uint32 from a byte buffer
static uint32_t ReadU32(const uint8_t *p)
{
    return (uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
}

// Helper: read a little-endian uint16 from a byte buffer
static uint16_t ReadU16(const uint8_t *p)
{
    return (uint16_t)p[0] | ((uint16_t)p[1] << 8);
}

// Helper: split a buffer of null-terminated strings into a vector.
// Preserves empty strings (adjacent null bytes) to keep index alignment with
// the QVM itable/stable which reference strings by position, matching Python's
// svalue.split(b'\x00')[:-1] behaviour.
static std::vector<std::string> SplitNullTerminated(const uint8_t *data, uint32_t size)
{
    std::vector<std::string> result;
    if (!data || size == 0)
        return result;

    uint32_t start = 0;
    for (uint32_t i = 0; i < size; ++i)
    {
        if (data[i] == '\0')
        {
            result.emplace_back(reinterpret_cast<const char *>(data + start), i - start);
            start = i + 1;
        }
    }
    // Trailing content without null terminator (unusual but safe)
    if (start < size)
    {
        result.emplace_back(reinterpret_cast<const char *>(data + start), size - start);
    }
    return result;
}

QVMFile QVM_Parse(const std::string &filepath)
{
    QVMFile qvm{};
    qvm.valid = false;

    // Read entire file into memory
    std::ifstream file(filepath, std::ios::binary | std::ios::ate);
    if (!file.is_open())
    {
        qvm.error = "Failed to open file: " + filepath;
        return qvm;
    }

    auto file_size = file.tellg();
    if (file_size < 60)
    {
        qvm.error = "File too small to contain QVM header (need 60 bytes)";
        return qvm;
    }

    std::vector<uint8_t> data((size_t)file_size);
    file.seekg(0);
    file.read(reinterpret_cast<char *>(data.data()), file_size);
    file.close();

    const uint8_t *buf = data.data();
    size_t buf_size = data.size();

    // Parse header
    std::memcpy(qvm.header.signature, buf, 4);
    qvm.header.ver_major = ReadU32(buf + 0x04);
    qvm.header.ver_minor = ReadU32(buf + 0x08);
    qvm.header.of_itable = ReadU32(buf + 0x0C);
    qvm.header.of_ivalue = ReadU32(buf + 0x10);
    qvm.header.sz_itable = ReadU32(buf + 0x14);
    qvm.header.sz_ivalue = ReadU32(buf + 0x18);
    qvm.header.of_stable = ReadU32(buf + 0x1C);
    qvm.header.of_svalue = ReadU32(buf + 0x20);
    qvm.header.sz_stable = ReadU32(buf + 0x24);
    qvm.header.sz_svalue = ReadU32(buf + 0x28);
    qvm.header.of_ctable = ReadU32(buf + 0x2C);
    qvm.header.sz_ctable = ReadU32(buf + 0x30);
    qvm.header.unknown_1 = ReadU32(buf + 0x34);
    qvm.header.unknown_2 = ReadU32(buf + 0x38);

    // Validate signature
    if (std::memcmp(qvm.header.signature, "LOOP", 4) != 0)
    {
        qvm.error = "Invalid QVM signature (expected 'LOOP')";
        return qvm;
    }

    // Validate version
    if (qvm.header.ver_major != 8 || (qvm.header.ver_minor < 5 || qvm.header.ver_minor > 7))
    {
        qvm.error = "Unsupported QVM version (expected version 8.5, 8.6 or 8.7, got " +
                    std::to_string(qvm.header.ver_major) + "." +
                    std::to_string(qvm.header.ver_minor) + ")";
        return qvm;
    }

    // IGI2's extended header can reference data after the executable sections.
    // Keep it separate from QSC; the text language cannot represent this payload.
    if (qvm.header.ver_minor >= 6 && qvm.header.of_itable == 64 && buf_size >= 64)
    {
        uint64_t sectionEnd = 64;
        for (const auto range : {std::pair<uint32_t, uint32_t>{qvm.header.of_itable, qvm.header.sz_itable},
                                {qvm.header.of_ivalue, qvm.header.sz_ivalue},
                                {qvm.header.of_stable, qvm.header.sz_stable},
                                {qvm.header.of_svalue, qvm.header.sz_svalue},
                                {qvm.header.of_ctable, qvm.header.sz_ctable}})
            sectionEnd = std::max(sectionEnd, uint64_t(range.first) + range.second);
        qvm.trailerOffset = ReadU32(buf + 0x3c);
        if (sectionEnd > buf_size || sectionEnd > UINT32_MAX ||
            (qvm.trailerOffset && qvm.trailerOffset != sectionEnd))
        {
            qvm.error = "Unsupported QVM extended payload layout";
            return qvm;
        }
        qvm.sectionEnd = static_cast<uint32_t>(sectionEnd);
        qvm.trailer.assign(data.begin() + qvm.sectionEnd, data.end());
    }

    // Parse identifier values (ivalue)
    if (qvm.header.sz_ivalue > 0)
    {
        if (qvm.header.of_ivalue > buf_size ||
            qvm.header.sz_ivalue > buf_size - qvm.header.of_ivalue)
        {
            qvm.error = "Identifier value section extends beyond file";
            return qvm;
        }
        qvm.identifiers = SplitNullTerminated(buf + qvm.header.of_ivalue, qvm.header.sz_ivalue);
    }

    // Parse string values (svalue)
    if (qvm.header.sz_svalue > 0)
    {
        if (qvm.header.of_svalue > buf_size ||
            qvm.header.sz_svalue > buf_size - qvm.header.of_svalue)
        {
            qvm.error = "String value section extends beyond file";
            return qvm;
        }
        qvm.strings = SplitNullTerminated(buf + qvm.header.of_svalue, qvm.header.sz_svalue);
    }

    // Parse bytecode (code table)
    if (qvm.header.sz_ctable > 0)
    {
        if (qvm.header.of_ctable > buf_size ||
            qvm.header.sz_ctable > buf_size - qvm.header.of_ctable)
        {
            qvm.error = "Code section extends beyond file";
            return qvm;
        }

        const uint8_t *code = buf + qvm.header.of_ctable;
        uint32_t code_size = qvm.header.sz_ctable;
        uint32_t pos = 0;

        while (pos < code_size)
        {
            QVMInstruction instr{};
            instr.address = pos;
            instr.operand = 0;
            instr.operand_float = 0.0f;

            uint8_t opbyte = code[pos];
            // IGI 2 wire opcode order is distinct from IGI 1.
            constexpr uint8_t decode[] = {0, 1, 19, 20, 21, 22, 23, 24, 2,  3,  4,  5, 6,
                                          7, 8, 9,  10, 11, 12, 13, 14, 15, 16, 17, 18};
            if (qvm.header.ver_minor == 7 && opbyte < sizeof(decode))
                opbyte = decode[opbyte];
            if (opbyte > static_cast<uint8_t>(QVMOpType::ILLEGAL))
            {
                qvm.error = "Unknown opcode 0x" + std::to_string(opbyte) + " at offset " +
                            std::to_string(pos);
                return qvm;
            }

            instr.type = static_cast<QVMOpType>(opbyte);
            pos += 1; // consume opcode byte

            int op_size = QVM_OperandSize(instr.type);

            if (op_size == -1)
            {
                // CALL: read uint32 count, then count * int32 values
                if (pos + 4 > code_size)
                {
                    qvm.error = "Unexpected end of code in CALL operand count";
                    return qvm;
                }
                uint32_t count = ReadU32(code + pos);
                instr.operand = count;
                pos += 4;

                if (count > (code_size - pos) / 4)
                {
                    qvm.error = "Unexpected end of code in CALL arguments";
                    return qvm;
                }
                instr.call_targets.resize(count);
                for (uint32_t i = 0; i < count; ++i)
                {
                    uint32_t raw = ReadU32(code + pos);
                    instr.call_targets[i] = static_cast<int32_t>(raw);
                    pos += 4;
                }
                instr.size = 1 + 4 + count * 4;
            }
            else if (op_size > 0)
            {
                if (pos + (uint32_t)op_size > code_size)
                {
                    qvm.error = "Unexpected end of code reading operand at offset " +
                                std::to_string(instr.address);
                    return qvm;
                }

                if (op_size == 4)
                {
                    uint32_t val = ReadU32(code + pos);
                    instr.operand = val;
                    if (instr.type == QVMOpType::PUSHF)
                    {
                        // Reinterpret the 4 bytes as float
                        std::memcpy(&instr.operand_float, &val, sizeof(float));
                    }
                }
                else if (op_size == 2)
                {
                    instr.operand = ReadU16(code + pos);
                }
                else if (op_size == 1)
                {
                    instr.operand = code[pos];
                }

                pos += (uint32_t)op_size;
                instr.size = 1 + (uint32_t)op_size;
            }
            else
            {
                instr.size = 1;
            }

            qvm.instructions.push_back(std::move(instr));
        }
    }

    qvm.valid = true;
    return qvm;
}
