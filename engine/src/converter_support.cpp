#include "igi/diagnostics.hpp"
#include "logger.h"
#include "utils.h"

void Logger::Init(const std::string&) {}

void Logger::Log(LogLevel level, const std::string& message) {
    using igi::diagnostics::Severity;
    const auto severity = level == LogLevel::ERR || level == LogLevel::FATAL ? Severity::error :
                          level == LogLevel::WARNING ? Severity::warning : Severity::debug;
    igi::diagnostics::log(severity, "igi-converter", message);
}

std::string Utils::Trim(const std::string& text) {
    const auto first_character = text.find_first_not_of(" \r\n\t");
    if (first_character == std::string::npos) {
        return {};
    }
    return text.substr(first_character, text.find_last_not_of(" \r\n\t") - first_character + 1);
}
