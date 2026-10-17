#pragma once

#include <cstdint>
#include <filesystem>
#include <string_view>

namespace igi::diagnostics {

enum class Severity { debug, information, warning, error };

void configure(bool verbose, const std::filesystem::path& log_file = {});
void log(Severity severity, std::string_view subsystem, std::string_view message);
void log_retail_native(Severity severity, std::string_view native_name,
                       std::uint32_t retail_virtual_address, std::string_view retail_message);

} // namespace igi::diagnostics
