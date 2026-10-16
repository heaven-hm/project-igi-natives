#include "004D4840-Render_DrawLightmapMesh_8.h"
/* 0x004d4840 Render_DrawLightmapMesh_8 full linked: callers=2 callees=0 */
int32_t sub_4d4840(int32_t* a1, int32_t* a2, float a3)

{
    float edx_4 = a3;
    int32_t* eax_1 = *(*(edx_4 + 0xc) + 8);
    int32_t edi = *eax_1;
    int32_t* esi = eax_1[1];
    int32_t* eax_2;
    int32_t* ecx_1;

    if (edi != 1)
    {
        float eax_3 = *(edx_4 + 0x2c);
        int32_t ecx_2 = 0;

        if (edi > 0)
        {
            int32_t* ebx_1 = &esi[3];

            do
            {
                a3 = *ebx_1;
                long double x87_r7_1 = a3;
                long double temp2_1 = eax_3;
                x87_r7_1 - temp2_1;

                if (!(*(&((x87_r7_1 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1))
                    break;

                ecx_2 += 1;
                ebx_1 = &ebx_1[0xa];
            } while (ecx_2 < edi);
        }

        long double x87_r7_2 = eax_3;
        long double temp1_1 = a3;
        x87_r7_2 - temp1_1;
        float var_4c_1;
        float var_48_1;
        float var_44_1;

        if (*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            int32_t ecx_3 = ecx_2 * 5;
            void* eax_7 = &esi[ecx_3 * 2];
            var_4c_1 = esi[ecx_3 * 2];
            var_48_1 = *(eax_7 + 4);
            var_44_1 = *(eax_7 + 8);
        }
        else if (ecx_2 != edi)
        {
            long double x87_r7_3 = a3;
            int32_t* eax_12 = &esi[ecx_2 * 0xa];
            long double x87_r7_8;

            if (!g_a54678)
            {
                long double x87_r7_10 = (x87_r7_3 - eax_3) / (a3 - eax_12[-7]);
                var_4c_1 = (eax_12[-0xa] - *eax_12) * x87_r7_10 + *eax_12;
                var_48_1 = (eax_12[-9] - eax_12[1]) * x87_r7_10 + eax_12[1];
                x87_r7_8 = x87_r7_10 * (eax_12[-8] - eax_12[2]) + eax_12[2];
            }
            else
            {
                long double x87_r7_4 = x87_r7_3 - eax_12[-7];
                long double x87_r6_4 = 1f - (a3 - eax_3) / x87_r7_4;
                long double x87_r5_2 = x87_r6_4 * x87_r6_4;
                a3 = x87_r5_2;
                long double x87_r5_3 = x87_r5_2 * x87_r6_4;
                float var_50_2 = x87_r5_3;
                long double x87_r5_5 = x87_r5_3 + x87_r5_3 - a3 * 3f;
                float var_10_1 = x87_r5_5 + 1f;
                float var_c_1 = -(x87_r5_5);
                long double x87_r5_7 = a3;
                float var_8_1 = x87_r6_4 - (x87_r5_7 + x87_r5_7) + var_50_2;
                float var_4_1 = a3 - var_50_2;
                long double x87_r6_22 = *eax_12 * var_c_1 + eax_12[7] * x87_r7_4 * var_4_1
                    + eax_12[-0xa] * var_10_1 + eax_12[-6] * x87_r7_4 * var_8_1;
                var_4c_1 = x87_r6_22;
                var_48_1 = eax_12[1] * var_c_1 + eax_12[-9] * var_10_1
                    + eax_12[8] * x87_r7_4 * var_4_1 + eax_12[-5] * x87_r7_4 * var_8_1;
                x87_r7_8 = eax_12[2] * var_c_1 + eax_12[-8] * var_10_1
                    + x87_r7_4 * eax_12[9] * var_4_1 + eax_12[-4] * x87_r7_4 * var_8_1;
            }

            var_44_1 = x87_r7_8;
        }
        else
        {
            int32_t ecx_6 = edi * 5;
            var_4c_1 = esi[ecx_6 * 2 - 0xa];
            var_48_1 = esi[ecx_6 * 2 - 9];
            var_44_1 = esi[ecx_6 * 2 - 8];
        }

        eax_2 = edx_4 + 0x10;
        ecx_1 = edx_4 + 0x1c;
        *ecx_1 = var_4c_1 - *(edx_4 + 0x10);
        *(edx_4 + 0x20) = var_48_1 - *(edx_4 + 0x14);
        *(edx_4 + 0x24) = var_44_1 - *(edx_4 + 0x18);
        *eax_2 = var_4c_1;
        eax_2[1] = var_48_1;
        eax_2[2] = var_44_1;
    }
    else
    {
        eax_2 = edx_4 + 0x10;
        *eax_2 = *esi;
        eax_2[1] = esi[1];
        int32_t esi_1 = esi[2];
        *(edx_4 + 0x1c) = 0;
        *(edx_4 + 0x20) = 0;
        eax_2[2] = esi_1;
        ecx_1 = edx_4 + 0x1c;
        *(edx_4 + 0x24) = 0;
    }

    if (a1)
    {
        *a1 = *eax_2;
        a1[1] = eax_2[1];
        a1[2] = eax_2[2];
    }

    if (a2)
    {
        *a2 = *ecx_1;
        a2[1] = ecx_1[1];
        a2[2] = ecx_1[2];
    }

    return 1;
}
