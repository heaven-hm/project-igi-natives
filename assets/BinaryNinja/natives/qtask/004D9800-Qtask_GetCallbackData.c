// Original IGI.EXE function: Qtask_GetCallbackData (VA 0x004D9800; static CFG gate PASS, CFG score 1.000).
#include "Qtask_GetCallbackData.h"
int32_t Qtask_GetCallbackData(void* context)

// Sig: unsigned int Qtask_GetCallbackData(void* task)
// Note: Returns the raw 32-bit callback payload from task+0x48.
// Qtask_UpdateList (0x004D27F0) calls it immediately before invoking both
// callback tables. Ghidra/r2: exact 0x004D9800-0x004D9807 boundary, 1 basic
// block, 0 CFG edges, cdecl 1-argument load.
{
    return *(context + 0x48);
}
