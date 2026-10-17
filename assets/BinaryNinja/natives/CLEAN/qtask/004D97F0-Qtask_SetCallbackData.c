// IGI native provenance: Qtask_SetCallbackData - 0x004D97F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D97F0-Qtask_SetCallbackData.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Qtask_SetCallbackData.h"
int32_t Qtask_SetCallbackData(void* context, int32_t param_2)

// Sig: void Qtask_SetCallbackData(void* task, unsigned int callbackData)
// Note: Stores the raw 32-bit callback payload at task+0x48. Qtask_UpdateList
// (0x004D27F0) retrieves this field and passes it as the second argument to
// each registered per-task-type callback. Ghidra/r2: exact
// 0x004D97F0-0x004D97FB boundary, 1 basic block, 0 CFG edges, cdecl 2-argument
// store.
{
    *(context + 0x48) = param_2;
    return param_2;
}
