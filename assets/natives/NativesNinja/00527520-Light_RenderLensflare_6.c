#include "00527520-Light_RenderLensflare_6.h"
/* 0x00527520 Light_RenderLensflare_6 full linked: callers=1 callees=23 */
int32_t* sub_527520(void* a1)

{
    int32_t ecx;
    int32_t var_4 = ecx;
    void* esi = a1;
    sub_4ce3d0(*(esi + 0x20));
    ecx = g_a84374;

    if (!QTask_DeleteTask_2(esi, ecx))
    {
        void* eax_22 = esi + 0x50;
        int32_t i_8 = 5;
        void* edi_41 = nullptr;
        int32_t i;

        do
        {
            *(eax_22 - 4) = 0;
            __builtin_memset(eax_22, 0, 0x18);
            eax_22 += 0x40;
            i = i_8;
            i_8 -= 1;
        } while (i != 1);
        __builtin_memset(esi + 0x24, 0, 0x24);
        sub_50fe40(esi + 0x4c);
        sub_50fd20(esi + 0x58, *(esi + 0x64) * 0.000500000024f);
        void* i_1 = &g_b46d00;
        int32_t* eax_23 = esi + 0x58;

        do
        {
            i_1 += 4;
            *(edi_41 + &g_b818a0) = eax_23[-3];
            *(edi_41 + &g_b818a4) = eax_23[-2];
            *(edi_41 + &g_b818a8) = eax_23[-1];
            int32_t* ebx_23 = eax_23;
            int32_t* edx_42 = edi_41 + 0xb818e0;
            edi_41 += 0xc;
            eax_23 = &eax_23[0x10];
            *edx_42 = *ebx_23;
            edx_42[1] = ebx_23[1];
            edx_42[2] = ebx_23[2];
            *(i_1 - 4) = eax_23[-0xd] * 0.000500000024f;
        } while (i_1 < &g_b46d14);
    }
    else
    {
        long double x87_r7 = *(esi + 0x190);
        long double temp0_1 = *(esi + 0x18c);
        x87_r7 - temp0_1;

        if (*(&((x87_r7 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            int32_t* eax_18 = QTask_DeleteTask_2(esi, g_a84374);
            int32_t* edx_34 = esi + 0x58;
            int32_t* ecx_22 = &eax_18[0x16];
            a1 = 5;
            bool cond:1_1;

            do
            {
                edx_34[-3] = ecx_22[-3];
                edx_34[-2] = ecx_22[-2];
                edx_34[-1] = ecx_22[-1];
                int32_t* edi_28 = ecx_22;
                int32_t* ebx_17 = edx_34;
                ecx_22 = &ecx_22[0x11];
                edx_34 = &edx_34[0x10];
                *ebx_17 = *edi_28;
                ebx_17[1] = edi_28[1];
                ebx_17[2] = edi_28[2];
                edx_34[-0xd] = ecx_22[-0xe];
                cond:1_1 = a1 != 1;
                a1 -= 1;
            } while (cond:1_1);
            *(esi + 0x24) = eax_18[8];
            *(esi + 0x28) = eax_18[9];
            *(esi + 0x2c) = eax_18[0xa];
            *(esi + 0x30) = eax_18[0xb];
            *(esi + 0x34) = eax_18[0xc];
            *(esi + 0x38) = eax_18[0xd];
            *(esi + 0x3c) = eax_18[0xe];
            *(esi + 0x40) = eax_18[0xf];
            *(esi + 0x44) = eax_18[0x10];
            sub_50fe40(esi + 0x4c);
            sub_50fd20(esi + 0x58, *(esi + 0x64) * 0.000500000024f);
            void* i_2 = &g_b46d00;
            int32_t* eax_21 = esi + 0x58;
            void* ecx_29 = nullptr;

            do
            {
                i_2 += 4;
                *(ecx_29 + &g_b818a0) = eax_21[-3];
                *(ecx_29 + &g_b818a4) = eax_21[-2];
                *(ecx_29 + &g_b818a8) = eax_21[-1];
                int32_t* ebx_19 = eax_21;
                int32_t* edi_40 = ecx_29 + 0xb818e0;
                ecx_29 += 0xc;
                eax_21 = &eax_21[0x10];
                *edi_40 = *ebx_19;
                edi_40[1] = ebx_19[1];
                edi_40[2] = ebx_19[2];
                *(i_2 - 4) = eax_21[-0xd] * 0.000500000024f;
            } while (i_2 < &g_b46d14);
        }
        else
        {
            int32_t* i_10 = nullptr;
            int32_t* i_9 = nullptr;
            int32_t* i_7 = QTask_DeleteTask_2(esi, g_a84374);
            int32_t* i_4 = i_7;

            if (!i_4)
            {
            label_5275f7:
                int32_t* ecx_2 = esi + 0x58;
                int32_t* eax_3 = &i_9[0x16];
                a1 = 5;
                bool cond:3_1;

                do
                {
                    ecx_2[-3] = eax_3[-3];
                    ecx_2[-2] = eax_3[-2];
                    ecx_2[-1] = eax_3[-1];
                    *ecx_2 = *eax_3;
                    ecx_2[1] = eax_3[1];
                    ecx_2[2] = eax_3[2];
                    ecx_2[4] = eax_3[4];
                    ecx_2[5] = eax_3[5];
                    ecx_2[6] = eax_3[6];
                    ecx_2[7] = eax_3[7];
                    ecx_2[8] = eax_3[8];
                    ecx_2[9] = eax_3[9];
                    int32_t* edx_9 = &eax_3[0xa];
                    int32_t* edi_5 = &ecx_2[0xa];
                    eax_3 = &eax_3[0x11];
                    ecx_2 = &ecx_2[0x10];
                    *edi_5 = *edx_9;
                    edi_5[1] = edx_9[1];
                    edi_5[2] = edx_9[2];
                    ecx_2[-0xd] = eax_3[-0xe];
                    cond:3_1 = a1 != 1;
                    a1 -= 1;
                } while (cond:3_1);
                *(esi + 0x24) = i_9[8];
                *(esi + 0x28) = i_9[9];
                *(esi + 0x2c) = i_9[0xa];
                *(esi + 0x30) = i_9[0xb];
                *(esi + 0x34) = i_9[0xc];
                *(esi + 0x38) = i_9[0xd];
                *(esi + 0x3c) = i_9[0xe];
                *(esi + 0x40) = i_9[0xf];
                *(esi + 0x44) = i_9[0x10];
                sub_50fe40(esi + 0x4c);
                sub_50fd20(esi + 0x58, *(esi + 0x64) * 0.000500000024f);
                void* i_3 = &g_b46d00;
                int32_t* eax_7 = esi + 0x58;
                void* ecx_9 = nullptr;

                do
                {
                    i_3 += 4;
                    *(ecx_9 + &g_b818a0) = eax_7[-3];
                    *(ecx_9 + &g_b818a4) = eax_7[-2];
                    *(ecx_9 + &g_b818a8) = eax_7[-1];
                    *(ecx_9 + 0xb818e0) = *eax_7;
                    *(ecx_9 + 0xb818e4) = eax_7[1];
                    *(ecx_9 + 0xb818e8) = eax_7[2];
                    *(i_3 - 4) = eax_7[3] * 0.000500000024f;
                    *(ecx_9 + 0xb816c0) = eax_7[4];
                    *(ecx_9 + 0xb816c4) = eax_7[5];
                    *(ecx_9 + 0xb816c8) = eax_7[6];
                    *(ecx_9 + 0xb81720) = eax_7[7];
                    *(ecx_9 + 0xb81724) = eax_7[8];
                    *(ecx_9 + 0xb81728) = eax_7[9];
                    int32_t* edi_14 = &eax_7[0xa];
                    int32_t* ebx_7 = ecx_9 + 0xb81760;
                    eax_7 = &eax_7[0x10];
                    ecx_9 += 0xc;
                    *ebx_7 = *edi_14;
                    ebx_7[1] = edi_14[1];
                    ebx_7[2] = edi_14[2];
                } while (i_3 < &g_b46d14);

            label_527a6c:
                sub_52d400(esi + 0x24);
                sub_5196d0(esi + 0x24);
                return sub_4cea30(*(esi + 0x20));
            }

            do
            {
                long double x87_r7_1 = i_4[0x12];
                long double temp3_1 = *(esi + 0x194);
                x87_r7_1 - temp3_1;
                i_7 = (x87_r7_1 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp3_1 ? 1 : 0) << 0xe;

                if (*(&i_7 + 1) & 0x40)
                {
                    i_10 = i_4;
                    i_9 = i_4;
                    break;
                }

                long double x87_r7_2 = i_4[0x12];
                long double temp5_1 = *(esi + 0x194);
                x87_r7_2 - temp5_1;
                i_7 = (x87_r7_2 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_2, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp5_1 ? 1 : 0) << 0xe;

                if (*(&i_7 + 1) & 1)
                {
                    if (i_10)
                    {
                        long double x87_r7_3 = i_4[0x12];
                        long double temp7_1 = i_10[0x12];
                        x87_r7_3 - temp7_1;
                        i_7 = (x87_r7_3 < temp7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_3, temp7_1) ? 1 : 0) << 0xa
                            | (x87_r7_3 == temp7_1 ? 1 : 0) << 0xe;
                    }

                    if (!i_10 || !(*(&i_7 + 1) & 0x41))
                        i_10 = i_4;
                }

                long double x87_r7_4 = i_4[0x12];
                long double temp6_1 = *(esi + 0x194);
                x87_r7_4 - temp6_1;
                i_7 = (x87_r7_4 < temp6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp6_1 ? 1 : 0) << 0xe;

                if (!(*(&i_7 + 1) & 0x41))
                {
                    if (i_9)
                    {
                        long double x87_r7_5 = i_4[0x12];
                        long double temp8_1 = i_9[0x12];
                        x87_r7_5 - temp8_1;
                        i_7 = (x87_r7_5 < temp8_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_5, temp8_1) ? 1 : 0) << 0xa
                            | (x87_r7_5 == temp8_1 ? 1 : 0) << 0xe;
                    }

                    if (!i_9 || *(&i_7 + 1) & 1)
                        i_9 = i_4;
                }

                i_7 = g_a84374;
                i_7 = QTask_TriggerEvent_2(i_4, i_7);
                i_4 = i_7;
            } while (i_4);

            if (!i_10)
                goto label_5275f7;

            long double x87_r7_10;
            long double temp10_1;

            if (i_9 && i_10 != i_9)
            {
                x87_r7_10 = i_10[0x12];
                temp10_1 = i_9[0x12];
                x87_r7_10 - temp10_1;
            }

            if (!i_9 || i_10 == i_9 || *(&((x87_r7_10 < temp10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_10, temp10_1) ? 1 : 0) << 0xa
                | (x87_r7_10 == temp10_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            {
                int32_t* ecx_13 = esi + 0x58;
                int32_t* eax_11 = &i_10[0x16];
                a1 = 5;
                bool cond:5_1;

                do
                {
                    ecx_13[-3] = eax_11[-3];
                    ecx_13[-2] = eax_11[-2];
                    ecx_13[-1] = eax_11[-1];
                    int32_t* edx_23 = eax_11;
                    int32_t* ebx_12 = ecx_13;
                    eax_11 = &eax_11[0x11];
                    ecx_13 = &ecx_13[0x10];
                    *ebx_12 = *edx_23;
                    ebx_12[1] = edx_23[1];
                    ebx_12[2] = edx_23[2];
                    ecx_13[-0xd] = eax_11[-0xe];
                    cond:5_1 = a1 != 1;
                    a1 -= 1;
                } while (cond:5_1);
                *(esi + 0x24) = i_10[8];
                *(esi + 0x28) = i_10[9];
                *(esi + 0x2c) = i_10[0xa];
                *(esi + 0x30) = i_10[0xb];
                *(esi + 0x34) = i_10[0xc];
                *(esi + 0x38) = i_10[0xd];
                *(esi + 0x3c) = i_10[0xe];
                *(esi + 0x40) = i_10[0xf];
                *(esi + 0x44) = i_10[0x10];
                sub_50fe40(esi + 0x4c);
                sub_50fd20(esi + 0x58, *(esi + 0x64) * 0.000500000024f);
                void* i_5 = &g_b46d00;
                int32_t* eax_15 = esi + 0x58;
                void* ecx_20 = nullptr;

                do
                {
                    i_5 += 4;
                    *(ecx_20 + &g_b818a0) = eax_15[-3];
                    *(ecx_20 + &g_b818a4) = eax_15[-2];
                    *(ecx_20 + &g_b818a8) = eax_15[-1];
                    int32_t* ebx_14 = eax_15;
                    int32_t* edi_24 = ecx_20 + 0xb818e0;
                    ecx_20 += 0xc;
                    eax_15 = &eax_15[0x10];
                    *edi_24 = *ebx_14;
                    edi_24[1] = ebx_14[1];
                    edi_24[2] = ebx_14[2];
                    *(i_5 - 4) = eax_15[-0xd] * 0.000500000024f;
                } while (i_5 < &g_b46d14);

                goto label_527a6c;
            }

            void* edx_20 = &i_9[0x15];
            void* ecx_10 = esi + 0x50;
            long double x87_r7_13 = (*(esi + 0x194) - i_10[0x12]) / (i_9[0x12] - i_10[0x12]);
            float* eax_9 = &i_10[0x13];
            a1 = 5;
            bool cond:7_1;

            do
            {
                edx_20 += 0x44;
                ecx_10 += 0x40;
                long double x87_r6_4 = *(eax_9 + i_9 - i_10) - *eax_9;
                eax_9 = &eax_9[0x11];
                cond:7_1 = a1 != 1;
                a1 -= 1;
                *(ecx_10 - 0x44) = x87_r6_4 * x87_r7_13 + eax_9[-0x11];
                *(ecx_10 - 0x40) = (*(edx_20 - 0x48) - eax_9[-0x10]) * x87_r7_13 + eax_9[-0x10];
                *(ecx_10 - 0x3c) = (*(edx_20 - 0x44) - eax_9[-0xf]) * x87_r7_13 + eax_9[-0xf];
                *(ecx_10 - 0x38) = (*(edx_20 - 0x40) - eax_9[-0xe]) * x87_r7_13 + eax_9[-0xe];
                *(ecx_10 - 0x34) = (*(edx_20 - 0x3c) - eax_9[-0xd]) * x87_r7_13 + eax_9[-0xd];
                *(ecx_10 - 0x30) = (*(edx_20 - 0x38) - eax_9[-0xc]) * x87_r7_13 + eax_9[-0xc];
                *(ecx_10 - 0x2c) = (*(edx_20 - 0x34) - eax_9[-0xb]) * x87_r7_13 + eax_9[-0xb];
            } while (cond:7_1);
            *(esi + 0x24) = (i_9[8] - i_10[8]) * x87_r7_13 + i_10[8];
            *(esi + 0x28) = (i_9[9] - i_10[9]) * x87_r7_13 + i_10[9];
            *(esi + 0x2c) = (i_9[0xa] - i_10[0xa]) * x87_r7_13 + i_10[0xa];
            *(esi + 0x30) = (i_9[0xb] - i_10[0xb]) * x87_r7_13 + i_10[0xb];
            *(esi + 0x34) = (i_9[0xc] - i_10[0xc]) * x87_r7_13 + i_10[0xc];
            *(esi + 0x38) = (i_9[0xd] - i_10[0xd]) * x87_r7_13 + i_10[0xd];
            *(esi + 0x3c) = (i_9[0xe] - i_10[0xe]) * x87_r7_13 + i_10[0xe];
            *(esi + 0x40) = (i_9[0xf] - i_10[0xf]) * x87_r7_13 + i_10[0xf];
            *(esi + 0x44) = (i_9[0x10] - i_10[0x10]) * x87_r7_13 + i_10[0x10];
            sub_50fe40(esi + 0x4c);
            sub_50fd20(esi + 0x58, *(esi + 0x64) * 0.000500000024f);
            void* i_6 = &g_b46d00;
            int32_t* eax_10 = esi + 0x58;
            void* ecx_12 = nullptr;

            do
            {
                i_6 += 4;
                *(ecx_12 + &g_b818a0) = eax_10[-3];
                *(ecx_12 + &g_b818a4) = eax_10[-2];
                *(ecx_12 + &g_b818a8) = eax_10[-1];
                int32_t* ebx_9 = eax_10;
                int32_t* edi_19 = ecx_12 + 0xb818e0;
                ecx_12 += 0xc;
                eax_10 = &eax_10[0x10];
                *edi_19 = *ebx_9;
                edi_19[1] = ebx_9[1];
                edi_19[2] = ebx_9[2];
                *(i_6 - 4) = eax_10[-0xd] * 0.000500000024f;
            } while (i_6 < &g_b46d14);
        }
    }

    sub_52d400(esi + 0x24);
    sub_5196d0(esi + 0x24);
    return sub_4cea30(*(esi + 0x20));
}
