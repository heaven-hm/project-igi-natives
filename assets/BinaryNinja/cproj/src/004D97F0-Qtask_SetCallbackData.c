#include "gi_platform.h"
#include "004D97F0-Qtask_SetCallbackData.h"
int32_t Qtask_SetCallbackData(void* a1, int32_t a2)

// Sig: void Qtask_SetCallbackData(void* task, unsigned int callbackData)
// Note: Stores the raw 32-bit callback payload at task+0x48. Qtask_UpdateList
// (0x004D27F0) retrieves this field and passes it as the second argument to
// each registered per-task-type callback. Ghidra/r2: exact
// 0x004D97F0-0x004D97FB boundary, 1 basic block, 0 CFG edges, cdecl 2-argument
// store.
{
    (*(int32_t*)(uintptr_t)(a1 + 0x48)) = a2;
    return a2;
}
