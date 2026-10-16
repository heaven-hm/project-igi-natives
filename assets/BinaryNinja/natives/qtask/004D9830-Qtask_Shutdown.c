#include "Qtask_Shutdown.h"
int32_t Qtask_Shutdown()

// Sig: void Qtask_Shutdown(void)
// Note: Shuts down the Qtask runtime: releases the event slot at 0x00548644
// through FUN_004018C0 and releases the list at 0x00A54690 through
// FUN_004C1830. Called by the subsystem shutdown at 0x00531DF0. Ghidra/r2:
// exact boundary, 1 basic block, 0 CFG edges, cdecl no-argument function.
{
    QTask_InitContext(g_548644);
    return DynObj_CreateMagicObject_4(g_a54690);
}
