#include "00507410-HeightMap_Setup.h"
/* 0x00507410 HeightMap_Setup full linked: callers=0 callees=35 */
int32_t sub_507410(int32_t* a1)

{
    g_b97d20 = 0;
    int32_t var_b0 = 0;
    int32_t var_ac = 0xc1c00000;
    int32_t var_100 = 0x40000000 >> (a1[0x2e] & 0x1f) << 1;
    int32_t* var_104;
    int32_t var_ec;

    if (!a1[0x38])
    {
        int32_t eax_4 = QHash_ValueGet();
        var_ec = eax_4;

        if (!eax_4)
            QHash_ValueSet();

        int32_t* eax_5 = a1[0x3f];

        if (eax_5)
        {
            QTask_FindType(eax_5);
            a1[0x3f] = 0;
        }

        var_104 = *(a1[0x1a] + 0xdd0);

        if (a1[0x3e] == 0xffffffff)
        {
            int32_t eax_8 = g_a7b250;
            *((eax_8 << 2) + &g_a7ad10) = a1;
            a1[0x3e] = eax_8;
            int32_t eax_10 = g_a7b250 + 1;
            g_a7b250 = eax_10;

            if (eax_10 >= 0x100)
            {
                Error_Show("Too many texturemodfiers");

                while (true)
                    /* nop */
            }
        }
    }

    *(a1[0x3e] * 0x30 + 0xba2088) = 0;
    double var_e8;
    memcpy(&var_e8, &a1[0x1c], 0x18);
    double var_d8;
    double var_a8;
    void var_78;
    int32_t var_60;
    int32_t var_20;

    if (!a1[0x38])
    {
        int32_t eax_13 = 0;
        memcpy(&var_a8, &a1[0x1c], 0x18);
        var_20 = 0;
        int32_t esi_2 = 0;

        while (true)
        {
            if (esi_2 < 5)
            {
                sub_4cb9f0(a1[0x1a], &var_78, &var_a8, 1, &var_b0, 0xff, nullptr, 0x80000000);
                eax_13 = var_20;
                esi_2 += 1;

                if (!eax_13)
                    continue;
            }
            else if (!eax_13)
                break;

            var_d8 = var_60;
            int32_t var_5c;
            *(&var_d8 + 4) = var_5c;
            break;
        }
    }

    void* eax_15 = a1[0x1a];
    int32_t ecx_6 = -(var_100);
    var_e8 = *(eax_15 + 0xde0) + var_e8;
    double var_e0 = *(eax_15 + 0xde4) + var_e0;
    double var_d8_1 = *(eax_15 + 0xde8) + var_d8;
    long double x87_r7_7 = var_e8 & ecx_6;
    *(a1 + 0x88) = x87_r7_7;
    long double x87_r6_1 = var_e0 & ecx_6;
    double var_d0 = x87_r6_1;
    *(a1 + 0x90) = x87_r6_1;
    long double x87_r6_3 = var_d8_1 & ecx_6;
    double var_f8_3 = x87_r6_3;
    *(a1 + 0x98) = x87_r6_3;
    long double x87_r6_4 = var_100;
    memcpy(&var_e8, &a1[0x22], 0x18);
    *(a1 + 0xa0) = x87_r6_4 + x87_r7_7;
    *(a1 + 0xa8) = x87_r6_4 + var_d0;
    *(a1 + 0xb0) = x87_r6_4 + var_f8_3;
    long double x87_r6_5 = x87_r6_4 * 0.5;
    var_e8 = x87_r6_5 + var_e8;
    var_e0 = x87_r6_5 + var_e0;
    long double x87_r7_9 = x87_r6_5 + var_d8_1;
    double var_d8_2 = x87_r7_9;
    var_e8 = var_e8 - *(eax_15 + 0xde0);
    var_e0 = var_e0 - *(eax_15 + 0xde4);
    double var_d8_3 = x87_r7_9 - *(eax_15 + 0xde8);
    *(a1 + 0x88) = *(a1 + 0x88) - *(eax_15 + 0xde0);
    *(a1 + 0x90) = *(a1 + 0x90) - *(eax_15 + 0xde4);
    *(a1 + 0x98) = *(a1 + 0x98) - *(eax_15 + 0xde8);
    bool cond:1 = !*(a1 + 0xdf);
    *(a1 + 0xa0) = *(a1 + 0xa0) - *(eax_15 + 0xde0);
    *(a1 + 0xa8) = *(a1 + 0xa8) - *(eax_15 + 0xde4);
    *(a1 + 0xb0) = *(a1 + 0xb0) - *(eax_15 + 0xde8);

    if (!cond:1)
        sub_4c7350(eax_15, a1, &var_e8, &a1[0x22], &a1[0x28], 4);

    sub_4c6e70(a1[0x1a], a1, &var_e8, &a1[0x22], &a1[0x28]);

    if (!a1[0x38])
    {
        int32_t* ecx_9;

        if (a1[0x2f] == 0xffffffff)
            ecx_9 = var_104;
        else
        {
            int32_t eax_21 = sub_506c60(a1[0x39]);
            void* esi_8 = a1[0x2f];
            ecx_9 = var_104;
            a1[0x39] = eax_21;

            if (ecx_9[esi_8 * 3])
            {
                if (*(a1 + 0xdf))
                    *(a1 + 0xde) = 1;

                void* eax_28 = esi_8 * 3;

                if (esi_8 != a1[0x30])
                {
                    a1[0x39] = ecx_9[eax_28 + 2];
                    a1[0x37] = ecx_9[eax_28 + 1];
                }
                else
                {
                    int32_t* eax_29 = &ecx_9[eax_28];
                    bool cond:6_1 = ecx_9[eax_28 + 2] == eax_21;
                    var_100 = eax_29;

                    if (!cond:6_1)
                    {
                        if (*(esi_8 + 0xb81920))
                            *(a1 + 0xde) = 0;
                        else
                        {
                            sub_4b0d10(*eax_29);
                            int32_t* edx_11 = var_100;
                            eax_29 = edx_11;
                            *edx_11 = 0;
                        }

                        eax_29[2] = eax_21;
                        int32_t edi_7 = (eax_21 + 1) * (eax_21 + 1);
                        void* eax_30 = Mem_Alloc(edi_7, 4);
                        *var_100 = eax_30;
                        __builtin_memset(__builtin_memset(eax_30, 0x40404040, edi_7 & 0xfffffffc),
                            0x40, edi_7 & 3);
                        ecx_9 = var_104;
                        *(esi_8 + 0xb81920) = 0;
                    }
                }
            }
            else
            {
                void* esi_9 = nullptr;
                int32_t* eax_22 = ecx_9;

                while (*eax_22)
                {
                    esi_9 += 1;
                    eax_22 = &eax_22[3];

                    if (esi_9 >= 0x100)
                        break;
                }

                if (esi_9 == 0x100)
                {
                    Warning_Show("limit reached");
                    ecx_9 = var_104;
                    esi_9 = 0xff;
                }

                void* eax_24 = &ecx_9[esi_9 * 3];
                var_100 = eax_24;
                *(eax_24 + 8) = eax_21;
                int32_t edi_3 = (eax_21 + 1) * (eax_21 + 1);
                void* eax_25 = Mem_Alloc(edi_3, 4);
                *var_100 = eax_25;
                __builtin_memset(__builtin_memset(eax_25, 0x40404040, edi_3 & 0xfffffffc), 0x40,
                    edi_3 & 3);
                ecx_9 = var_104;
                *(esi_9 + 0xb81920) = 0;
                a1[0x2f] = esi_9;
            }

            int32_t eax_33;

            if (eax_21 == 0x100)
                eax_33 = 7;
            else if (eax_21 == 0x80)
                eax_33 = 6;
            else if (eax_21 == 0x40)
                eax_33 = 5;
            else if (eax_21 == 0x20)
                eax_33 = 4;
            else if (eax_21 == 0x10)
                eax_33 = 3;
            else if (eax_21 != 8)
            {
                Error_Show("Illegal shift size");

                while (true)
                    /* nop */
            }
            else
                eax_33 = 2;

            a1[0x32] = 0x1e - a1[0x2e] - eax_33;
            a1[0x33] = eax_33 - 2;
        }

        if (a1[0x2f] == 0xffffffff)
        {
            void* eax_35 = a1[0x30];

            if (eax_35 != 0xffffffff)
            {
                if (!*(eax_35 + 0xb81920))
                {
                    sub_4b0d10(ecx_9[eax_35 * 3]);
                    ecx_9 = var_104;
                    var_104[a1[0x30] * 3] = 0;
                }

                ecx_9[a1[0x30] * 3] = 0;
            }
        }

        int32_t eax_40 = a1[0x2f];
        bool cond:4_1 = !a1[0x37];
        a1[0x30] = eax_40;

        if (!cond:4_1)
        {
            char* eax_41 = &ecx_9[1];
            int32_t i_1 = 0x100;
            int32_t i;

            do
            {
                *eax_41 = 0;
                eax_41 = &eax_41[0xc];
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
            eax_40 = a1[0x2f];

            if (eax_40 >= 0)
                ecx_9[eax_40 * 3 + 1] = 1;
        }
        else if (eax_40 >= 0)
            ecx_9[eax_40 * 3 + 1] = 0;

        char eax_42 = *(a1 + 0xe1);
        *(a1 + 0xdf) = 0;

        if (eax_42)
        {
            void var_90;
            memcpy(&var_90, &a1[8], 0x18);
            double var_80;
            long double x87_r7_23 = var_80;
            double var_d0_1 = x87_r7_23;
            double var_f8_4 = x87_r7_23;
            int32_t var_108_5 = 0xc8;
            var_100 = 0x40000000 >> (a1[0x2e] & 0x1f);
            bool cond:7_1;

            do
            {
                memcpy(&var_a8, &var_90, 0x18);
                long double st0_1 = sub_4b4770(0xa7b138);
                var_a8 = (st0_1 + st0_1 - 1f) * var_100 + var_a8;
                long double st0_2 = sub_4b4770(0xa7b138);
                double var_a0 = (st0_2 + st0_2 - 1f) * var_100 + var_a0;
                double var_98 = var_98 + 268435456.0;
                sub_4cb9f0(a1[0x1a], &var_78, &var_a8, 1, &var_b0, 0xff, nullptr, 0x80000000);

                if (var_20)
                {
                    long double x87_r7_37 = var_60;
                    long double temp2_1 = var_d0_1;
                    x87_r7_37 - temp2_1;

                    if (*(&((x87_r7_37 < temp2_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_37, temp2_1) ? 1 : 0) << 0xa
                            | (x87_r7_37 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        var_d0_1 = x87_r7_37;

                    long double temp3_1 = var_f8_4;
                    x87_r7_37 - temp3_1;

                    if (!(*(&((x87_r7_37 < temp3_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_37, temp3_1) ? 1 : 0) << 0xa
                            | (x87_r7_37 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                        var_f8_4 = x87_r7_37;
                }

                cond:7_1 = var_108_5 != 1;
                var_108_5 -= 1;
            } while (cond:7_1);
            long double x87_r7_40 = var_80 - var_100;
            int32_t var_104_1 = 0;
            void var_c8;
            memcpy(&var_c8, &var_90, 0x18);
            double var_b8_1 = x87_r7_40;
            long double x87_r7_41 = var_d0_1;
            long double temp4_1 = var_b8_1;
            x87_r7_41 - temp4_1;

            if (*(&((x87_r7_41 < temp4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_41, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_41 == temp4_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                long double x87_r7_46;
                long double temp5_1;

                do
                {
                    if (!var_104_1)
                    {
                        a1[0x3f] = QTask_HandleInput(a1, QTask_OpenEvent_2(), 0);
                        var_104_1 = 1;
                    }

                    double var_b8_2 = var_b8_1 - var_100;
                    sub_507d60(a1[0x3f], a1, &var_c8);
                    var_b8_1 = var_b8_2 - var_100;
                    x87_r7_46 = var_d0_1;
                    temp5_1 = var_b8_1;
                    x87_r7_46 - temp5_1;
                } while (*(&((x87_r7_46 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_46, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_46 == temp5_1 ? 1 : 0) << 0xe) + 1) & 1);
            }

            long double x87_r7_48 = var_100 + var_80;
            memcpy(&var_c8, &var_90, 0x18);
            double var_b8_3 = x87_r7_48;
            long double x87_r7_49 = var_f8_4;
            long double temp6_1 = var_b8_3;
            x87_r7_49 - temp6_1;

            if (!(*(&((x87_r7_49 < temp6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_49, temp6_1) ? 1 : 0) << 0xa
                | (x87_r7_49 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_54;
                long double temp7_1;

                do
                {
                    if (!var_104_1)
                    {
                        a1[0x3f] = QTask_HandleInput(a1, QTask_OpenEvent_2(), 0);
                        var_104_1 = 1;
                    }

                    double var_b8_4 = var_b8_3 + var_100;
                    sub_507d60(a1[0x3f], a1, &var_c8);
                    var_b8_3 = var_b8_4 + var_100;
                    x87_r7_54 = var_f8_4;
                    temp7_1 = var_b8_3;
                    x87_r7_54 - temp7_1;
                } while (!(*(&((x87_r7_54 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_54, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r7_54 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x41));
            }
        }

        if (!var_ec)
            sub_4b0d50();
    }

    int32_t edx_21 = *(a1[0x1a] + 0xdd0);
    int32_t eax_64 = a1[0x3e] * 0x30;
    *(eax_64 + 0xba206c) = a1[0x33];
    *(eax_64 + 0xba2070) = 0x3f800000;
    *(eax_64 + 0xba2060) = a1[0x31];
    *(eax_64 + 0xba2064) = a1[0x32];
    *(eax_64 + 0xba2088) = *(edx_21 + a1[0x2f] * 0xc);
    *(eax_64 + 0xba2070) = 1f / (1 << (*(eax_64 + 0xba2064) & 0x1f)) * *(eax_64 + 0xba2070);
    long double x87_r7_58 = 0x40000000 >> (a1[0x2e] & 0x1f);
    *(eax_64 + 0xba2078) = *(a1 + 0x20) - x87_r7_58;
    *(eax_64 + 0xba2080) = *(a1 + 0x28) - x87_r7_58;
    int32_t result = a1[0x2f] * 3;
    char ecx_33 = *(edx_21 + (result << 2) + 4);
    *(a1 + 0xdf) = 0;
    a1[0x37] = ecx_33;
    g_b97d20 = 1;
    return result;
}
