#include "00499090-Display_SetDisplayMode_17.h"
/* 0x00499090 Display_SetDisplayMode_17 full linked: callers=1 callees=2 */
int32_t sub_499090(float a1)

{
    float ebx = a1;
    int32_t eax = *(ebx + 0x56c8);
    float* ecx = ebx + 0x57c;
    int32_t eax_1 = *(ebx + 0xe3c);
    float* edi = ecx;
    a1 = *(ebx + 0x56a8) * 81.9199982f;
    float var_20 = *(ebx + 0x56a8) * 2048f;

    if (eax_1 > 1)
    {
        int32_t i_2 = eax_1 - 1;
        int32_t i;

        do
        {
            long double x87_r7_4 = ecx[2];
            long double temp0_1 = edi[2];
            x87_r7_4 - temp0_1;

            if (!(*(&((x87_r7_4 < temp0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, temp0_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                edi = ecx;

            ecx = &ecx[7];
            i = i_2;
            i_2 -= 1;
        } while (i != 1);
    }

    int32_t* eax_3 = *(ebx + 0x56cc);
    int32_t var_10 = 0;
    int32_t eax_4 = (*(*eax_3 + 0xc))(eax_3, 0x20, &var_10, 0);

    if (!eax_4)
    {
        *(ebx + 0x6c) = 0;
        void var_c;
        void* eax_5 = &var_c;
        void* ecx_2 = ebx + 0x1b0;
        int32_t i_3 = 3;
        int32_t i_1;

        do
        {
            int32_t ebp_1 = *(eax_5 - 4);
            eax_5 += 4;
            ecx_2 += 0x144;
            *(eax_5 - 4) = ebp_1 + 0x2d00;
            *(ecx_2 - 0x144) = 0;
            i_1 = i_3;
            i_3 -= 1;
        } while (i_1 != 1);
        float* edx_1 = edi;
        int32_t var_2c_1 = 0;

        if (*(ebx + 0xe3c) > 0)
        {
            bool cond:3_1;

            do
            {
                int32_t ebp_3 = edx_1[6];
                float* eax_7 = (&var_10)[ebp_3];
                void* eax_8;

                if (*(ebx + 0x5650) != 1)
                {
                    eax_7[3] = 0xffffff;
                    eax_7[9] = eax;
                    eax_8 = &eax_7[0xc];
                    long double x87_r7_17 = *edx_1;
                    *(eax_8 - 0x18) = x87_r7_17;
                    *(eax_8 - 0x30) = x87_r7_17;
                    long double x87_r7_18 = edx_1[1];
                    *(eax_8 - 0x14) = x87_r7_18;
                    *(eax_8 - 0x2c) = x87_r7_18;
                    *(eax_8 - 0x28) = var_20 + edx_1[2];
                    *(eax_8 - 0x10) = edx_1[2];
                }
                else
                {
                    float var_1c_1 =
                        g_bcaae4 * edx_1[1] + g_bcaae0 * *edx_1 + g_bcaae8 * edx_1[2];
                    float var_18_1 =
                        g_bcaaf0 * edx_1[1] + g_bcaaec * *edx_1 + g_bcaaf4 * edx_1[2];
                    long double x87_r7_15 = g_bcaafc * edx_1[1] + g_bcaaf8 * *edx_1;
                    long double x87_r6_12 = g_bcab00 * edx_1[2];
                    eax_7[4] = 0;
                    eax_7[5] = 0;
                    eax_7[0xb] = 0;
                    eax_7[0x10] = 0;
                    long double x87_r7_16 = x87_r7_15 + x87_r6_12;
                    long double x87_r6_14 = var_1c_1 - a1;
                    eax_7[3] = 0xffffffff;
                    eax_7[9] = 0xffffffff;
                    eax_7[0xf] = 0xffffffff;
                    eax_7[0x15] = 0xffffffff;
                    *eax_7 = x87_r6_14;
                    long double x87_r5_2 = var_1c_1 + a1;
                    eax_7[0xa] = 0x3f800000;
                    eax_7[0x11] = 0x3f800000;
                    eax_7[0x16] = 0x3f800000;
                    eax_7[0x17] = 0x3f800000;
                    eax_7[6] = x87_r5_2;
                    eax_7[0xc] = x87_r6_14;
                    long double x87_r6_16 = var_18_1 - a1;
                    eax_7[0x12] = x87_r5_2;
                    eax_7[1] = x87_r6_16;
                    eax_7[7] = x87_r6_16;
                    long double x87_r6_18 = var_18_1 + a1;
                    eax_7[0xd] = x87_r6_18;
                    eax_7[0x13] = x87_r6_18;
                    eax_7[8] = x87_r7_16;
                    eax_7[2] = x87_r7_16;
                    eax_7[0xe] = x87_r7_16;
                    eax_7[0x14] = x87_r7_16;
                    memcpy(&eax_7[0x18], &eax_7[6], 0x18);
                    eax_8 = &eax_7[0x24];
                    memcpy(&eax_7[0x1e], &eax_7[0xc], 0x18);
                }

                edx_1 -= 0x1c;

                if (edx_1 < ebx + 0x57c)
                    edx_1 = &edx_1[*(ebx + 0xe3c) * 7];

                (&var_10)[ebp_3] = eax_8;
                int32_t eax_10 = ebp_3 * 0x51;
                *(ebx + ((ebp_3 * 0x51 + *(ebx + (eax_10 << 2) + 0x6c)) << 2) + 0x70) = edx_1[2];
                *(ebx + (eax_10 << 2) + 0x6c) += 1;
                cond:3_1 = var_2c_1 + 1 < *(ebx + 0xe3c);
                var_2c_1 += 1;
            } while (cond:3_1);
        }

        int32_t* eax_14 = *(ebx + 0x56cc);
        (*(*eax_14 + 0x10))(eax_14);
        int32_t eax_15 = *(ebx + 0x5650);

        if (eax_15 == 1)
        {
            *(ebx + 0x5658) = g_bcaae0 * g_bcabec;
            *(ebx + 0x565c) = g_bcaae4 * g_bcabec;
            long double x87_r7_26 = g_bcaae8 * g_bcabec;
            *(ebx + 0x5664) = 0;
            *(ebx + 0x5660) = x87_r7_26;
            *(ebx + 0x5668) = g_bcaaec * g_bcabec;
            *(ebx + 0x566c) = g_bcaaf0 * g_bcabec;
            long double x87_r7_32 = g_bcaaf4 * g_bcabec;
            *(ebx + 0x5674) = 0;
            *(ebx + 0x5670) = x87_r7_32;
            *(ebx + 0x5678) = g_bcaaf8 * g_bcabec;
            *(ebx + 0x567c) = g_bcaafc * g_bcabec;
            long double x87_r7_38 = g_bcab00 * g_bcabec;
            *(ebx + 0x5684) = 0;
            *(ebx + 0x5680) = x87_r7_38;
            return eax_15;
        }

        eax_4 = g_bcabec;
        *(ebx + 0x565c) = 0;
        *(ebx + 0x5658) = eax_4;
        *(ebx + 0x5660) = 0;
        *(ebx + 0x5664) = 0;
        *(ebx + 0x5668) = 0;
        int32_t ecx_12 = g_bcabec;
        *(ebx + 0x5670) = 0;
        *(ebx + 0x566c) = ecx_12;
        *(ebx + 0x5674) = 0;
        *(ebx + 0x5678) = 0;
        *(ebx + 0x567c) = 0;
        int32_t edx_3 = g_bcabec;
        *(ebx + 0x5684) = 0;
        *(ebx + 0x5680) = edx_3;
    }

    return eax_4;
}
