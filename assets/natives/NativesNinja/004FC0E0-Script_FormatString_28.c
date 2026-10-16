#include "004FC0E0-Script_FormatString_28.h"
/* 0x004fc0e0 Script_FormatString_28 full linked: callers=7 callees=15 */
float* sub_4fc0e0(float a1, float a2, float a3, float a4, float a5, int32_t a6, double* a7)

{
    float var_28;
    memcpy(&var_28, a1 + 0x70, 0x28);
    float var_60 = a5;
    double var_40;
    memcpy(&var_40, a1 + 0x20, 0x18);
    sub_4fbf90(a1, a2, a3, a4);
    int16_t eax_2;
    eax_2 = *(a1 + 0x6d8);

    if (eax_2)
    {
        double* var_60_1 = a7;
        int32_t var_64_1 = a6;
        float var_68_1 = a5;
        float var_74_1 = a1;
        sub_4fb9a0(a2, a4);
    }

    eax_2 = *(a1 + 0x6d9);

    if (eax_2)
    {
        int32_t esi_3 = *(a1 + 0x10c);
        int32_t edi_2 = *(a1 + 0x110);
        *(a1 + 0x108) = *(a1 + 0x108);
        int32_t var_44_1 = edi_2;
        *(a1 + 0x10c) = esi_3;
        *(a1 + 0x110) = 0;
        sub_4ecdb0(a1 + 0xf0);
    }

    long double x87_r7 = *(a1 + 0xf8);
    long double temp0 = 40.9599991f;
    x87_r7 - temp0;
    eax_2 = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&eax_2 + 1) & 0x41))
    {
        var_40 = *(a1 + 0x108) + var_40;
        double var_38;
        double var_38_1 = *(a1 + 0x10c) + var_38;
        double var_30;
        double var_30_1 = *(a1 + 0x110) + var_30;
    }

    eax_2 = *(a1 + 0x6d9);

    if (eax_2)
    {
        float var_8;
        long double x87_r7_11 = var_8 * *(a1 + 0x7c);
        float var_10;
        long double x87_r6_4 = var_10 * *(a1 + 0x84);
        float var_c;
        *(a1 + 0x70) = var_8 * *(a1 + 0x80) - var_c * *(a1 + 0x84);
        long double x87_r7_15 = var_c * *(a1 + 0x7c);
        long double x87_r6_6 = var_10 * *(a1 + 0x80);
        *(a1 + 0x74) = -((x87_r7_11 - x87_r6_4));
        *(a1 + 0x78) = x87_r7_15 - x87_r6_6;
        long double x87_r7_21 = var_10 * *(a1 + 0x78);
        long double x87_r6_10 = var_8 * *(a1 + 0x70);
        *(a1 + 0x7c) = var_c * *(a1 + 0x78) - var_8 * *(a1 + 0x74);
        long double x87_r7_25 = var_10 * *(a1 + 0x74);
        long double x87_r6_12 = var_c * *(a1 + 0x70);
        *(a1 + 0x80) = -((x87_r7_21 - x87_r6_10));
        *(a1 + 0x88) = var_10;
        *(a1 + 0x84) = x87_r7_25 - x87_r6_12;
        *(a1 + 0x8c) = var_c;
        *(a1 + 0x90) = var_8;
    }

    long double x87_r7_27 = *(a1 + 0x9c);
    long double x87_r6_13 = *(a1 + 0xa0);
    x87_r6_13 - x87_r7_27;
    long double x87_r7_28;

    if (!(*(&((x87_r6_13 < x87_r7_27 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, x87_r7_27) ? 1 : 0) << 0xa
            | (x87_r6_13 == x87_r7_27 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_28 = *(a1 + 0xa0);
    else
        x87_r7_28 = *(a1 + 0x9c);

    long double x87_r6_14 = *(a1 + 0x98);
    x87_r6_14 - x87_r7_28;
    long double x87_r7_30;

    if (*(&((x87_r6_14 < x87_r7_28 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_14, x87_r7_28) ? 1 : 0) << 0xa
        | (x87_r6_14 == x87_r7_28 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_31 = *(a1 + 0x9c);
        long double x87_r6_15 = *(a1 + 0xa0);
        x87_r6_15 - x87_r7_31;

        if (!(*(&((x87_r6_15 < x87_r7_31 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_15, x87_r7_31) ? 1 : 0) << 0xa
                | (x87_r6_15 == x87_r7_31 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_30 = *(a1 + 0xa0);
        else
            x87_r7_30 = *(a1 + 0x9c);
    }
    else
        x87_r7_30 = *(a1 + 0x98);

    void* esi_4 = a5;
    sub_4c6940(esi_4, a1, &var_40, sub_4d0950(*(a1 + 0x6c)) * x87_r7_30);

    if (!sub_4fc620(a1, esi_4, a6, a7))
    {
        long double x87_r7_34 = *(a1 + 0x9c);
        long double x87_r6_16 = *(a1 + 0xa0);
        x87_r6_16 - x87_r7_34;
        long double x87_r7_35;

        if (!(*(&((x87_r6_16 < x87_r7_34 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_16, x87_r7_34) ? 1 : 0) << 0xa
                | (x87_r6_16 == x87_r7_34 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_35 = *(a1 + 0xa0);
        else
            x87_r7_35 = *(a1 + 0x9c);

        long double x87_r6_17 = *(a1 + 0x98);
        x87_r6_17 - x87_r7_35;
        long double x87_r7_37;

        if (*(&((x87_r6_17 < x87_r7_35 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_17, x87_r7_35) ? 1 : 0) << 0xa
            | (x87_r6_17 == x87_r7_35 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_38 = *(a1 + 0x9c);
            long double x87_r6_18 = *(a1 + 0xa0);
            x87_r6_18 - x87_r7_38;

            if (!(*(&((x87_r6_18 < x87_r7_38 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_18, x87_r7_38) ? 1 : 0) << 0xa
                    | (x87_r6_18 == x87_r7_38 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_37 = *(a1 + 0xa0);
            else
                x87_r7_37 = *(a1 + 0x9c);
        }
        else
            x87_r7_37 = *(a1 + 0x98);

        sub_4c6940(esi_4, a1, a1 + 0x6c0, sub_4d0950(*(a1 + 0x6c)) * x87_r7_37);
        memcpy(a1 + 0x70, a1 + 0x694, 0x28);
    }

    *(a1 + 0x708) = *(a1 + 0x20) - *(a1 + 0x6c0);
    *(a1 + 0x710) = *(a1 + 0x28) - *(a1 + 0x6c8);
    *(a1 + 0x718) = *(a1 + 0x30) - *(a1 + 0x6d0);
    int32_t var_24 = *(a1 + 0x6a0);
    int32_t eax_17 = *(a1 + 0x698);
    var_28 = *(a1 + 0x694);
    int32_t var_1c = eax_17;
    int32_t var_20 = *(a1 + 0x6ac);
    int32_t var_14 = *(a1 + 0x6b0);
    int32_t var_18 = *(a1 + 0x6a4);
    long double x87_r7_47 = *(a1 + 0x78);
    int32_t var_c_1 = *(a1 + 0x6a8);
    int32_t var_10_1 = *(a1 + 0x69c);
    int32_t var_4 = *(a1 + 0x6b8);
    int32_t var_8_1 = *(a1 + 0x6b4);
    memcpy(a1 + 0x6dc, &var_28, 0x28);
    var_28 = x87_r7_47 * *(a1 + 0x6f4) + *(a1 + 0x70) * *(a1 + 0x6dc)
        + *(a1 + 0x74) * *(a1 + 0x6e8);
    long double x87_r7_54 = *(a1 + 0x78) * *(a1 + 0x6f8) + *(a1 + 0x6e0) * *(a1 + 0x70)
        + *(a1 + 0x74) * *(a1 + 0x6ec);
    float var_24_1 = x87_r7_54;
    long double x87_r7_58 = *(a1 + 0x6f0) * *(a1 + 0x74) + *(a1 + 0x6fc) * *(a1 + 0x78)
        + *(a1 + 0x70) * *(a1 + 0x6e4);
    float var_20_1 = x87_r7_58;
    long double x87_r7_62 = *(a1 + 0x7c) * *(a1 + 0x6dc) + *(a1 + 0x6f4) * *(a1 + 0x84)
        + *(a1 + 0x80) * *(a1 + 0x6e8);
    float var_1c_1 = x87_r7_62;
    int32_t var_4_1 = *(a1 + 0x700) + *(a1 + 0x94) + 1;
    long double x87_r7_66 = *(a1 + 0x84) * *(a1 + 0x6f8) + *(a1 + 0x80) * *(a1 + 0x6ec)
        + *(a1 + 0x7c) * *(a1 + 0x6e0);
    float var_18_1 = x87_r7_66;
    long double x87_r7_70 = *(a1 + 0x6fc) * *(a1 + 0x84) + *(a1 + 0x6f0) * *(a1 + 0x80)
        + *(a1 + 0x7c) * *(a1 + 0x6e4);
    float var_14_1 = x87_r7_70;
    long double x87_r7_74 = *(a1 + 0x6e8) * *(a1 + 0x8c) + *(a1 + 0x88) * *(a1 + 0x6dc)
        + *(a1 + 0x6f4) * *(a1 + 0x90);
    float var_10_2 = x87_r7_74;
    long double x87_r7_78 = *(a1 + 0x90) * *(a1 + 0x6f8) + *(a1 + 0x8c) * *(a1 + 0x6ec)
        + *(a1 + 0x88) * *(a1 + 0x6e0);
    float var_c_2 = x87_r7_78;
    long double x87_r7_82 = *(a1 + 0x88) * *(a1 + 0x6e4) + *(a1 + 0x6fc) * *(a1 + 0x90)
        + *(a1 + 0x6f0) * *(a1 + 0x8c);
    float var_8_2 = x87_r7_82;
    memcpy(a1 + 0x6dc, &var_28, 0x28);
    memcpy(a1 + 0x6c0, a1 + 0x20, 0x18);
    memcpy(a1 + 0x694, a1 + 0x70, 0x28);
    return a1 + 0x6dc;
}
