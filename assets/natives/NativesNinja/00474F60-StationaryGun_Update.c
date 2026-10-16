#include "00474F60-StationaryGun_Update.h"
/* 0x00474f60 StationaryGun_Update full linked: callers=0 callees=7 */
void* sub_474f60(double* a1, int32_t* a2)

{
    float* eax = a2[1];
    double var_30 = eax[2] * a1[0x28] + eax[1] * a1[0x27] + *eax * a1[0x26];
    double var_28 = eax[5] * a1[0x28] + eax[4] * a1[0x27] + eax[3] * a1[0x26];
    double var_20 = eax[8] * a1[0x28] + eax[7] * a1[0x27] + eax[6] * a1[0x26];
    memcpy(&a1[0x1e], &var_30, 0x18);
    a1[0x1e] = **a2 + a1[0x1e];
    a1[0x1f] = *(*a2 + 8) + a1[0x1f];
    a1[0x20] = *(*a2 + 0x10) + a1[0x20];
    float* eax_3 = a2[1];
    var_30 = *eax_3 * a1[0x29] + eax_3[2] * a1[0x2c] + eax_3[1] * *(a1 + 0x154);
    *(&var_30 + 4) = *eax_3 * *(a1 + 0x14c) + eax_3[2] * *(a1 + 0x164) + eax_3[1] * a1[0x2b];
    var_28 = *eax_3 * a1[0x2a] + eax_3[2] * a1[0x2d] + eax_3[1] * *(a1 + 0x15c);
    *(&var_28 + 4) = eax_3[5] * a1[0x2c] + eax_3[3] * a1[0x29] + eax_3[4] * *(a1 + 0x154);
    var_20 = eax_3[5] * *(a1 + 0x164) + eax_3[3] * *(a1 + 0x14c) + eax_3[4] * a1[0x2b];
    *(&var_20 + 4) = eax_3[5] * a1[0x2d] + eax_3[3] * a1[0x2a] + eax_3[4] * *(a1 + 0x15c);
    float var_18 = eax_3[8] * a1[0x2c] + eax_3[6] * a1[0x29] + eax_3[7] * *(a1 + 0x154);
    float var_14 = eax_3[8] * *(a1 + 0x164) + eax_3[6] * *(a1 + 0x14c) + eax_3[7] * a1[0x2b];
    int32_t var_c = eax_3[9] + *(a1 + 0x16c) + 1;
    float var_10 = eax_3[8] * a1[0x2d] + eax_3[6] * a1[0x2a] + eax_3[7] * *(a1 + 0x15c);
    long double x87_r7_54 = *(a1 + 0x9c);
    long double x87_r6_48 = a1[0x14];
    x87_r6_48 - x87_r7_54;
    memcpy(&a1[0x21], &var_30, 0x28);
    long double x87_r7_55;

    if (!(*(&((x87_r6_48 < x87_r7_54 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_48, x87_r7_54) ? 1 : 0) << 0xa
            | (x87_r6_48 == x87_r7_54 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_55 = a1[0x14];
    else
        x87_r7_55 = *(a1 + 0x9c);

    long double x87_r6_49 = a1[0x13];
    x87_r6_49 - x87_r7_55;
    long double x87_r7_57;

    if (*(&((x87_r6_49 < x87_r7_55 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_49, x87_r7_55) ? 1 : 0) << 0xa
        | (x87_r6_49 == x87_r7_55 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_58 = *(a1 + 0x9c);
        long double x87_r6_50 = a1[0x14];
        x87_r6_50 - x87_r7_58;

        if (!(*(&((x87_r6_50 < x87_r7_58 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_50, x87_r7_58) ? 1 : 0) << 0xa
                | (x87_r6_50 == x87_r7_58 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_57 = a1[0x14];
        else
            x87_r7_57 = *(a1 + 0x9c);
    }
    else
        x87_r7_57 = a1[0x13];

    float var_4c_1 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_57;
    void* var_58 = a1[0xd];
    sub_4c6940(var_58, a1, &a1[0x1e], var_4c_1);
    void* var_5c = &a1[0xe];
    memcpy(&a1[0xe], &a1[0x21], 0x28);
    sub_474420(a1);
    void* var_38 = &a1[0x1e];
    void* result = &a1[0x21];
    int32_t* i_1 = a1[1];
    void* result_1 = result;

    if (*i_1)
    {
        int32_t* i = i_1;

        if (i)
        {
            int32_t ecx_3 = g_afa7e0;

            do
            {
                int32_t* edx_3 = *i;
                void* eax_13;

                if (!edx_3)
                    eax_13 = nullptr;
                else
                {
                    int32_t eax_10 = *edx_3;
                    int32_t eax_11 = -(eax_10);
                    eax_13 = (eax_11 - eax_11) & edx_3;
                }

                *((ecx_3 << 2) + &g_afa6e0) = eax_13;
                g_afa7e0 = ecx_3 + 1;
                uint32_t eax_15 = sub_4c5800();
                int32_t edx_4 = 0;
                edx_4 = i[7];
                result = *(((eax_15 * 0x180 + edx_4) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, &var_38);

                ecx_3 = g_afa7e0 - 1;
                g_afa7e0 = ecx_3;
                i = *((ecx_3 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
