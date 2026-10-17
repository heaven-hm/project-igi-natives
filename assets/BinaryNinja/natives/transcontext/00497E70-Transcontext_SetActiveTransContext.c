// Original IGI.EXE function: Transcontext_SetActiveTransContext (VA 0x00497E70; static CFG gate FAIL, CFG score 0.667).
#include "Transcontext_SetActiveTransContext.h"
int32_t Transcontext_SetActiveTransContext(int32_t* context)

// Sig: void Transcontext_SetActiveTransContext(void* ctx)
// Note: Installs a TRANSFORM CONTEXT as active: copies 0x2A dwords from ctx
// into global 0xBCAAE0 and bumps state counters at 0x6E5BB0/B4. Param: ctx =
// transform-context struct (IGIPatch uses this around custom rendering). Use
// when injecting your own render passes.
{
    int32_t* source_val = context;
    int32_t data_val = *((g_6e5ba4 << 2) + &g_a94e84);
    context = &g_bcaae0;
    memcpy(&g_bcaae0, source_val, 0xa8);

    if (data_val)
        data_val(&context);

    int32_t data_1 = g_6e5bb4;
    g_6e5bb0 = 1;
    g_6e5bb4 = data_1 + 1;
    return data_1 + 1;
}
