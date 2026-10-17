// IGI native provenance: HumanAI_ExecutePipeline_453E50 - 0x00453E50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00453E50-HumanAI_ExecutePipeline_453E50.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_ExecutePipeline_453E50.h"

void* HumanAI_ExecutePipeline_453E50(void* arg1, int32_t arg2)

{
    int32_t context_val = *(arg1 + 8);

    if (!(context_val & 4))
    {
        void* edx_1 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 8;
        int32_t ecx_2 = *(edx_1 + 0x20);
        *(arg1 + 0x14) = ecx_2;
        return ecx_2(arg1, arg2);
    }

    if (context_val & 0x10000)
    {
        void* edx_3 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 9;
        int32_t ecx_4 = *(edx_3 + 0x24);
        *(arg1 + 0x14) = ecx_4;
        return ecx_4(arg1, arg2);
    }

    if (context_val & 0x20000)
    {
        void* edx_5 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0xa;
        int32_t ecx_6 = *(edx_5 + 0x28);
        *(arg1 + 0x14) = ecx_6;
        return ecx_6(arg1, arg2);
    }

    if (context_val & 0x200000)
    {
        void* edx_7 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 6;
        int32_t ecx_8 = *(edx_7 + 0x18);
        *(arg1 + 0x14) = ecx_8;
        return ecx_8(arg1, arg2);
    }

    if (*(&context_val + 1) & 8)
    {
        void* edx_9 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 4;
        int32_t ecx_10 = *(edx_9 + 0x10);
        *(arg1 + 0x14) = ecx_10;
        return ecx_10(arg1, arg2);
    }

    if (!(context_val & 0x40000))
    {
        void* edx_11 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 1;
        int32_t ecx_12 = *(edx_11 + 4);
        *(arg1 + 0x14) = ecx_12;
        return ecx_12(arg1, arg2);
    }

    if (context_val & 0x80)
        return arg1;

    int32_t* edx_13 = *(arg1 + 4);
    *(arg1 + 0xc) = *(arg1 + 0x10);
    *(arg1 + 0x10) = 0;
    int32_t ecx_14 = *edx_13;
    *(arg1 + 0x14) = ecx_14;
    return ecx_14(arg1, arg2);
}
