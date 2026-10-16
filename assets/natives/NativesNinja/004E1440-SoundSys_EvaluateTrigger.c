#include "004E1440-SoundSys_EvaluateTrigger.h"
/* 0x004e1440 SoundSys_EvaluateTrigger full linked: callers=1 callees=0 */
int32_t* sub_4e1440(float a1, int32_t* a2)

{
    float edx = a1;
    float* ecx = *a2;
    int32_t* i_1;

    if (!*(edx + 0x5b4))
    {
        char eax = *(edx + 0x5b5);
        long double x87_r7_12;

        if (!eax)
            x87_r7_12 = *(edx + 0xfc);
        else
            x87_r7_12 = *(edx + 0x100);

        long double x87_r6_4 = *(edx + 0x59c) * 1f / (*(edx + 0x100) - *(edx + 0xfc));

        if (eax)
            x87_r6_4 = -(x87_r6_4);

        i_1 = a2[1];
        int32_t i = 0;

        if (i_1 > 0)
        {
            do
            {
                long double x87_r5_8 = (-(x87_r7_12) + *ecx) * x87_r6_4;
                int32_t esi_1 = x87_r5_8;
                a1 = esi_1;

                if (esi_1 == *(edx + 0x59c))
                {
                    esi_1 -= 1;
                    a1 = esi_1;
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

                int32_t eax_3 = esi_1 * 5;
                i += 1;
                long double x87_r4_13 = *(edx + (eax_3 << 3) + 0x208) * ecx[2];
                void* eax_4 = edx + (eax_3 << 3);
                void* edi_5 = edx + esi_1 * 0xc;
                long double x87_r3_10 = *(edx + (eax_3 << 3) + 0x204) * ecx[1];
                ecx = &ecx[6];
                long double x87_r4_15 = x87_r4_13 + x87_r3_10 + *(edi_5 + 0x104);
                long double x87_r3_18 = *(eax_4 + 0x214) * ecx[-4] + *(eax_4 + 0x210) * ecx[-5]
                    + *(edx + ((esi_1 * 3 + 0x42) << 2));
                float var_14_2 = x87_r3_18;
                float var_10_2 =
                    *(eax_4 + 0x220) * ecx[-4] + *(eax_4 + 0x21c) * ecx[-5] + *(edi_5 + 0x10c);
                long double x87_r2_14 = *(eax_4 + 0x23c) * ecx[-4] + *(eax_4 + 0x238) * ecx[-5]
                    + *(edx + ((esi_1 * 3 + 0x45) << 2));
                i_1 = a2;
                float var_4_3 =
                    *(eax_4 + 0x248) * ecx[-4] + *(eax_4 + 0x244) * ecx[-5] + *(edi_5 + 0x118);
                ecx[-6] = (*(eax_4 + 0x230) * ecx[-4] + *(eax_4 + 0x22c) * ecx[-5]
                    + *(edi_5 + 0x110) - x87_r4_15) * x87_r5_9 + x87_r4_15;
                ecx[-5] = (x87_r2_14 - var_14_2) * x87_r5_9 + var_14_2;
                ecx[-4] = (var_4_3 - var_10_2) * x87_r5_9 + var_10_2;
            } while (i < i_1[1]);
        }
    }
    else
    {
        i_1 = nullptr;
        float var_18_1 = (*(edx + 0xfc) + *(edx + 0x100)) * 0.5f;

        if (a2[1] > 0)
        {
            do
            {
                long double x87_r7_7 = *ecx - var_18_1;
                long double x87_r6_1 = ecx[1];
                long double x87_r5_1 = ecx[2];
                float* edi_2 = ecx;
                i_1 += 1;
                ecx = &ecx[6];
                float var_8_1 =
                    x87_r5_1 * *(edx + 0x84) + x87_r6_1 * *(edx + 0x80) + x87_r7_7 * *(edx + 0x7c);
                long double x87_r7_10 = x87_r7_7 * *(edx + 0x88) + x87_r5_1 * *(edx + 0x90);
                long double x87_r6_2 = x87_r6_1 * *(edx + 0x8c);
                *edi_2 =
                    x87_r7_7 * *(edx + 0x70) + x87_r5_1 * *(edx + 0x78) + x87_r6_1 * *(edx + 0x74);
                edi_2[1] = var_8_1;
                edi_2[2] = x87_r7_10 + x87_r6_2;
            } while (i_1 < a2[1]);
        }
    }

    return i_1;
}
