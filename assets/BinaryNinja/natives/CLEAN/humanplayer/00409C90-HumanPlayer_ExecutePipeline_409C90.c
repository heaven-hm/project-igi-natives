// IGI native provenance: HumanPlayer_ExecutePipeline_409C90 - 0x00409C90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00409C90-HumanPlayer_ExecutePipeline_409C90.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_ExecutePipeline_409C90.h"

int32_t HumanPlayer_ExecutePipeline_409C90(void* arg1, void* arg2)

{
    int32_t base_val = *(arg1 + 8);

    if (!(base_val & 4))
    {
        void* data_val = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x1d;
        int32_t eax_1 = *(data_val + 0x74);
        *(arg1 + 0x14) = eax_1;
        return eax_1(arg1, arg2);
    }

    if (base_val & 0x10000)
    {
        void* edx_2 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x2e;
        int32_t eax_4 = *(edx_2 + 0xb8);
        *(arg1 + 0x14) = eax_4;
        return eax_4(arg1, arg2);
    }

    if (base_val & 0x20000)
    {
        void* edx_4 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x2f;
        int32_t eax_7 = *(edx_4 + 0xbc);
        *(arg1 + 0x14) = eax_7;
        return eax_7(arg1, arg2);
    }

    if (!(base_val & 0x40000))
    {
        void* edx_6 = *(arg1 + 4);
        *(arg1 + 0xc) = *(arg1 + 0x10);
        *(arg1 + 0x10) = 2;
        int32_t eax_10 = *(edx_6 + 8);
        *(arg1 + 0x14) = eax_10;
        return eax_10(arg1, arg2);
    }

    long double x87_r7 = *(arg2 + 0x1dc);
    long double temp0 = 0f;
    x87_r7 - temp0;
    int16_t result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        long double x87_r7_1 = *(arg2 + 0x13c);
        long double temp1_1 = 0f;
        x87_r7_1 - temp1_1;
        result = (x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
        {
            int32_t eax_12 = *(arg1 + 0x10);
            *(arg1 + 0x10) = 0x1c;
            *(arg1 + 0xc) = eax_12;
            int32_t eax_14 = *(*(arg1 + 4) + 0x70);
            *(arg1 + 0x14) = eax_14;
            return eax_14(arg1, arg2);
        }
    }

    if (!(base_val & 0x80))
    {
        int32_t eax_16 = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0xf;
        *(arg1 + 0xc) = eax_16;
        int32_t eax_18 = *(*(arg1 + 4) + 0x3c);
        *(arg1 + 0x14) = eax_18;
        return eax_18(arg1, arg2);
    }

    if (!(base_val & 0x40))
    {
        int32_t eax_20 = *(arg1 + 0x10);
        *(arg1 + 0x10) = 9;
        *(arg1 + 0xc) = eax_20;
        int32_t eax_22 = *(*(arg1 + 4) + 0x24);
        *(arg1 + 0x14) = eax_22;
        return eax_22(arg1, arg2);
    }

    if (!(*(&base_val + 1) & 0x20))
        return result;

    int32_t eax_24 = *(arg1 + 0x10);
    *(arg1 + 0x10) = 0x15;
    *(arg1 + 0xc) = eax_24;
    int32_t eax_26 = *(*(arg1 + 4) + 0x54);
    *(arg1 + 0x14) = eax_26;
    return eax_26(arg1, arg2);
}
