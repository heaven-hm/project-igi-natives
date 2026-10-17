// Original IGI.EXE function: MagicObj_GetEventId (VA 0x004D9FB0; static CFG gate PASS, CFG score 1.000).
#include "MagicObj_GetEventId.h"
int32_t MagicObj_GetEventId()

// Sig: unsigned char MagicObj_GetEventId(void)
// Note: Returns the MagicObj event-slot byte stored at 0x0054864A, allocated by
// MagicObj_Initialize and released by MagicObj_Shutdown. Ghidra/r2: exact
// boundary, 1 basic block, 0 CFG edges, cdecl no-argument getter.
{
    int32_t result;
    result = g_54864a;
    return result;
}
