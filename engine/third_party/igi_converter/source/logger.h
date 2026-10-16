#pragma once
#include <string>
#include <vector>
#include <mutex>
#include <fstream>
#include <chrono>
#include <iomanip>
#include <iostream>

enum class LogLevel {
    DEBUG,
    INFO,
    WARNING,
    ERR,
    FATAL
};

struct LogEntry {
    LogLevel level;
    std::string message;
    std::string timestamp;
};

class Logger {
public:
    static Logger& Get() {
        static Logger instance;
        return instance;
    }

    void Init(const std::string& logFile = "editor.log");
    void Log(LogLevel level, const std::string& message);

    const std::vector<LogEntry>& GetEntries() const {
        std::lock_guard<std::mutex> lock(mutex_);
        return entries_;
    }

    void Clear() {
        std::lock_guard<std::mutex> lock(mutex_);
        entries_.clear();
    }

private:
    Logger() = default;
    ~Logger() {
        if (file_.is_open()) {
            file_.close();
        }
    }

    std::vector<LogEntry> entries_;
    std::ofstream file_;
    mutable std::mutex mutex_;
};
