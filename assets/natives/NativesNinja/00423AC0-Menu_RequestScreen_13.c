#include "00423AC0-Menu_RequestScreen_13.h"
/* 0x00423ac0 Menu_RequestScreen_13 full linked: callers=1 callees=6 */
int32_t Menu_RequestScreen_13(int32_t a1, float a2)

{
    int32_t edi = *(a1 + 0x354);
    int32_t result = edi + 0xa;
    int32_t var_1c = (g_c28b48 >> 1) + *(a1 + 0x24) - 0xf0;
    int32_t result_1 = result;

    if (edi < result)
    {
        int32_t* ecx_2 = a1 + (edi << 2) + 0x154;
        int32_t* var_18_1 = ecx_2;
        float var_10_1 = a2 * 0.5f;
        long double x87_r7_3 = (g_c28b44 >> 1) + *(a1 + 0x20) - 0x140;
        a1 = x87_r7_3;

        while (true)
        {
            int32_t* eax_4 = ecx_2[-0x40];
            int32_t* esi_1 = *ecx_2;

            if (eax_4 && esi_1)
            {
                int32_t edx_2 = eax_4[9];
                eax_4[5] = 0;
                eax_4[7] = 0;
                eax_4[1] = a1 + 4f;
                eax_4[6] = 0x43000000;
                eax_4[9] = edx_2 | 0x80000;
                eax_4[4] = a2;
                long double x87_r7_8 = var_1c + 5f;
                eax_4[2] = x87_r7_8;
                sub_4b6f50(eax_4);
                esi_1[9] |= 0x80000;
                esi_1[5] = 0x43000000;
                esi_1[6] = 0x42aa0000;
                esi_1[1] = a1 + 214f;
                esi_1[7] = 0;
                esi_1[4] = a2;
                esi_1[2] = x87_r7_8;
                sub_4b6f50(esi_1);
            }

            float var_14_1 = 16f;
            int32_t ebx_2 = edi & 1;

            if (!ebx_2)
                var_14_1 = 32f;

            float var_c_2 = var_1c;
            sub_4b4a00(a1, var_c_2, 210f, 20f, 0f, var_14_1, 0f, var_10_1, 0x80000, 0);
            float var_10_2 = 32f;

            if (!ebx_2)
                var_10_2 = 48f;

            sub_4b4a00(x87_r7_3 + 210f, var_c_2, 150f, 20f, 0f, var_10_2, 0f, var_10_1, 0x80000, 0);
            result = result_1;
            edi += 1;
            var_1c += 0x14;
            var_18_1 = &var_18_1[1];

            if (edi >= result)
                break;

            ecx_2 = var_18_1;
        }
    }

    return result;
}
