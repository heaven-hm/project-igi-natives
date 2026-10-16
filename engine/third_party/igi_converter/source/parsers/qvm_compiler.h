#pragma once
#include "qsc_parser.h"
#include <string>
#include <vector>
#include <cstdint>

namespace qvm {

struct CompileResult {
    std::vector<uint8_t> binary;
    bool ok = true;
    std::string error;
};

// Compile a parsed QSC AST (Program node) into a complete QVM v0.5 binary
// (LOOP 8.5). Returns the bytes in `binary` on success.
CompileResult Compile(const qsc::Node& program);

// Convenience: compile and write to disk.
bool CompileToFile(const qsc::Node& program, const std::string& outPath, std::string* error = nullptr);

} // namespace qvm
