// IGI native provenance: RenderLight_GetContext_527160 - 0x00527160 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00527160-RenderLight_GetContext_527160.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_GetContext_527160.h"

int32_t* RenderLight_GetContext_527160(void* arg1)

{
    *(arg1 + 0x20) = g_a44344;
    *(arg1 + 0x24) = 0;
    *(arg1 + 0x28) = 0;
    __builtin_memset(arg1 + 0x30, 0, 0x1c);
    *(arg1 + 0x2c) = 0x3f800000;
    *(arg1 + 0x4c) = 1;
    *(arg1 + 0x4d) = 1;
    int32_t ba1e08_1 = g_ba1e08;
    void** ecx_6 = *(g_ba1e04 + (ba1e08_1 << 2)) * g_ba1e10 + g_ba1e00;
    *(g_ba1e14 + ecx_6) = ba1e08_1;
    g_ba1e08 += 1;
    *(arg1 + 0x60) = ecx_6;
    *ecx_6 = arg1;
    return Light_UpdateGlobalLight_5(arg1);
}
