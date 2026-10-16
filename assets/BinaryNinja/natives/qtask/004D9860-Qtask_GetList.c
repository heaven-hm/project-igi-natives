#include "Qtask_GetList.h"
int32_t Qtask_GetList()

// Sig: void* Qtask_GetList(void)
// Note: Returns the Qtask list allocated by Qtask_Initialize at 0x00A54690.
// Retail callers read the first dword as the current count and walk entries
// from list+0x08, using each entry's +0x1C task-type field. Ghidra/r2: exact
// 0x004D9860-0x004D9865 boundary, 1 basic block, 0 CFG edges, cdecl no-argument
// pointer getter.
{
    return g_a54690;
}
