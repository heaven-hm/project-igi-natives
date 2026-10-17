// IGI native provenance: HumanPlayer_ExecutePipeline_4087B0 - 0x004087B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004087B0-HumanPlayer_ExecutePipeline_4087B0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_ExecutePipeline_4087B0.h"

int32_t HumanPlayer_ExecutePipeline_4087B0(void* arg1, void* arg2)

{
    long double x87_r7 = *(arg2 + 0xdc0);
    long double temp0 = 0f;
    x87_r7 - temp0;
    long double x87_r7_1 = *(arg2 + 0xdc0);

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double temp1_1 = 0f;
        x87_r7_1 - temp1_1;

        if (!(*(&((x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            long double x87_r7_4 = *(arg2 + 0xdc0) - 0.00333333341f;
            *(arg2 + 0xdc0) = x87_r7_4;
            long double temp3_1 = 0f;
            x87_r7_4 - temp3_1;

            if (*(&((x87_r7_4 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1)
                *(arg2 + 0xdc0) = 0;
        }
    }
    else
    {
        long double x87_r7_2 = x87_r7_1 + 0.00333333341f;
        *(arg2 + 0xdc0) = x87_r7_2;
        long double temp2_1 = 0f;
        x87_r7_2 - temp2_1;

        if (!(*(&((x87_r7_2 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            *(arg2 + 0xdc0) = 0;
    }

    int32_t base_val = *(arg1 + 8);

    if (!(base_val & 4))
    {
        int32_t result_val = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x1d;
        *(arg1 + 0xc) = result_val;
        int32_t eax_2 = *(*(arg1 + 4) + 0x74);
        *(arg1 + 0x14) = eax_2;
        return eax_2(arg1, arg2);
    }

    if (base_val & 0x10000)
    {
        int32_t eax_4 = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x2e;
        *(arg1 + 0xc) = eax_4;
        int32_t eax_6 = *(*(arg1 + 4) + 0xb8);
        *(arg1 + 0x14) = eax_6;
        return eax_6(arg1, arg2);
    }

    if (base_val & 0x20000)
    {
        int32_t eax_8 = *(arg1 + 0x10);
        *(arg1 + 0x10) = 0x2f;
        *(arg1 + 0xc) = eax_8;
        int32_t eax_10 = *(*(arg1 + 4) + 0xbc);
        *(arg1 + 0x14) = eax_10;
        return eax_10(arg1, arg2);
    }

    if (!(base_val & 0x40000))
    {
        if (base_val & 0x80)
        {
            int32_t eax_28 = *(arg1 + 0x10);
            *(arg1 + 0x10) = 1;
            *(arg1 + 0xc) = eax_28;
            int32_t eax_30 = *(*(arg1 + 4) + 4);
            *(arg1 + 0x14) = eax_30;
            return eax_30(arg1, arg2);
        }

        if (*(&base_val + 1) & 1)
        {
            int32_t eax_32 = *(arg1 + 0x10);
            *(arg1 + 0x10) = 4;
            *(arg1 + 0xc) = eax_32;
            int32_t eax_34 = *(*(arg1 + 4) + 0x10);
            *(arg1 + 0x14) = eax_34;
            return eax_34(arg1, arg2);
        }

        if (base_val & 0x40)
        {
            int32_t eax_36 = *(arg1 + 0x10);
            *(arg1 + 0x10) = 7;
            *(arg1 + 0xc) = eax_36;
            int32_t eax_38 = *(*(arg1 + 4) + 0x1c);
            *(arg1 + 0x14) = eax_38;
            return eax_38(arg1, arg2);
        }

        if (base_val & 0x20)
        {
            int32_t eax_40 = *(arg1 + 0x10);
            *(arg1 + 0x10) = 8;
            *(arg1 + 0xc) = eax_40;
            int32_t eax_42 = *(*(arg1 + 4) + 0x20);
            *(arg1 + 0x14) = eax_42;
            return eax_42(arg1, arg2);
        }
    }
    else
    {
        if (base_val & 0x80)
        {
            int32_t eax_12 = *(arg1 + 0x10);
            *(arg1 + 0x10) = 9;
            *(arg1 + 0xc) = eax_12;
            int32_t eax_14 = *(*(arg1 + 4) + 0x24);
            *(arg1 + 0x14) = eax_14;
            return eax_14(arg1, arg2);
        }

        if (*(&base_val + 1) & 1)
        {
            int32_t eax_16 = *(arg1 + 0x10);
            *(arg1 + 0x10) = 0xc;
            *(arg1 + 0xc) = eax_16;
            int32_t eax_18 = *(*(arg1 + 4) + 0x30);
            *(arg1 + 0x14) = eax_18;
            return eax_18(arg1, arg2);
        }

        if (base_val & 0x40)
        {
            int32_t eax_20 = *(arg1 + 0x10);
            *(arg1 + 0x10) = 0xf;
            *(arg1 + 0xc) = eax_20;
            int32_t eax_22 = *(*(arg1 + 4) + 0x3c);
            *(arg1 + 0x14) = eax_22;
            return eax_22(arg1, arg2);
        }

        if (base_val & 0x20)
        {
            int32_t eax_24 = *(arg1 + 0x10);
            *(arg1 + 0x10) = 0x10;
            *(arg1 + 0xc) = eax_24;
            int32_t eax_26 = *(*(arg1 + 4) + 0x40);
            *(arg1 + 0x14) = eax_26;
            return eax_26(arg1, arg2);
        }
    }

    long double x87_r7_5 = *(arg2 + 0x1dc);
    long double temp4 = 0f;
    x87_r7_5 - temp4;
    int16_t result = (x87_r7_5 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp4) ? 1 : 0) << 0xa
        | (x87_r7_5 == temp4 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        long double x87_r7_6 = *(arg2 + 0x13c);
        long double temp5_1 = 0f;
        x87_r7_6 - temp5_1;
        result = (x87_r7_6 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp5_1) ? 1 : 0) << 0xa
            | (x87_r7_6 == temp5_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
        {
            int32_t eax_44 = *(arg1 + 0x10);
            *(arg1 + 0x10) = 0x1c;
            *(arg1 + 0xc) = eax_44;
            int32_t eax_46 = *(*(arg1 + 4) + 0x70);
            *(arg1 + 0x14) = eax_46;
            return eax_46(arg1, arg2);
        }
    }

    if (!(*(&base_val + 1) & 0x20))
        return result;

    int32_t eax_48 = *(arg1 + 0x10);
    *(arg1 + 0x10) = 0x13;
    *(arg1 + 0xc) = eax_48;
    int32_t eax_50 = *(*(arg1 + 4) + 0x4c);
    *(arg1 + 0x14) = eax_50;
    return eax_50(arg1, arg2);
}
