#include "igi/qvm_initializer.hpp"

#include <bit>
#include <stdexcept>

namespace igi::assets {
namespace {

std::vector<std::string> string_pool(BinaryView file, std::size_t offset, std::size_t length) {
    const auto pool = file.slice(offset, length);
    std::vector<std::string> values;
    std::size_t start = 0;
    for (std::size_t position = 0; position < pool.size(); ++position) {
        if (pool.byte(position) == 0) {
            values.push_back(pool.text(start, position - start));
            start = position + 1;
        }
    }
    if (start != pool.size()) {
        throw std::runtime_error("QVM string pool is not terminated");
    }
    return values;
}

} // namespace

QvmInitializer::QvmInitializer(BinaryView file) : code_(file.slice(0, 0)) {
    file.require_range(0, 60);
    if (file.text(0, 4) != "LOOP" || file.unsigned_integer(4) != 8 || file.unsigned_integer(8) != 5) {
        throw std::runtime_error("Expected LOOP 8.5 QVM");
    }
    identifiers_ = string_pool(file, file.unsigned_integer(16), file.unsigned_integer(24));
    strings_ = string_pool(file, file.unsigned_integer(32), file.unsigned_integer(40));
    code_ = file.slice(file.unsigned_integer(44), file.unsigned_integer(48));
    if (code_.size() != 0) {
        static_cast<void>(evaluate(0, 0));
    }
}

ScriptValue QvmInitializer::evaluate(std::size_t address, std::size_t depth) {
    if (depth > 128) {
        throw std::runtime_error("QVM initializer exceeds nesting limit");
    }
    std::vector<ScriptValue> stack;
    const auto require_value = [&stack]() {
        if (stack.empty()) {
            throw std::runtime_error("QVM initializer stack underflow");
        }
    };
    while (address < code_.size()) {
        if (instructions_remaining_-- == 0) {
            throw std::runtime_error("QVM initializer exceeds instruction budget");
        }
        const auto opcode = code_.byte(address++);
        if (opcode == 0 || opcode == 19) {
            return stack.empty() ? ScriptValue{} : stack.back();
        }
        if (opcode == 1) {
            continue;
        }
        if (opcode == 18) {
            require_value();
            stack.pop_back();
            continue;
        }
        if (opcode >= 2 && opcode <= 14) {
            const std::size_t width = (opcode == 3 || opcode == 9 || opcode == 13) ? 1 :
                                      (opcode == 4 || opcode == 10 || opcode == 14) ? 2 : 4;
            const std::uint32_t operand = width == 1 ? code_.byte(address) :
                                          width == 2 ? code_.unsigned_short(address) :
                                                       code_.unsigned_integer(address);
            address += width;
            ScriptValue value;
            if (opcode == 5) {
                value.number = std::bit_cast<float>(operand);
            } else if (opcode == 8 || opcode == 9 || opcode == 10) {
                if (operand >= strings_.size()) {
                    throw std::runtime_error("QVM string index is invalid");
                }
                value.text = strings_[operand];
            } else if (opcode == 12 || opcode == 13 || opcode == 14) {
                if (operand >= identifiers_.size()) {
                    throw std::runtime_error("QVM identifier index is invalid");
                }
                value.text = identifiers_[operand];
                value.number = value.text == "TRUE" ? 1.0 : 0.0;
            } else if (opcode == 2 || opcode == 3 || opcode == 4) {
                value.number = operand;
            } else {
                throw std::runtime_error("Unsupported indirect QVM initializer operand");
            }
            stack.push_back(std::move(value));
            continue;
        }
        if (opcode >= 15 && opcode <= 17) {
            ScriptValue value;
            value.number = opcode == 15 ? 0.0 : opcode == 16 ? 1.0 : -1.0;
            stack.push_back(value);
            continue;
        }
        if (opcode == 20) {
            const auto displacement = std::bit_cast<std::int32_t>(code_.unsigned_integer(address));
            const auto destination = static_cast<std::int64_t>(address + 4) + displacement;
            if (destination < 0 || static_cast<std::uint64_t>(destination) > code_.size()) {
                throw std::runtime_error("QVM branch target is invalid");
            }
            address = static_cast<std::size_t>(destination);
            continue;
        }
        if (opcode == 24) {
            require_value();
            ScriptCall call{stack.back().text, {}};
            stack.pop_back();
            const auto argument_count = code_.unsigned_integer(address);
            address += 4;
            if (argument_count > 8192) {
                throw std::runtime_error("QVM initializer has too many arguments");
            }
            code_.require_range(address, static_cast<std::size_t>(argument_count) * 4);
            for (std::uint32_t argument_index = 0; argument_index < argument_count; ++argument_index) {
                call.arguments.push_back(evaluate(code_.unsigned_integer(address), depth + 1));
                address += 4;
            }
            const auto call_index = calls_.size();
            calls_.push_back(std::move(call));
            ScriptValue result;
            result.call_index = call_index;
            stack.push_back(result);
            continue;
        }
        if (opcode == 43 || opcode == 44 || opcode == 46) {
            require_value();
            if (opcode == 44) {
                stack.back().number = -stack.back().number;
            } else if (opcode == 46) {
                stack.back().number = stack.back().number == 0.0 ? 1.0 : 0.0;
            }
            continue;
        }
        throw std::runtime_error("Unsupported QVM initializer opcode " + std::to_string(opcode) +
                                 " at byte " + std::to_string(address - 1));
    }
    return stack.empty() ? ScriptValue{} : stack.back();
}

} // namespace igi::assets
