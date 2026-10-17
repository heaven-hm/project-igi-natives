// IGI native provenance: HumanAI_ExecutePipeline_458BF0 - 0x00458BF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00458BF0-HumanAI_ExecutePipeline_458BF0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_ExecutePipeline_458BF0.h"

void* HumanAI_ExecutePipeline_458BF0(void* arg1, int32_t arg2)

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
        *(arg1 + 0x10) = 0x1e;
        int32_t ecx_4 = *(edx_3 + 0x78);
        *(arg1 + 0x14) = ecx_4;
        return ecx_4(arg1, arg2);
    }

    if (context_val & 0x20000)
    {
        void* edx_5 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x21;
        int32_t ecx_6 = *(edx_5 + 0x84);
        *(arg1 + 0x14) = ecx_6;
        return ecx_6(arg1, arg2);
    }

    if (context_val & 0x100000)
    {
        void* edx_7 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x19;
        int32_t ecx_8 = *(edx_7 + 0x64);
        *(arg1 + 0x14) = ecx_8;
        return ecx_8(arg1, arg2);
    }

    if (!(context_val & 0x80010))
    {
        int32_t* edx_9 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0;
        int32_t ecx_10 = *edx_9;
        *(arg1 + 0x14) = ecx_10;
        return ecx_10(arg1, arg2);
    }

    if (*(&context_val + 1) & 2)
    {
        void* edx_11 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x18;
        int32_t ecx_12 = *(edx_11 + 0x60);
        *(arg1 + 0x14) = ecx_12;
        return ecx_12(arg1, arg2);
    }

    if (*(&context_val + 1) & 8)
    {
        void* edx_13 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x17;
        int32_t ecx_14 = *(edx_13 + 0x5c);
        *(arg1 + 0x14) = ecx_14;
        return ecx_14(arg1, arg2);
    }

    if (context_val & 0x20)
    {
        void* edx_15 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x14;
        int32_t ecx_16 = *(edx_15 + 0x50);
        *(arg1 + 0x14) = ecx_16;
        return ecx_16(arg1, arg2);
    }

    if (!(context_val & 0x40))
        return arg1;

    void* edx_17 = *(arg1 + 4);
    *(arg1 + 0xc) = *(arg1 + 0x10);
    *(arg1 + 0x10) = 0x15;
    int32_t ecx_18 = *(edx_17 + 0x54);
    *(arg1 + 0x14) = ecx_18;
    return ecx_18(arg1, arg2);
}
