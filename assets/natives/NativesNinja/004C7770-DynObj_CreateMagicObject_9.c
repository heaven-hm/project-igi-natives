#include "004C7770-DynObj_CreateMagicObject_9.h"
/* 0x004c7770 DynObj_CreateMagicObject_9 full linked: callers=3 callees=8 */
uint32_t sub_4c7770(int32_t a1, char a2, int32_t a3, double* a4, double* a5, int32_t a6, int32_t a7)

{
    int16_t var_4d4 = -1;
    sub_4ce5c0(a1, a7);
    uint32_t result = a2;
    uint32_t result_2 = result;

    if (*(a1 + ((result + a7 * 0xfe) << 1) + 0x118))
    {
        double var_478;
        memcpy(&var_478, a4, 0x18);
        int32_t var_50c_1 = var_478;
        double var_490;
        memcpy(&var_490, a5, 0x18);
        int32_t eax_3 = *(a1 + 0xde0);
        int32_t ecx_4 = var_50c_1 + eax_3;
        int32_t edi_2 = var_490 + eax_3;
        int32_t ecx_5 = *(a1 + 0xde4);
        double var_470;
        int32_t edx_2 = var_470 + ecx_5;
        int32_t edx_3 = *(a1 + 0xde8);
        double var_468;
        int32_t esi_4 = var_468 + edx_3;
        double var_488;
        int32_t esi_6 = var_488 + ecx_5;
        double var_480;
        int32_t ecx_7 = var_480 + edx_3;
        int32_t ecx_9 = *(result_2 + 0xa969e0);

        if (ecx_9 != 0xffffffff)
            var_4d4 = 1 << (ecx_9 & 0x1f);

        sub_4ce620(a1, a7);
        int32_t eax_5 = *(a1 + (a7 << 2) + 0x28);
        int32_t var_460;
        memcpy(&var_460, eax_5, 0x40);
        int32_t ecx_14 = *(a1 + (a7 << 2) + 0xd0);
        int32_t var_4f4_1 = ecx_14;
        int32_t var_510_1 = var_460;
        char var_430;

        if (ecx_14 != 0x1e)
            ecx_14 = var_430;
        else
        {
            memcpy(&var_460, eax_5, 0x40);
            char var_430_1 = 0;
            int32_t i = 0;
            int32_t var_500_1 = 7;
            void var_438;
            int32_t* eax_6 = &var_438;
            void var_454;
            int32_t* edi_3 = &var_454;

            do
            {
                int32_t ecx_12 = *edi_3;
                *edi_3 = *eax_6;
                *eax_6 = ecx_12;
                ecx_14 = var_500_1;
                edi_3 = &edi_3[1];
                eax_6 -= 4;
                char edx_9 = (var_430 >> (i & 0x1f) & 1) << (ecx_14 & 0x1f);
                ecx_14 = var_430_1;
                ecx_14 |= edx_9;
                i += 1;
                var_430_1 = ecx_14;
                var_500_1 -= 1;
            } while (i < 4);
        }
        long double x87_r7_7 = *(a1 + 0xde0);
        int32_t edx_12 = a7 * 3;
        int32_t* var_3f0 = &var_460;
        uint8_t eax_8 = ecx_14;
        uint32_t result_1 = 1;
        uint8_t var_3eb_1 = eax_8;
        char var_3ea_1 = 0;
        int32_t var_50c_7 = x87_r7_7 + *(a1 + (edx_12 << 3) + 0x40);
        int32_t var_3e8_1 = var_50c_7;
        int32_t var_50c_8 = *(a1 + 0xde4) + *(a1 + ((a7 * 3 + 9) << 3));
        int32_t var_3e4_1 = var_50c_8;
        int64_t var_50c_9 = *(a1 + 0xde8) + *(a1 + (edx_12 << 3) + 0x50);
        int32_t edx_14 = var_50c_9;
        int32_t var_3e0_1 = edx_14;
        uint8_t var_3eb_2;

        if (edi_2 <= var_50c_7)
        {
            ecx_14 &= 0x55;
            eax_8 = ecx_14;
            var_3eb_2 = eax_8;
        }
        else if (ecx_4 >= var_50c_7)
        {
            ecx_14 &= 0xaa;
            eax_8 = ecx_14;
            var_3eb_2 = eax_8;
        }
        uint8_t var_3eb_3;

        if (esi_6 <= var_50c_8)
        {
            eax_8 &= 0x33;
            var_3eb_3 = eax_8;
        }
        else if (edx_2 >= var_50c_8)
        {
            eax_8 &= 0xcc;
            var_3eb_3 = eax_8;
        }
        uint8_t var_3eb_4;

        if (ecx_7 <= edx_14)
        {
            eax_8 &= 0xf;
            var_3eb_4 = eax_8;
        }
        else if (esi_4 >= edx_14)
        {
            eax_8 &= 0xf0;
            var_3eb_4 = eax_8;
        }

        if (!(eax_8 & 0xf))
        {
            if (!(eax_8 & 0x30))
                eax_8 = (eax_8 >> 6 & 1) + 6;
            else
                eax_8 = (eax_8 >> 4 & 1) + 4;
        }
        else if (!(eax_8 & 3))
            eax_8 = (eax_8 >> 2 & 1) + 2;
        else
            eax_8 &= 1;

        int32_t* esi_13 = &var_3f0;
        uint32_t result_3 = result_2;
        uint8_t var_3ec_1 = eax_8 ^ 1;
        int32_t var_4fc_1 = var_4f4_1 - 1;
        int16_t eax_11 = var_4d4;

        while (true)
        {
            ecx_14 = *(esi_13 + 5);
            void* edx_15 = *esi_13;
            int32_t* var_504_1;

            if (ecx_14)
            {
                eax_11 = esi_13[1];
                uint32_t ecx_26 = eax_11;
                void* ebx_1 = *(edx_15 + (ecx_26 << 2) + 0xc);
                char ecx_27 = *(esi_13 + 5) ^ 1 << (ecx_26 & 0x1f);
                *(esi_13 + 5) = ecx_27;

                if (ecx_27)
                {
                    if (!(ecx_27 & 0xf))
                    {
                        if (!(ecx_27 & 0x30))
                            esi_13[1] = (*(esi_13 + 5) >> 6 & 1) + 6;
                        else
                            esi_13[1] = (*(esi_13 + 5) >> 4 & 1) + 4;
                    }
                    else if (!(ecx_27 & 3))
                        esi_13[1] = (*(esi_13 + 5) >> 2 & 1) + 2;
                    else
                        esi_13[1] = ecx_27 & 1;

                    esi_13[1] ^= 1;
                }

                ecx_14 = var_4fc_1 - 1;
                var_4f4_1 -= 1;
                result_1 += 1;
                uint8_t eax_22 = *(ebx_1 + 0x30);
                var_4fc_1 = ecx_14;
                var_510_1 u>>= 1;
                esi_13[5] = ebx_1;
                *(esi_13 + 0x19) = eax_22;
                ecx_14 = *(esi_13 + 6);
                var_504_1 = &esi_13[5];

                if (!ecx_14)
                {
                    uint8_t ebx_2 = eax_22;
                    *(var_504_1 + 6) = 0;

                    if (ebx_2)
                    {
                        char ecx_29 = var_4f4_1;
                        uint32_t eax_27 = eax_11 * 0xc;
                        int32_t* esi_19 = var_504_1;
                        esi_19[2] = (*(eax_27 + 0x548000) << (ecx_29 & 0x1f)) + esi_13[2];
                        int32_t eax_29 = *(eax_27 + 0x548008) << (var_4f4_1 & 0x1f);
                        esi_19[3] = (*(eax_27 + &g_548004) << (ecx_29 & 0x1f)) + esi_13[3];
                        int32_t eax_30 = eax_29 + esi_13[4];
                        ecx_14 = esi_19[2];
                        esi_19[4] = eax_30;

                        if (edi_2 <= ecx_14)
                            ebx_2 &= 0x55;
                        else if (ecx_4 >= ecx_14)
                            ebx_2 &= 0xaa;

                        int32_t edx_31 = esi_19[3];

                        if (esi_6 <= edx_31)
                            ebx_2 &= 0x33;
                        else if (edx_2 >= edx_31)
                            ebx_2 &= 0xcc;

                        if (ecx_7 <= eax_30)
                            ebx_2 &= 0xf;
                        else if (esi_4 >= eax_30)
                            ebx_2 &= 0xf0;

                        if (ebx_2)
                        {
                            void** edx_33 = ebx_1 + 0xc;
                            int32_t var_4ec_1 = 0;
                            int32_t* i_1 = &g_548004;
                            void** var_4f8_2 = edx_33;

                            do
                            {
                                if (ebx_2 & 1 << (var_4ec_1 & 0x1f))
                                {
                                    void* eax_32 = *var_4f8_2;
                                    edx_33 = *(eax_32 + 0x3a);
                                    edx_33 |= *(eax_32 + 0x38);

                                    if (edx_33 & var_4d4)
                                    {
                                        void* edx_35 = *(eax_32 + 0x3c);

                                        if (edx_35)
                                        {
                                            long double x87_r7_26 = *a5 - *a4;
                                            long double temp6_1 = 4.0;
                                            x87_r7_26 - temp6_1;
                                            long double x87_r6_2;
                                            long double temp7_1;

                                            if (*(&((x87_r7_26 < temp6_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_26, temp6_1) ? 1 : 0) << 0xa
                                                | (x87_r7_26 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 0x41)
                                            {
                                                x87_r6_2 = a5[1] - a4[1];
                                                temp7_1 = 4.0;
                                                x87_r6_2 - temp7_1;
                                            }

                                            if (!(*(&((x87_r7_26 < temp6_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_26, temp6_1) ? 1 : 0) << 0xa
                                                | (x87_r7_26 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 0x41) || !(*(&((x87_r6_2 < temp7_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r6_2, temp7_1) ? 1 : 0) << 0xa
                                                | (x87_r6_2 == temp7_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 0x41))
                                            {
                                                *(&var_50c_9 + 4) = 0;
                                                double var_418_1 = (*i_1 << (var_4fc_1 & 0x1f))
                                                    - *(a1 + 0xde4) + edx_31;
                                                var_50c_9 = **var_4f8_2;
                                                float var_4f0_2 = var_50c_9;
                                                float var_514_7 = *(edx_35 + 8) * 0.5f / var_4f0_2;
                                                float var_4a8 = (*a4 - ((i_1[-1]
                                                    << (var_4fc_1 & 0x1f)) - *(a1 + 0xde0) + ecx_14)
                                                    + var_4f0_2) * var_514_7;
                                                float var_4a4_1 =
                                                    (a4[1] - var_418_1 + var_4f0_2) * var_514_7;
                                                float var_4a0 = var_514_7 * x87_r7_26;

                                                if (!sub_4e5ba0(edx_35, var_4a8, var_4a4_1,
                                                        var_4a0, (a5[1] - a4[1]) * var_514_7))
                                                    ebx_2 &= ~(1 << (var_4ec_1 & 0x1f));
                                            }
                                            else
                                            {
                                                int32_t var_494_1 = 0;
                                                int32_t eax_43 = *(edx_35 + 8);
                                                float var_4f0_1 = **var_4f8_2;
                                                float var_514_4 = eax_43 * 0.5f / var_4f0_1;
                                                int32_t var_4b0_1 = (*a4 - ((i_1[-1]
                                                    << (var_4fc_1 & 0x1f)) - *(a1 + 0xde0) + ecx_14)
                                                    + var_4f0_1) * var_514_4;
                                                int32_t var_4b0_2 = (a4[1] - ((*i_1
                                                    << (var_4fc_1 & 0x1f)) - *(a1 + 0xde4) + edx_31)
                                                    + var_4f0_1) * var_514_4;

                                                if (var_4b0_1 < eax_43 && var_4b0_2 < eax_43 &&
                                                        !sub_4e5580(edx_35, var_4b0_1, var_4b0_2))
                                                    ebx_2 &= ~(1 << (var_4ec_1 & 0x1f));
                                            }
                                        }
                                    }
                                    else
                                        ebx_2 &= ~(1 << (var_4ec_1 & 0x1f));
                                }

                                i_1 = &i_1[3];
                                edx_33 = &var_4f8_2[1];
                                var_4ec_1 += 1;
                                var_4f8_2 = edx_33;
                            } while (i_1 < 0x548064);

                            esi_19 = var_504_1;
                        }

                        *(esi_19 + 5) = ebx_2;

                        if (ebx_2)
                        {
                            if (!(ebx_2 & 0xf))
                            {
                                if (!(ebx_2 & 0x30))
                                    ebx_2 = (ebx_2 >> 6 & 1) + 6;
                                else
                                    ebx_2 = (ebx_2 >> 4 & 1) + 4;
                            }
                            else if (!(ebx_2 & 3))
                                ebx_2 = (ebx_2 >> 2 & 1) + 2;
                            else
                                ebx_2 &= 1;

                            esi_19[1] = ebx_2;
                            esi_19[1] = ebx_2 ^ 1;
                        }

                        if (edi_2 >= var_510_1 + ecx_14)
                        {
                            ecx_14 -= var_510_1;

                            if (ecx_4 <= ecx_14)
                            {
                                ecx_14 = esi_6;

                                if (ecx_14 >= edx_31 + var_510_1)
                                {
                                    ecx_14 = var_510_1;

                                    if (edx_2 <= edx_31 - ecx_14)
                                    {
                                        int32_t eax_67 = var_504_1[4];
                                        ecx_14 = eax_67 + var_510_1;

                                        if (ecx_7 >= ecx_14)
                                        {
                                            ecx_14 = esi_4;

                                            if (ecx_14 <= eax_67 - var_510_1)
                                                *(var_504_1 + 6) = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else
                {
                    *(esi_13 + 0x1a) = 1;

                    if (eax_22 > 0)
                    {
                        if (!(eax_22 & 0xf))
                        {
                            if (!(eax_22 & 0x30))
                            {
                                esi_13[6] = (eax_22 >> 6 & 1) + 6;
                                esi_13[6] = ((eax_22 >> 6 & 1) + 6) ^ 1;
                            }
                            else
                            {
                                esi_13[6] = (eax_22 >> 4 & 1) + 4;
                                esi_13[6] = ((eax_22 >> 4 & 1) + 4) ^ 1;
                            }
                        }
                        else if (!(eax_22 & 3))
                        {
                            esi_13[6] = (eax_22 >> 2 & 1) + 2;
                            esi_13[6] = ((eax_22 >> 2 & 1) + 2) ^ 1;
                        }
                        else
                        {
                            eax_22 &= 1;
                            esi_13[6] = eax_22;
                            esi_13[6] = eax_22 ^ 1;
                        }
                    }
                }
            }
            else
            {
                ecx_14 = *(esi_13 + 6);
                bool cond:4_1 = !ecx_14;
                ecx_14 = *(edx_15 + 0x38);

                if (cond:4_1)
                {
                    if (ecx_14 & eax_11)
                    {
                        for (void* i_2 = *(edx_15 + 0x2c); i_2; i_2 = *(i_2 + 0x58))
                        {
                            float edx_21 = *(i_2 + 0x44);
                            long double x87_r7_14 = *(i_2 + 0x20) - edx_21;
                            long double temp0_1 = var_490;
                            x87_r7_14 - temp0_1;

                            if (*(&((x87_r7_14 < temp0_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_14, temp0_1) ? 1 : 0) << 0xa
                                | (x87_r7_14 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            {
                                long double x87_r7_16 = edx_21 + *(i_2 + 0x20);
                                long double temp1_1 = var_478;
                                x87_r7_16 - temp1_1;

                                if (!(*(&((x87_r7_16 < temp1_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_16, temp1_1) ? 1 : 0) << 0xa
                                    | (x87_r7_16 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double x87_r7_18 = *(i_2 + 0x28) - edx_21;
                                    long double temp2_1 = var_488;
                                    x87_r7_18 - temp2_1;

                                    if (*(&((x87_r7_18 < temp2_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_18, temp2_1) ? 1 : 0) << 0xa
                                        | (x87_r7_18 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    {
                                        long double x87_r7_20 = edx_21 + *(i_2 + 0x28);
                                        long double temp3_1 = var_470;
                                        x87_r7_20 - temp3_1;

                                        if (!(*(&((x87_r7_20 < temp3_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_20, temp3_1) ? 1 : 0) << 0xa
                                            | (x87_r7_20 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        {
                                            long double x87_r7_22 = *(i_2 + 0x30) - edx_21;
                                            long double temp4_1 = var_480;
                                            x87_r7_22 - temp4_1;

                                            if (*(&((x87_r7_22 < temp4_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_22, temp4_1) ? 1 : 0) << 0xa
                                                | (x87_r7_22 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                            {
                                                long double x87_r7_24 = edx_21 + *(i_2 + 0x30);
                                                long double temp5_1 = var_468;
                                                x87_r7_24 - temp5_1;

                                                if (!(*(&((x87_r7_24 < temp5_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_24, temp5_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_24 == temp5_1 ? 1 : 0) << 0xe) + 1) & 1))
                                                {
                                                    int32_t eax_15 = 0;
                                                    eax_15 = *(i_2 + 0x1c);

                                                    if (*(eax_15 * 0x30 + 0xaf5f0c) & a6)
                                                    {
                                                        int32_t eax_16 = *(
                                                            ((result_3 * 0x180 + eax_15) << 2) +
                                                            &g_a96ae0);

                                                        if (eax_16)
                                                            eax_16(i_2, a3);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else if (ecx_14 & eax_11)
                {
                    for (void* i_3 = *(edx_15 + 0x2c); i_3; i_3 = *(i_3 + 0x58))
                    {
                        int32_t eax_12 = 0;
                        eax_12 = *(i_3 + 0x1c);

                        if (*(eax_12 * 0x30 + 0xaf5f0c) & a6)
                        {
                            int32_t eax_13 = *(((result_3 * 0x180 + eax_12) << 2) + &g_a96ae0);

                            if (eax_13)
                                eax_13(i_3, a3);
                        }
                    }
                }

                var_504_1 = esi_13 - 0x14;
                ecx_14 = var_510_1 << 1;
                var_4f4_1 += 1;
                var_4fc_1 += 1;
                var_510_1 = ecx_14;
                result_1 -= 1;
            }

            result = result_1;

            if (!result)
                break;

            result_3 = result_2;
            eax_11 = var_4d4;
            esi_13 = var_504_1;
        }
    }

    return result;
}
