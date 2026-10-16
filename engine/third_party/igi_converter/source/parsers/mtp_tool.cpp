/******************************************************************************
 * @file    mtp_tool.cpp
 * @brief   Drive the external mtp_decoder.exe to (re)generate a level .mtp.
 *****************************************************************************/

#include "mtp_tool.h"
#include "../logger.h"
#include <algorithm>
#include <filesystem>
#include <vector>

#ifdef _WIN32
#include <windows.h>

namespace {

// Returns the .mtp's last-write time as a comparable count, or -1 if absent.
long long MtpMtime(const std::string& path) {
    std::error_code ec;
    if (!std::filesystem::exists(path, ec))
        return -1;
    auto t = std::filesystem::last_write_time(path, ec);
    if (ec)
        return -1;
    return t.time_since_epoch().count();
}

// Build an INPUT_RECORD for a single key press (down then up appended by caller).
INPUT_RECORD KeyRecord(WORD vk, char ascii, bool down) {
    INPUT_RECORD r{};
    r.EventType = KEY_EVENT;
    r.Event.KeyEvent.bKeyDown = down ? TRUE : FALSE;
    r.Event.KeyEvent.wRepeatCount = 1;
    r.Event.KeyEvent.wVirtualKeyCode = vk;
    r.Event.KeyEvent.wVirtualScanCode = (WORD)MapVirtualKeyA(vk, MAPVK_VK_TO_VSC);
    r.Event.KeyEvent.uChar.AsciiChar = ascii;
    r.Event.KeyEvent.dwControlKeyState = 0;
    return r;
}

// Best-effort injection of the menu choice into the child's console input buffer.
//
// Two gotchas, both verified against mtp_decoder.exe v0.08:
//  1. The tool's menu ("M: Packed MTP - ...") is matched against the LOWERCASE ascii
//     char its FPC-crt ReadKey returns. Sending AsciiChar 'M' (uppercase) is treated as
//     an unrecognized choice -> the tool exits WITHOUT writing the .mtp. We must send
//     AsciiChar 'm'. No Enter is required (ReadKey takes a single keypress).
//  2. After AttachConsole, GetStdHandle returns this process's *stale* std handle, not
//     the freshly-attached child console (WriteConsoleInput then fails with
//     ERROR_INVALID_HANDLE). We must open the live input buffer via CONIN$.
//
// Returns true if the keystroke was written into the child's input buffer. Any failure
// is swallowed; the user can press M manually.
bool TryInjectChoice(DWORD childPid) {
    // Detach from our (likely none) console and attach to the child's.
    FreeConsole();
    if (!AttachConsole(childPid)) {
        // Restore parent console attachment and give up.
        FreeConsole();
        AttachConsole(ATTACH_PARENT_PROCESS);
        return false;
    }

    bool wrote = false;
    HANDLE hIn = CreateFileA("CONIN$", GENERIC_READ | GENERIC_WRITE,
                             FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr,
                             OPEN_EXISTING, 0, nullptr);
    if (hIn != INVALID_HANDLE_VALUE && hIn != nullptr) {
        INPUT_RECORD recs[2] = {
            KeyRecord('M', 'm', true),   // lowercase ascii is what the tool matches
            KeyRecord('M', 'm', false),
        };
        DWORD written = 0;
        if (WriteConsoleInputA(hIn, recs, 2, &written) && written == 2)
            wrote = true;
        CloseHandle(hIn);
    }

    FreeConsole();
    AttachConsole(ATTACH_PARENT_PROCESS);
    return wrote;
}

// Bring the child's console window to the foreground so a user who must press M
// manually sees it immediately. Best-effort; any failure is ignored.
struct FindWindowCtx { DWORD pid; HWND hwnd; };

BOOL CALLBACK FindChildWindowProc(HWND hwnd, LPARAM lp) {
    auto* ctx = reinterpret_cast<FindWindowCtx*>(lp);
    DWORD winPid = 0;
    GetWindowThreadProcessId(hwnd, &winPid);
    if (winPid == ctx->pid && GetWindow(hwnd, GW_OWNER) == nullptr && IsWindowVisible(hwnd)) {
        ctx->hwnd = hwnd;
        return FALSE; // found it; stop enumerating
    }
    return TRUE;
}

void BringChildToForeground(DWORD childPid) {
    FindWindowCtx ctx{ childPid, nullptr };
    EnumWindows(FindChildWindowProc, reinterpret_cast<LPARAM>(&ctx));
    if (ctx.hwnd) {
        ShowWindow(ctx.hwnd, SW_RESTORE);
        SetForegroundWindow(ctx.hwnd);
    }
}

} // namespace

