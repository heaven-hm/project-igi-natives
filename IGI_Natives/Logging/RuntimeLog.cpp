#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define _SILENCE_ALL_CXX17_DEPRECATION_WARNINGS
#include "RuntimeLog.hpp"

#include "../Utils/Utility.hpp"
#include <cstdarg>
#include <fstream>
#include <sstream>
#include <unordered_map>

namespace IGI {

// Instantiate trampolines.
CrtWrite_t CrtWriteOut{};
OutputDebugStringA_t OutputDebugStringAOut{};
CreateFileA_t CreateFileAOut{};
WriteFile_t WriteFileOut{};

namespace {

constexpr const char* kRuntimeLogFileName = "igi.log";
constexpr size_t kMaxLinesPerSecond = 200;

// Trace stream + rate limiter (single writer thread at a time).
std::mutex g_traceMutex;
std::ofstream g_traceStream;
bool g_initialized = false;

struct RateWindow {
  std::chrono::steady_clock::time_point start{};
  size_t emitted = 0;
  size_t dropped = 0;
};
RateWindow g_rate;

// OS handle -> file path map so WriteFile entries can be attributed.
std::mutex g_handleMutex;
std::unordered_map<HANDLE, std::string> g_handlePaths;

std::string Hex(DWORD_PTR value) {
  std::ostringstream ss;
  ss << std::uppercase << std::hex << std::setw(8) << std::setfill('0') << value;
  return "0x" + ss.str();
}

std::string Sanitize(const std::string& text, size_t maxBytes) {
  std::string out;
  out.reserve(maxBytes);
  for (size_t i = 0; i < text.size() && i < maxBytes; ++i) {
    const unsigned char c = static_cast<unsigned char>(text[i]);
    if (c == '\r') continue;
    out += (c >= 0x20 && c <= 0x7E) ? static_cast<char>(c) : '.';
  }
  return out;
}

void EnsureStream() {
  if (g_initialized) return;
  g_initialized = true;
  const string path = g_Utility.GetModuleFolder() + "\\" + kRuntimeLogFileName;
  g_traceStream.open(path, std::ios_base::app);
  if (g_traceStream.is_open()) {
    g_traceStream << "\n=== IGI runtime-logging session started ===\n";
    g_traceStream.flush();
  }
}

void Emit(const std::string& line, bool echo_to_console) {
  if (!g_RuntimeLogEnabled.load(std::memory_order_relaxed)) return;

  std::string final_line = line;
  {
    std::lock_guard<std::mutex> lock(g_traceMutex);
    EnsureStream();

    const auto now = std::chrono::steady_clock::now();
    if (now - g_rate.start >= std::chrono::seconds(1)) {
      g_rate = RateWindow{now};
    }

    if (g_rate.emitted >= kMaxLinesPerSecond) {
      ++g_rate.dropped;
      if (g_rate.dropped % 500 != 0) return; // rate-limit: drop overflow traffic
      final_line = "[rate-limit] suppressed " + std::to_string(g_rate.dropped) +
                   " trace lines in this second";
    } else {
      ++g_rate.emitted;
    }

    if (g_traceStream.is_open()) {
      g_traceStream << final_line << "\n";
      g_traceStream.flush();
    }
  }

  // Console echo (Debug builds). Logger is re-entrancy-guarded by the caller.
  if (echo_to_console && g_Log) {
    g_Log->WriteA(true, false, ELOG_TYPE::TYPE_PRINT, "[IGI-runtime] %s",
                  final_line.c_str());
  }
}

bool IsOwnLog(const std::string& path) {
  return path.find("IGI-Natives") != std::string::npos;
}

// Raw writer that ignores the enabled flag; used to record toggle transitions
// into the trace file even while capture is disabled.
void EmitRaw(const std::string& line) {
  std::lock_guard<std::mutex> lock(g_traceMutex);
  EnsureStream();
  if (g_traceStream.is_open()) {
    g_traceStream << line << "\n";
    g_traceStream.flush();
  }
}

} // namespace

// ---------------------------------------------------------------------------
// Config
// ---------------------------------------------------------------------------

void RuntimeLogReadConfig() {
  char value[8] = {0};
  if (GetEnvironmentVariableA("IGI_RUNTIME_LOG", value, sizeof(value))) {
    g_RuntimeLogEnabled.store(value[0] != '0');
  }
  if (GetEnvironmentVariableA("IGI_RUNTIME_LOG_VERBOSE", value, sizeof(value))) {
    g_RuntimeLogVerbose.store(value[0] != '0');
  }

  // Establish the game trace at DLL startup before the first captured write.
  std::lock_guard<std::mutex> lock(g_traceMutex);
  EnsureStream();
}

void RuntimeLogShutdown() {
  std::lock_guard<std::mutex> lock(g_traceMutex);
  if (g_traceStream.is_open()) {
    g_traceStream << "=== IGI runtime-logging session ended ===\n";
    g_traceStream.close();
  }
  g_initialized = false;
}

const string RuntimeLogFilePath() {
  return g_Utility.GetModuleFolder() + "\\" + kRuntimeLogFileName;
}

void RuntimeLogRecord(const string& line) {
  Emit(line, false);
}

bool RuntimeLogSetEnabled(bool enable) {
  const bool previous = g_RuntimeLogEnabled.exchange(enable);
  if (previous != enable) {
    EmitRaw(enable ? "=== capture ENABLED (hotkey) ==="
                   : "=== capture DISABLED (hotkey) ===");
  }
  return enable;
}

bool RuntimeLogSetVerbose(bool enable) {
  const bool previous = g_RuntimeLogVerbose.exchange(enable);
  if (previous != enable) {
    EmitRaw(enable ? "=== capture mode VERBOSE (hotkey) ==="
                   : "=== capture mode NORMAL (hotkey) ===");
  }
  return enable;
}
// ---------------------------------------------------------------------------
// Retail native hook: static CRT _write (printf-family output)
// ---------------------------------------------------------------------------

int __cdecl CrtWriteDetour(int fd, const void* buffer, unsigned int count) {
  if (RuntimeLogGuard::Active()) return CrtWriteOut(fd, buffer, count);

  RuntimeLogGuard guard;
  if (g_RuntimeLogEnabled.load(std::memory_order_relaxed) && buffer && count) {
    std::string line = "[CRT:_write] fd=" + std::to_string(fd) +
                       " bytes=" + std::to_string(count);
    if (g_RuntimeLogVerbose.load(std::memory_order_relaxed)) {
      line += " :: " + Sanitize(std::string(static_cast<const char*>(buffer),
                                            std::min<size_t>(count, 128)),
                                128);
    }
    Emit(line, true);
  }
  return CrtWriteOut(fd, buffer, count);
}

// ---------------------------------------------------------------------------
// Win32 API hooks
// ---------------------------------------------------------------------------

void WINAPI OutputDebugStringADetour(LPCSTR lpOutputString) {
  if (RuntimeLogGuard::Active()) {
    OutputDebugStringAOut(lpOutputString);
    return;
  }

  RuntimeLogGuard guard;
  if (g_RuntimeLogEnabled.load(std::memory_order_relaxed) && lpOutputString &&
      lpOutputString[0]) {
    Emit(std::string("[OutputDebugStringA] ") + lpOutputString, true);
  }
  OutputDebugStringAOut(lpOutputString);
}

HANDLE WINAPI CreateFileADetour(LPCSTR lpFileName, DWORD dwDesiredAccess,
                                DWORD dwShareMode,
                                LPSECURITY_ATTRIBUTES lpSecurityAttributes,
                                DWORD dwCreationDisposition,
                                DWORD dwFlagsAndAttributes,
                                HANDLE hTemplateFile) {
  if (RuntimeLogGuard::Active()) {
    return CreateFileAOut(lpFileName, dwDesiredAccess, dwShareMode,
                          lpSecurityAttributes, dwCreationDisposition,
                          dwFlagsAndAttributes, hTemplateFile);
  }

  RuntimeLogGuard guard;
  HANDLE result = CreateFileAOut(lpFileName, dwDesiredAccess, dwShareMode,
                                 lpSecurityAttributes, dwCreationDisposition,
                                 dwFlagsAndAttributes, hTemplateFile);

  if (g_RuntimeLogEnabled.load(std::memory_order_relaxed) && lpFileName &&
      lpFileName[0] && result != INVALID_HANDLE_VALUE &&
      !IsOwnLog(lpFileName)) {
    std::string path(lpFileName);
    {
      std::lock_guard<std::mutex> lock(g_handleMutex);
      if (g_handlePaths.size() >= 8192) g_handlePaths.clear();
      g_handlePaths[result] = path;
    }
    Emit("[CreateFileA] '" + path + "' access=" + Hex(dwDesiredAccess) +
             " disposition=" + Hex(dwCreationDisposition),
         false);
  }
  return result;
}

BOOL WINAPI WriteFileDetour(HANDLE hFile, LPCVOID lpBuffer,
                            DWORD nNumberOfBytesToWrite,
                            LPDWORD lpNumberOfBytesWritten,
                            LPOVERLAPPED lpOverlapped) {
  if (RuntimeLogGuard::Active()) {
    return WriteFileOut(hFile, lpBuffer, nNumberOfBytesToWrite,
                        lpNumberOfBytesWritten, lpOverlapped);
  }

  RuntimeLogGuard guard;
  BOOL ok = WriteFileOut(hFile, lpBuffer, nNumberOfBytesToWrite,
                         lpNumberOfBytesWritten, lpOverlapped);

  if (g_RuntimeLogEnabled.load(std::memory_order_relaxed) && hFile &&
      nNumberOfBytesToWrite && GetFileType(hFile) != FILE_TYPE_CHAR) {
    std::string path;
    {
      std::lock_guard<std::mutex> lock(g_handleMutex);
      const auto it = g_handlePaths.find(hFile);
      if (it != g_handlePaths.end()) path = it->second;
    }
    std::string line =
        "[WriteFile] handle=" + Hex(reinterpret_cast<DWORD_PTR>(hFile)) +
        " bytes=" + std::to_string(nNumberOfBytesToWrite);
    if (!path.empty()) {
      if (IsOwnLog(path)) return ok; // never trace our own logs
      line += " path='" + path + "'";
    }
    if (g_RuntimeLogVerbose.load(std::memory_order_relaxed) && lpBuffer &&
        nNumberOfBytesToWrite <= 512) {
      line += " :: " +
              Sanitize(std::string(static_cast<const char*>(lpBuffer),
                                   nNumberOfBytesToWrite),
                       nNumberOfBytesToWrite);
    }
    Emit(line, false);
  }
  return ok;
}

// ---------------------------------------------------------------------------
// Installation
// ---------------------------------------------------------------------------

MH_STATUS InstallRuntimeLogHooks(Hook* hook) {
  if (!hook || !hook->IsReady()) return MH_ERROR_NOT_INITIALIZED;

  MH_STATUS first_error = MH_OK;
  auto note = [&](const char* label, MH_STATUS status) {
    if (status != MH_OK) {
      if (first_error == MH_OK) first_error = status;
      LOG_ERROR("RuntimeLog %s Hooking error : %s", label,
                MH_StatusToString(status));
    } else {
      LOG_INFO("RuntimeLog %s hook installed", label);
    }
    return status;
  };

  // Retail native: static CRT _write @ 0x004ABEC7 (printf/runtime-error output).
  note("CRT:_write@0x4ABEC7",
       hook->CreateHook(reinterpret_cast<LPVOID>(0x004ABEC7), &CrtWriteDetour,
                        &CrtWriteOut));

  // Win32 API hooks.
  note("OutputDebugStringA",
       hook->CreateHookApi(L"KERNEL32.dll", "OutputDebugStringA",
                           &OutputDebugStringADetour, &OutputDebugStringAOut));
  note("CreateFileA",
       hook->CreateHookApi(L"KERNEL32.dll", "CreateFileA", &CreateFileADetour,
                           &CreateFileAOut));
  note("WriteFile", hook->CreateHookApi(L"KERNEL32.dll", "WriteFile",
                                        &WriteFileDetour, &WriteFileOut));

  return first_error;
}

} // namespace IGI
