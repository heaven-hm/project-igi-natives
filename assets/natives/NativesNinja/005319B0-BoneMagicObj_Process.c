#include "005319B0-BoneMagicObj_Process.h"
/* 0x005319b0 BoneMagicObj_Process full linked: callers=0 callees=4 */
void* sub_5319b0(void* a1, int32_t* a2)

{
    float* eax = a2[1];
    void* edx = g_a44344;
    double var_40 = eax[2] * *(a1 + 0xe8) + eax[1] * *(a1 + 0xe0) + *eax * *(a1 + 0xd8);
    double var_38 = eax[5] * *(a1 + 0xe8) + eax[4] * *(a1 + 0xe0) + eax[3] * *(a1 + 0xd8);
    double* eax_1 = *a2;
    double var_30 = eax[8] * *(a1 + 0xe8) + eax[7] * *(a1 + 0xe0) + eax[6] * *(a1 + 0xd8);
    long double x87_r7_12 = var_40;
    double var_18;
    memcpy(&var_18, &var_40, 0x18);
    long double x87_r7_13 = x87_r7_12 + *eax_1;
    var_18 = x87_r7_13;
    double var_10;
    double var_10_1 = var_10 + eax_1[1];
    double var_8;
    long double x87_r6_15 = var_8 + eax_1[2];
    float eax_2 = *(a1 + 0xa0);
    long double x87_r5_1 = *(a1 + 0x120) + x87_r7_13;
    double* i_1 = &var_18;
    var_18 = x87_r5_1;
    double var_10_2 = *(a1 + 0x124) + var_10_1;
    double var_8_1 = *(a1 + 0x128) + x87_r6_15;
    sub_4c6940(edx, a1, i_1, eax_2);
    float* eax_3 = a2[1];
    var_40 = *(a1 + 0x108) * eax_3[2] + *(a1 + 0xf0) * *eax_3 + *(a1 + 0xfc) * eax_3[1];
    int32_t ecx = *(a1 + 0x114);
    *(&var_40 + 4) =
        *(a1 + 0x10c) * eax_3[2] + *(a1 + 0xf4) * *eax_3 + *(a1 + 0x100) * eax_3[1];
    var_38 = *(a1 + 0x110) * eax_3[2] + *(a1 + 0xf8) * *eax_3 + *(a1 + 0x104) * eax_3[1];
    *(&var_38 + 4) =
        *(a1 + 0xfc) * eax_3[4] + eax_3[5] * *(a1 + 0x108) + eax_3[3] * *(a1 + 0xf0);
    var_30 = *(a1 + 0x100) * eax_3[4] + eax_3[5] * *(a1 + 0x10c) + eax_3[3] * *(a1 + 0xf4);
    *(&var_30 + 4) =
        *(a1 + 0x104) * eax_3[4] + eax_3[5] * *(a1 + 0x110) + eax_3[3] * *(a1 + 0xf8);
    float var_28 =
        *(a1 + 0xfc) * eax_3[7] + eax_3[8] * *(a1 + 0x108) + eax_3[6] * *(a1 + 0xf0);
    float var_24 =
        *(a1 + 0x100) * eax_3[7] + eax_3[8] * *(a1 + 0x10c) + eax_3[6] * *(a1 + 0xf4);
    int32_t var_1c = eax_3[9] + ecx + 1;
    float var_20 =
        *(a1 + 0x104) * eax_3[7] + eax_3[8] * *(a1 + 0x110) + eax_3[6] * *(a1 + 0xf8);
    void* result = a1 + 0x78;
    memcpy(result, &var_40, 0x28);
    int32_t* i = *(a1 + 8);
    void* result_1 = *i;

    if (result_1 && i)
    {
        *(&var_40 + 4) = result;
        result = result_1;
        var_40 = a1 + 0x20;

        if (result && i)
        {
            int32_t ecx_1 = g_afa7e0;

            do
            {
                int32_t* edx_2 = *i;
                void* eax_8;

                if (!edx_2)
                    eax_8 = nullptr;
                else
                {
                    int32_t eax_5 = *edx_2;
                    int32_t eax_6 = -(eax_5);
                    eax_8 = (eax_6 - eax_6) & edx_2;
                }

                *((ecx_1 << 2) + &g_afa6e0) = eax_8;
                g_afa7e0 = ecx_1 + 1;
                uint32_t eax_10 = MagicObj_GetEventId();
                int32_t ecx_3 = 0;
                ecx_3 = i[7];
                result = *(((eax_10 * 0x180 + ecx_3) << 2) + &g_a96ae0);

                if (result)
                {
                    double* var_54_1 = &var_40;
                    i_1 = i;
                    result = result(i_1, var_54_1);
                }

                ecx_1 = g_afa7e0 - 1;
                g_afa7e0 = ecx_1;
                i = *((ecx_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
