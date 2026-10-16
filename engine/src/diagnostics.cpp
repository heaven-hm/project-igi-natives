#include "igi/diagnostics.hpp"

#include <chrono>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <mutex>
#include <stdexcept>

namespace igi::diagnostics {
namespace {
std::mutex output_mutex;
std::ofstream output_file;
bool verbose_enabled = false;
}

void configure(bool verbose, const std::filesystem::path& log_file) {
    std::lock_guard lock(output_mutex);
    verbose_enabled = verbose;
    if (!log_file.empty()) {
        output_file.open(log_file, std::ios::app);
        if (!output_file) {
            throw std::runtime_error("Cannot open diagnostic log: " + log_file.string());
        }
    }
}

void log(Severity severity, std::string_view subsystem, std::string_view message) {
    std::lock_guard lock(output_mutex);
    if (severity == Severity::debug && !verbose_enabled) {
        return;
    }
    const auto timestamp = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    const auto* time_fields = std::gmtime(&timestamp);
    const char* label = severity == Severity::error ? "ERROR" :
                        severity == Severity::warning ? "WARN" :
                        severity == Severity::debug ? "DEBUG" : "INFO";
    const auto write_entry = [&](std::ostream& output) {
        output << '[';
        if (time_fields != nullptr) {
            output << std::put_time(time_fields, "%Y-%m-%d %H:%M:%S UTC");
        } else {
            output << "time unavailable";
        }
        output << "] " << label << " [" << subsystem << "] " << message << '\n';
    };
    write_entry(std::cerr);
    if (output_file.is_open()) {
        write_entry(output_file);
        output_file.flush();
    }
}

} // namespace igi::diagnostics
