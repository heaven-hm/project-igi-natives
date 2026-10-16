#include "004432F0-SCamera_Cleanup_9.h"
/* 0x004432f0 SCamera_Cleanup_9 full linked: callers=0 callees=6 */
int32_t sub_4432f0(float a1, void* a2)

{
    int32_t* esi = a1;
    double* edi = esi[0x974];
    double var_18;
    WeaponType_UpdateAnim(&var_18, edi, 0);
    var_18 = var_18 + edi[4];
    double var_10;
    double var_10_1 = var_10 + edi[5];
    double var_8;
    double var_8_1 = var_8 + edi[6];
    long double x87_r7_6 = esi[0x27];
    long double x87_r6 = esi[0x28];
    x87_r6 - x87_r7_6;
    long double x87_r7_7;

    if (!(*(&((x87_r6 < x87_r7_6 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7_6) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7_6 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_7 = esi[0x28];
    else
        x87_r7_7 = esi[0x27];

    long double x87_r6_1 = esi[0x26];
    x87_r6_1 - x87_r7_7;
    long double x87_r7_9;

    if (*(&((x87_r6_1 < x87_r7_7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_7) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_10 = esi[0x27];
        long double x87_r6_2 = esi[0x28];
        x87_r6_2 - x87_r7_10;

        if (!(*(&((x87_r6_2 < x87_r7_10 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_2, x87_r7_10) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_10 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_9 = esi[0x28];
        else
            x87_r7_9 = esi[0x27];
    }
    else
        x87_r7_9 = esi[0x26];

    long double x87_r7_12 = sub_4d0950(esi[0x1b]) * x87_r7_9;
    sub_4c7140(*(a2 + 4), esi, &var_18, x87_r7_12, 1);
    double* eax_3 = sub_4c3440(esi);
    int32_t result = sub_4dccb0(esi[0x1a], esi, eax_3);
    int32_t* i = esi[2];

    if (*i && i)
    {
        int32_t ecx_2 = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i;
            void* eax_7;

            if (!edx_1)
                eax_7 = nullptr;
            else
            {
                int32_t eax_4 = *edx_1;
                int32_t eax_5 = -(eax_4);
                eax_7 = (eax_5 - eax_5) & edx_1;
            }

            *((ecx_2 << 2) + &g_afa6e0) = eax_7;
            g_afa7e0 = ecx_2 + 1;
            uint32_t eax_9 = sub_4cea10();
            int32_t eax_10 = 0;
            eax_10 = i[7];
            result = *(((eax_9 * 0x180 + eax_10) << 2) + &g_a96ae0);

            if (result)
                result = result(i, a2);

            ecx_2 = g_afa7e0 - 1;
            g_afa7e0 = ecx_2;
            i = *((ecx_2 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