bool RunMtpDecoder(const std::string& exePath, const std::string& datPath,
                   const std::string& expectedMtpPath, std::string& err,
                   unsigned timeoutMs) {
    if (!std::filesystem::exists(exePath)) {
        err = "mtp_decoder.exe not found: " + exePath;
        Logger::Get().Log(LogLevel::WARNING, "[MTPTool] " + err);
        return false;
    }
    if (!std::filesystem::exists(datPath)) {
        err = ".dat not found: " + datPath;
        Logger::Get().Log(LogLevel::WARNING, "[MTPTool] " + err);
        return false;
    }

    const long long beforeMtime = MtpMtime(expectedMtpPath);

    // The tool reads the .dat filename relative to its CWD: pass just the filename
    // and set CWD to the .dat's directory.
    std::filesystem::path datP(datPath);
    const std::string cwd = datP.parent_path().string();
    const std::string datName = datP.filename().string();

    std::string cmd = "\"" + exePath + "\" \"" + datName + "\"";
    std::vector<char> cmdBuf(cmd.begin(), cmd.end());
    cmdBuf.push_back('\0');

    STARTUPINFOA si{};
    si.cb = sizeof(si);
    PROCESS_INFORMATION pi{};

    if (!CreateProcessA(exePath.c_str(), cmdBuf.data(), nullptr, nullptr, FALSE,
                        CREATE_NEW_CONSOLE, nullptr, cwd.c_str(), &si, &pi)) {
        err = "CreateProcess failed (" + std::to_string(GetLastError()) + ") for " + exePath;
        Logger::Get().Log(LogLevel::WARNING, "[MTPTool] " + err);
        return false;
    }

    // Drive the tool: spend at most a few seconds injecting the 'm' keystroke and
    // polling for the .mtp to be (re)written. The synthetic keypress sits in the child's
    // input buffer until its ReadKey consumes it, so an early inject is fine; we still
    // retry a handful of times in case the very first AttachConsole races the child's
    // console creation. We cap the synchronous wait low (a few seconds) so the editor's
    // UI does not appear frozen -- if the tool somehow stalls, the user just presses M.
    bool ok = false;
    bool injected = false;
    const DWORD shortDeadline = GetTickCount() + (std::min)(timeoutMs, 6000u);
    for (int attempt = 0; GetTickCount() < shortDeadline; ++attempt) {
        // (Re)try the keystroke a few times early; once written it stays buffered.
        if (attempt < 6) {
            if (TryInjectChoice(pi.dwProcessId))
                injected = true;
        }

        long long now = MtpMtime(expectedMtpPath);
        if (now != -1 && (beforeMtime == -1 || now > beforeMtime)) {
            ok = true;
            break;
        }
        if (WaitForSingleObject(pi.hProcess, 250) == WAIT_OBJECT_0) {
            // Process exited; one final check.
            long long fin = MtpMtime(expectedMtpPath);
            if (fin != -1 && (beforeMtime == -1 || fin > beforeMtime))
                ok = true;
            break;
        }
    }

    bool childAlive = (WaitForSingleObject(pi.hProcess, 0) != WAIT_OBJECT_0);
    if (!ok && childAlive) {
        // Injection did not land within the short window and the tool is still at its
        // prompt. Surface its window so the user can immediately press M, and leave it
        // running rather than freezing the editor for the full timeout.
        BringChildToForeground(pi.dwProcessId);
    }

    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);

    if (ok) {
        Logger::Get().Log(LogLevel::INFO, "[MTPTool] mtp_decoder regenerated " + expectedMtpPath);
    } else {
        err = "mtp_decoder did not finish automatically; press M in its console window "
              "to write " + std::filesystem::path(expectedMtpPath).filename().string() +
              (injected ? " (keystroke was injected but no .mtp yet)" : "");
        Logger::Get().Log(LogLevel::WARNING, "[MTPTool] " + err);
    }
    return ok;
}

#else // !_WIN32

bool RunMtpDecoder(const std::string&, const std::string&,
                   const std::string&, std::string& err, unsigned) {
    err = "RunMtpDecoder is Windows-only";
    return false;
}

#endif
