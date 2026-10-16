#include "004D9FA0-MagicObj_GetTypeId.h"
/* 0x004d9fa0 MagicObj_GetTypeId full linked: callers=32 callees=0 */
int32_t MagicObj_GetTypeId()

// Sig: unsigned short MagicObj_GetTypeId(void)
// Note: Returns the 16-bit MagicObj task-type ID stored at 0x00548648,
// allocated by MagicObj_Initialize and reset by MagicObj_Shutdown. Ghidra/r2:
// exact boundary, 1 basic block, 0 CFG edges, cdecl no-argument getter.
{
    int32_t result;
    result = g_548648;
    return result;
}
