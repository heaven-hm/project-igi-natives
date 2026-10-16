#include "00497E70-Transcontext_SetActiveTransContext.h"
/* 0x00497e70 Transcontext_SetActiveTransContext full linked: callers=11 callees=1 */
int32_t Transcontext_SetActiveTransContext(int32_t* a1)

// Sig: void Transcontext_SetActiveTransContext(void* ctx)
// Note: Installs a TRANSFORM CONTEXT as active: copies 0x2A dwords from ctx
// into global 0xBCAAE0 and bumps state counters at 0x6E5BB0/B4. Param: ctx =
// transform-context struct (IGIPatch uses this around custom rendering). Use
// when injecting your own render passes.
{
    int32_t* esi = a1;
    int32_t eax = *((g_6e5ba4 << 2) + &g_a94e84);
    a1 = &g_bcaae0;
    memcpy(&g_bcaae0, esi, 0xa8);

    if (eax)
        eax(&a1);

    int32_t eax_1 = g_6e5bb4;
    g_6e5bb0 = 1;
    g_6e5bb4 = eax_1 + 1;
    return eax_1 + 1;
}
