#include "0050EDC0-Physics_EvaluateAreaCriteria_14.h"
/* 0x0050edc0 Physics_EvaluateAreaCriteria_14 full linked: callers=1 callees=0 */
void sub_50edc0(float a1)

{
    int32_t ecx_11 = g_bcaaa8;

    if (!ecx_11)
        return;

    float ebp_1 = a1;
    int32_t var_10_1 = *(ebp_1 + 0x50);
    int32_t var_10_2 = *(ebp_1 + 0x4c);
    int32_t var_10_3 = g_bcaac0;
    int32_t* var_50_1 = ecx_11 + ((g_bcaaa0 * var_10_1 + var_10_2) << 2);
    int32_t ebx_1 = g_bcaac4;
    int32_t var_24_1 = ebx_1;
    int32_t edx_5 = g_bcaac8 + var_10_3;
    int32_t var_28_1 = edx_5;
    int32_t ecx_3 = g_bcaacc + ebx_1;

    if (var_10_2 >= edx_5 || var_10_1 >= ecx_3 || *(ebp_1 + 0x6c) + var_10_2 < var_10_3)
        return;

    int32_t var_10_8 = *(ebp_1 + 0x70);

    if (var_10_8 + var_10_1 < ebx_1)
        return;

    long double x87_r7_9 = *(ebp_1 + 0x54);
    int32_t var_44_1 = 0;
    a1 = 1f - x87_r7_9;
    int32_t var_10_9 = x87_r7_9 * *(ebp_1 + 0x58) * 255f;
    int32_t var_10_10 = x87_r7_9 * *(ebp_1 + 0x5c) * 255f;
    int64_t var_10_11 = x87_r7_9 * *(ebp_1 + 0x60) * 255f;
    int32_t edi_6 = var_10_11;

    if (var_10_8 <= 0)
        return;

    int32_t ecx_7 = var_10_1;
    int32_t var_40_1 = ecx_7;
    bool cond:3_1;

    do
    {
        if (ecx_7 >= ebx_1 && ecx_7 < ecx_3)
        {
            long double x87_r7_12 = 0f;
            long double temp0_1 = *(ebp_1 + 0x6c);
            x87_r7_12 - temp0_1;
            int32_t var_54_1 = 0;

            if (*(&((x87_r7_12 < temp0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_12, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_12 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                int32_t ecx_8 = var_10_2;
                int32_t* edi_7 = var_50_1;
                int32_t var_48_1 = ecx_8;
                long double x87_r7_19;
                long double temp1_1;

                do
                {
                    if (ecx_8 >= var_10_3 && ecx_8 < edx_5)
                    {
                        int32_t eax_2 = *edi_7;
                        int32_t var_1c_1 = 0;
                        int32_t var_14_1 = 0;
                        *(&var_10_11 + 4) = 0;
                        var_10_11 = eax_2 & 0xff;
                        int32_t eax_5 = var_10_9 + (eax_2 >> 0x10) * a1;
                        char ecx_10 = -1;

                        if (eax_5 <= 0xff)
                            ecx_10 = eax_5;

                        int32_t esi_1 = (eax_2 >> 8) * a1 + var_10_10;

                        if (esi_1 > 0xff)
                            esi_1 = 0xff;

                        int32_t eax_7 = var_10_11 * a1 + edi_6;

                        if (eax_7 > 0xff)
                            eax_7 = 0xff;

                        int32_t edx_14 = 0;
                        *(&edx_14 + 1) = ecx_10;
                        ecx_8 = var_48_1;
                        *edi_7 = (edx_14 | (esi_1 & 0xffff)) << 8 | (eax_7 & 0xffffff);
                        edx_5 = var_28_1;
                    }

                    edi_7 = &edi_7[1];
                    ecx_8 += 1;
                    var_54_1 += 1;
                    var_48_1 = ecx_8;
                    x87_r7_19 = var_54_1;
                    temp1_1 = *(ebp_1 + 0x6c);
                    x87_r7_19 - temp1_1;
                } while (*(&((x87_r7_19 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_19, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_19 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1);
                ecx_7 = var_40_1;
                ebx_1 = var_24_1;
            }
        }

        var_50_1 = &var_50_1[g_bcaaa0];
        ecx_7 += 1;
        cond:3_1 = var_44_1 + 1 < *(ebp_1 + 0x70);
        var_44_1 += 1;
        var_40_1 = ecx_7;
    } while (cond:3_1);
}
