// IGI native provenance: RenderLight_InvokeDataSymbolLoad - 0x0052B320 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052B320-RenderLight_InvokeDataSymbolLoad.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_InvokeDataSymbolLoad.h"

int32_t* RenderLight_InvokeDataSymbolLoad(void* arg1)

{
    int32_t a44344_1 = g_a44344;
    *(arg1 + 0x28) = 0;
    *(arg1 + 0x30) = 0;
    *(arg1 + 0x38) = 0;
    *(arg1 + 0x40) = 0;
    *(arg1 + 0x48) = 0;
    *(arg1 + 0x50) = 0;
    *(arg1 + 0x58) = 0;
    *(arg1 + 0x60) = 0;
    *(arg1 + 0x68) = 0;
    int32_t base_val = 0;
    *(arg1 + 0x20) = a44344_1;
    *(arg1 + 0x2c) = 0;
    *(arg1 + 0x34) = 0;
    *(arg1 + 0x3c) = 0;
    *(arg1 + 0x44) = 0;
    *(arg1 + 0x4c) = 0;
    *(arg1 + 0x54) = 0;
    *(arg1 + 0x5c) = 0;
    *(arg1 + 0x64) = 0;
    *(arg1 + 0x6c) = 0;
    *(arg1 + 0x70) = 0xa;
    Game_DataSymbolLoad(arg1 + 0x74, &g_script_ret_type);
    int32_t* a843ac_1 = g_a843ac;

    if (a843ac_1)
    {
        a843ac_1 = &g_a843ac;
        int32_t i;

        do
        {
            i = a843ac_1[1];
            a843ac_1 = &a843ac_1[1];
            base_val += 1;
        } while (i);
    }

    (&g_a843ac)[base_val] = arg1;
    return a843ac_1;
}
