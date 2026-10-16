#pragma once

#include "igi/asset_io.hpp"

#include <limits>

namespace igi::assets {

struct ScriptValue final {
    double number{};
    std::string text;
    std::size_t call_index = std::numeric_limits<std::size_t>::max();
};

struct ScriptCall final {
    std::string function;
    std::vector<ScriptValue> arguments;
};

class QvmInitializer final {
  public:
    explicit QvmInitializer(BinaryView file);
    [[nodiscard]] const std::vector<ScriptCall>& calls() const noexcept { return calls_; }

  private:
    [[nodiscard]] ScriptValue evaluate(std::size_t address, std::size_t depth);
    BinaryView code_;
    std::vector<std::string> identifiers_;
    std::vector<std::string> strings_;
    std::vector<ScriptCall> calls_;
    std::size_t instructions_remaining_ = 2000000;
};

} // namespace igi::assets
