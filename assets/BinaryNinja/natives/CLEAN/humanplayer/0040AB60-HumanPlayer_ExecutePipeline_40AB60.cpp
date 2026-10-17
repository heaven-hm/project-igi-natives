// IGI native provenance: HumanPlayer_ExecutePipeline_40AB60 - 0x0040AB60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040AB60-HumanPlayer_ExecutePipeline_40AB60.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_ExecutePipeline_40AB60.h"

void* HumanPlayer_ExecutePipeline_40AB60(void* arg1, int32_t arg2)

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

    if (context_val & 0x40)
    {
        void* edx_7 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x1a;
        int32_t ecx_8 = *(edx_7 + 0x68);
        *(arg1 + 0x14) = ecx_8;
        return ecx_8(arg1, arg2);
    }

    if (context_val & 0x20)
    {
        void* edx_9 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x1b;
        int32_t ecx_10 = *(edx_9 + 0x6c);
        *(arg1 + 0x14) = ecx_10;
        return ecx_10(arg1, arg2);
    }

    if (!(context_val & 0x2010))
    {
        int32_t* edx_11 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0;
        int32_t ecx_12 = *edx_11;
        *(arg1 + 0x14) = ecx_12;
        return ecx_12(arg1, arg2);
    }

    if (context_val & 0x80)
    {
        void* edx_13 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x14;
        int32_t ecx_14 = *(edx_13 + 0x50);
        *(arg1 + 0x14) = ecx_14;
        return ecx_14(arg1, arg2);
    }

    if (!(*(&context_val + 1) & 1))
        return arg1;

    void* edx_15 = *(arg1 + 4);
    *(arg1 + 0xc) = *(arg1 + 0x10);
    *(arg1 + 0x10) = 0x17;
    int32_t ecx_16 = *(edx_15 + 0x5c);
    *(arg1 + 0x14) = ecx_16;
    return ecx_16(arg1, arg2);
}
