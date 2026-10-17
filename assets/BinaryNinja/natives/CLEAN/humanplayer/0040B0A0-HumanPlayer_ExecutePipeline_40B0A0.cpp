// IGI native provenance: HumanPlayer_ExecutePipeline_40B0A0 - 0x0040B0A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040B0A0-HumanPlayer_ExecutePipeline_40B0A0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_ExecutePipeline_40B0A0.h"

void* HumanPlayer_ExecutePipeline_40B0A0(void* arg1, int32_t arg2)

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
        *(arg1 + 0x10) = 0x2e;
        int32_t ecx_4 = *(edx_3 + 0xb8);
        *(arg1 + 0x14) = ecx_4;
        return ecx_4(arg1, arg2);
    }

    if (context_val & 0x20000)
    {
        void* edx_5 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x2f;
        int32_t ecx_6 = *(edx_5 + 0xbc);
        *(arg1 + 0x14) = ecx_6;
        return ecx_6(arg1, arg2);
    }

    if (!(context_val & 0x20))
    {
        void* edx_7 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x14;
        int32_t ecx_8 = *(edx_7 + 0x50);
        *(arg1 + 0x14) = ecx_8;
        return ecx_8(arg1, arg2);
    }

    if (!(context_val & 0x80))
    {
        void* edx_9 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x1b;
        int32_t ecx_10 = *(edx_9 + 0x6c);
        *(arg1 + 0x14) = ecx_10;
        return ecx_10(arg1, arg2);
    }

    if (context_val & 0x2010)
        return arg1;

    *(arg1 + 0xc) = *(arg1 + 0x10);

    if (!(context_val & 0x40000))
    {
        void* edx_13 = *(arg1 + 4);
        *(arg1 + 0x10) = 3;
        int32_t ecx_13 = *(edx_13 + 0xc);
        *(arg1 + 0x14) = ecx_13;
        return ecx_13(arg1, arg2);
    }

    void* edx_11 = *(arg1 + 4);
    *(arg1 + 0x10) = 0xb;
    int32_t ecx_12 = *(edx_11 + 0x2c);
    *(arg1 + 0x14) = ecx_12;
    return ecx_12(arg1, arg2);
}
