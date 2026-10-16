#pragma once
#include <string>
#include "mef_native.h"

namespace MefCompiler {

// Compile a text-based MEF (ASCII) file to a binary ILFF/MEF file.
// Supports Type 0 (rigid) and Type 1 (bone/skeletal) models.
// Model type is detected from a ModelType() directive in the text file.
// Returns true on success, false on any parse or write error.
bool Compile(const std::string& textMefPath, const std::string& outBinaryPath);
bool BuildRigidFromParsedGeometry(const ParsedGeometry& geo, const std::string& outBinaryPath);

} // namespace MefCompiler
