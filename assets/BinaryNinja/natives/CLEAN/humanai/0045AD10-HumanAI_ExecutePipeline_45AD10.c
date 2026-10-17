// IGI native provenance: HumanAI_ExecutePipeline_45AD10 - 0x0045AD10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045AD10-HumanAI_ExecutePipeline_45AD10.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_ExecutePipeline_45AD10.h"

void* HumanAI_ExecutePipeline_45AD10(void* arg1, int32_t arg2)

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
        *(arg1 + 0x10) = 0x20;
        int32_t ecx_6 = *(edx_5 + 0x80);
        *(arg1 + 0x14) = ecx_6;
        return ecx_6(arg1, arg2);
    }

    if (context_val & 0x80000)
    {
        void* edx_7 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0xd;
        int32_t ecx_8 = *(edx_7 + 0x34);
        *(arg1 + 0x14) = ecx_8;
        return ecx_8(arg1, arg2);
    }

    if (context_val & 0x100000)
    {
        void* edx_9 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0xf;
        int32_t ecx_10 = *(edx_9 + 0x3c);
        *(arg1 + 0x14) = ecx_10;
        return ecx_10(arg1, arg2);
    }

    if (context_val & 0x2000000)
    {
        void* edx_11 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0xb;
        int32_t ecx_12 = *(edx_11 + 0x2c);
        *(arg1 + 0x14) = ecx_12;
        return ecx_12(arg1, arg2);
    }

    if (context_val & 0x4000000)
    {
        void* edx_13 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 8;
        int32_t ecx_14 = *(edx_13 + 0x20);
        *(arg1 + 0x14) = ecx_14;
        return ecx_14(arg1, arg2);
    }

    if (*(&context_val + 1) & 8)
    {
        void* edx_15 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 7;
        int32_t ecx_16 = *(edx_15 + 0x1c);
        *(arg1 + 0x14) = ecx_16;
        return ecx_16(arg1, arg2);
    }

    if (context_val & 0x1000000)
    {
        void* edx_17 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x11;
        int32_t ecx_18 = *(edx_17 + 0x44);
        *(arg1 + 0x14) = ecx_18;
        return ecx_18(arg1, arg2);
    }

    if (context_val & 0x800000)
    {
        void* edx_19 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 1;
        int32_t ecx_20 = *(edx_19 + 4);
        *(arg1 + 0x14) = ecx_20;
        return ecx_20(arg1, arg2);
    }

    if (context_val & 0x40000)
    {
        void* edx_21 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 3;
        int32_t ecx_22 = *(edx_21 + 0xc);
        *(arg1 + 0x14) = ecx_22;
        return ecx_22(arg1, arg2);
    }

    if (context_val & 0x20)
    {
        void* edx_23 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 4;
        int32_t ecx_24 = *(edx_23 + 0x10);
        *(arg1 + 0x14) = ecx_24;
        return ecx_24(arg1, arg2);
    }

    if (context_val & 0x40)
    {
        void* edx_25 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 5;
        int32_t ecx_26 = *(edx_25 + 0x14);
        *(arg1 + 0x14) = ecx_26;
        return ecx_26(arg1, arg2);
    }

    if (context_val & 0x80)
        return arg1;

    int32_t* edx_27 = *(arg1 + 4);
    *(arg1 + 0xc) = *(arg1 + 0x10);
    *(arg1 + 0x10) = 0;
    int32_t ecx_28 = *edx_27;
    *(arg1 + 0x14) = ecx_28;
    return ecx_28(arg1, arg2);
}
