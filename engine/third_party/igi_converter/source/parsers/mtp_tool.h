/******************************************************************************
 * @file    mtp_tool.h
 * @brief   Drive the external mtp_decoder.exe to (re)generate a level .mtp
 *          from its text .dat (the game accepts the tool's output).
 *****************************************************************************/

#pragma once
#include <string>

// Run editor/tools/mtp_decoder.exe on datPath to (re)generate the sibling .mtp.
// The tool is an interactive Pascal crt console app; we spawn it in its own console and
// inject its "Packed MTP" menu choice via the Windows console input buffer (AttachConsole
// + CONIN$ + a lowercase-'m' KEY_EVENT -- the tool matches the lowercase ascii char and
// silently exits without writing on uppercase 'M'). Returns true if the expected .mtp was
// regenerated (mtime advanced). The synchronous wait is capped at a few seconds so the UI
// does not freeze; if injection has not landed by then the tool's console is brought to
// the foreground and false is returned (caller tells the user to press M). Windows-only;
// no-op returning false elsewhere.
bool RunMtpDecoder(const std::string& exePath, const std::string& datPath,
                   const std::string& expectedMtpPath, std::string& err,
                   unsigned timeoutMs = 8000);
