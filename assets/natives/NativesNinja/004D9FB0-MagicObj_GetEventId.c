#include "004D9FB0-MagicObj_GetEventId.h"
/* 0x004d9fb0 MagicObj_GetEventId full linked: callers=37 callees=0 */
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
