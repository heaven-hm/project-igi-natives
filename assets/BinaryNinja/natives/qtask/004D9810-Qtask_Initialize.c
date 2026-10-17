// Original IGI.EXE function: Qtask_Initialize (VA 0x004D9810; static CFG gate PASS, CFG score 1.000).
#include "Qtask_Initialize.h"
int32_t* Qtask_Initialize()

// Sig: void Qtask_Initialize(void)
// Note: Initializes the Qtask runtime: allocates an event slot through
// FUN_004017C0(0), creates the 0x100-entry Qtask list through
// FUN_004C1800(0x100), and stores the event/list globals at 0x00548644 and
// 0x00A54690. Called by the subsystem startup at 0x00531DD0. Ghidra/r2: exact
// boundary, 1 basic block, 0 CFG edges, cdecl no-argument function.
{
    g_548644 = QTask_UnableToAllocateEvent(0);
    int32_t* result = Mem_Alloc8(0x100);
    g_a54690 = result;
    return result;
}
