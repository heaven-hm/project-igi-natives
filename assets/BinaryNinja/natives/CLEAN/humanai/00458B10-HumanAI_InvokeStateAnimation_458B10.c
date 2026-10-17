// IGI native provenance: HumanAI_InvokeStateAnimation_458B10 - 0x00458B10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00458B10-HumanAI_InvokeStateAnimation_458B10.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_InvokeStateAnimation_458B10.h"

void* HumanAI_InvokeStateAnimation_458B10(void* arg1, int32_t arg2)

{
    int32_t context_val = *(arg1 + 8);

    if (!(context_val & 4))
    {
        void* edx_1 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x1d;
        int32_t ecx_2 = *(edx_1 + 0x74);
        *(arg1 + 0x14) = ecx_2;
        return ecx_2(arg1, arg2);
    }

    if (context_val & 0x10000)
    {
        void* edx_3 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x1f;
        int32_t ecx_4 = *(edx_3 + 0x7c);
        *(arg1 + 0x14) = ecx_4;
        return ecx_4(arg1, arg2);
    }

    if (context_val & 0x20000)
    {
        void* edx_5 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x22;
        int32_t ecx_6 = *(edx_5 + 0x88);
        *(arg1 + 0x14) = ecx_6;
        return ecx_6(arg1, arg2);
    }

    if (!(context_val & 1))
        return arg1;

    int32_t* edx_7 = *(arg1 + 4);
    *(arg1 + 0xc) = *(arg1 + 0x10);
    *(arg1 + 0x10) = 0;
    int32_t ecx_8 = *edx_7;
    *(arg1 + 0x14) = ecx_8;
    return ecx_8(arg1, arg2);
}
