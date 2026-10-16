#include "0049A050-Display_SetDisplayMode_18.h"
/* 0x0049a050 Display_SetDisplayMode_18 full linked: callers=4 callees=0 */
void* sub_49a050(float a1, int32_t a2, void* a3, int32_t* a4 @ 0x18)

{
    float edx = a1;
    int32_t* ebp = &g_b46d40;
    void* esi_1 = *(*(*(*(*(edx + 0x6c) + (a2 << 2)) + 0xc) + 0xc) + 0x2c) + (a3 << 5);
    float* ecx_4 = *(esi_1 + 0x14);
    a3 = esi_1;

    if (!*(edx + 0x5b4))
    {
        char eax_3 = *(edx + 0x5b5);
        long double x87_r7_12;

        if (!eax_3)
            x87_r7_12 = *(edx + 0xfc);
        else
            x87_r7_12 = *(edx + 0x100);

        long double x87_r6_4 = *(edx + 0x59c) * 1f / (*(edx + 0x100) - *(edx + 0xfc));

        if (eax_3)
            x87_r6_4 = -(x87_r6_4);

        a2 = 0;

        if (*(esi_1 + 4) > 0)
        {
            int32_t i;

            do
            {
                long double x87_r5_8 = (-(x87_r7_12) + *ecx_4) * x87_r6_4;
                int32_t esi_2 = x87_r5_8;
                a1 = esi_2;

                if (esi_2 == *(edx + 0x59c))
                {
                    esi_2 -= 1;
                    a1 = esi_2;
                }

                long double x87_r5_9 = x87_r5_8 - a1;
                long double x87_r4_10 = 0f;
                x87_r4_10 - x87_r5_9;

                if (*(&((x87_r4_10 < x87_r5_9 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r4_10, x87_r5_9) ? 1 : 0) << 0xa
                    | (x87_r4_10 == x87_r5_9 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
                {
                    long double x87_r4_11 = 1f;
                    x87_r4_11 - x87_r5_9;

                    if (*(&((x87_r4_11 < x87_r5_9 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r4_11, x87_r5_9) ? 1 : 0) << 0xa
                            | (x87_r4_11 == x87_r5_9 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                        x87_r5_9 = 1f;
                }
                else
                    x87_r5_9 = 0f;

                int32_t eax_7 = esi_2 * 5;
                ecx_4 = &ecx_4[4];
                void* eax_8 = edx + (eax_7 << 3);
                void* edi_5 = edx + esi_2 * 0xc;
                ebp = &ebp[3];
                long double x87_r4_15 = *(edx + (eax_7 << 3) + 0x208) * ecx_4[-2]
                    + *(edx + (eax_7 << 3) + 0x204) * ecx_4[-3] + *(edi_5 + 0x104);
                long double x87_r3_18 = *(eax_8 + 0x214) * ecx_4[-2] + *(eax_8 + 0x210) * ecx_4[-3]
                    + *(edx + ((esi_2 * 3 + 0x42) << 2));
                float var_14_2 = x87_r3_18;
                float var_10_2 =
                    *(eax_8 + 0x220) * ecx_4[-2] + *(eax_8 + 0x21c) * ecx_4[-3] + *(edi_5 + 0x10c);
                esi_1 = a3;
                long double x87_r2_14 = *(eax_8 + 0x23c) * ecx_4[-2] + *(eax_8 + 0x238) * ecx_4[-3]
                    + *(edx + ((esi_2 * 3 + 0x45) << 2));
                i = a2 + 1;
                a2 = i;
                float var_4_3 =
                    *(eax_8 + 0x248) * ecx_4[-2] + *(eax_8 + 0x244) * ecx_4[-3] + *(edi_5 + 0x118);
                ebp[-3] = (*(eax_8 + 0x230) * ecx_4[-2] + *(eax_8 + 0x22c) * ecx_4[-3]
                    + *(edi_5 + 0x110) - x87_r4_15) * x87_r5_9 + x87_r4_15;
                ebp[-2] = (x87_r2_14 - var_14_2) * x87_r5_9 + var_14_2;
                ebp[-1] = (var_4_3 - var_10_2) * x87_r5_9 + var_10_2;
            } while (i < *(esi_1 + 4));
        }
    }
    else
    {
        int32_t i_1 = 0;
        float var_18_1 = (*(edx + 0xfc) + *(edx + 0x100)) * 0.5f;

        if (*(esi_1 + 4) > 0)
        {
            do
            {
                long double x87_r7_7 = *ecx_4 - var_18_1;
                long double x87_r6_1 = ecx_4[1];
                long double x87_r5_1 = ecx_4[2];
                int32_t* edi_2 = ebp;
                i_1 += 1;
                ecx_4 = &ecx_4[4];
                ebp = &ebp[3];
                float var_8_1 =
                    x87_r7_7 * *(edx + 0x7c) + x87_r5_1 * *(edx + 0x84) + x87_r6_1 * *(edx + 0x80);
                long double x87_r7_10 = x87_r7_7 * *(edx + 0x88) + x87_r5_1 * *(edx + 0x90);
                long double x87_r6_2 = x87_r6_1 * *(edx + 0x8c);
                *edi_2 =
                    x87_r7_7 * *(edx + 0x70) + x87_r5_1 * *(edx + 0x78) + x87_r6_1 * *(edx + 0x74);
                edi_2[1] = var_8_1;
                edi_2[2] = x87_r7_10 + x87_r6_2;
            } while (i_1 < *(esi_1 + 4));
        }
    }

    if (a4)
        *a4 = *(esi_1 + 4);

    return ebp - *(esi_1 + 4) * 0xc;
}
