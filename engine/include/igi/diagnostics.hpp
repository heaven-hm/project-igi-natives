#pragma once

#include <filesystem>
#include <string_view>

namespace igi::diagnostics {

enum class Severity { debug, information, warning, error };

void configure(bool verbose, const std::filesystem::path& log_file = {});
void log(Severity severity, std::string_view subsystem, std::string_view message);

} // namespace igi::diagnostics
