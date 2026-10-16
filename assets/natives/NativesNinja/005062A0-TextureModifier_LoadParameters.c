#include "005062A0-TextureModifier_LoadParameters.h"
/* 0x005062a0 TextureModifier_LoadParameters full linked: callers=0 callees=37 */
int32_t sub_5062a0(int32_t* a1)

{
    int32_t var_a0 = 0;
    int32_t var_9c = 0xc1c00000;
    int32_t var_100 = 0x40000000 >> (a1[0x2e] & 0x1f) << 1;
    int32_t* var_10c;
    int32_t var_f4;

    if (!a1[0x35])
    {
        int32_t eax_4 = QHash_ValueGet();
        var_f4 = eax_4;

        if (!eax_4)
            QHash_ValueSet();

        int32_t* eax_5 = a1[0x3a];

        if (eax_5)
        {
            QTask_FindType(eax_5);
            a1[0x3a] = 0;
        }

        var_10c = *(a1[0x1a] + 0xdcc);

        if (a1[0x39] == 0xffffffff)
        {
            int32_t eax_8 = g_a7ad08;
            *((eax_8 << 2) + &g_a7a8f4) = a1;
            a1[0x39] = eax_8;
            int32_t eax_10 = g_a7ad08 + 1;
            g_a7ad08 = eax_10;

            if (eax_10 >= 0x100)
            {
                Error_Show("Too many texturemodfiers");

                while (true)
                    /* nop */
            }
        }
    }

    *(a1[0x39] * 0x30 + 0xba50a8) = 0;
    double var_e8;
    memcpy(&var_e8, &a1[0x1c], 0x18);
    double var_d8;
    double var_b8;
    double var_a8;
    void var_78;
    int32_t var_60;
    int32_t i_1;

    if (!a1[0x35] && *(a1 + 0xd5))
    {
        int32_t i_2 = 0;
        memcpy(&var_b8, &a1[0x1c], 0x18);
        var_a8 = var_a8 + 268435456.0;
        i_1 = 0;
        int32_t esi_2 = 0;

        while (true)
        {
            if (esi_2 < 5)
            {
                sub_4cabf0(a1[0x1a], &var_78, &var_b8, 1, &var_a0, 0xff, nullptr, 0x80000000);
                i_2 = i_1;
                esi_2 += 1;

                if (!i_2)
                    continue;
            }
            else if (!i_2)
                break;

            var_d8 = var_60;
            int32_t var_5c;
            *(&var_d8 + 4) = var_5c;
            break;
        }
    }

    void* eax_14 = a1[0x1a];
    int32_t ecx_6 = -(var_100);
    var_e8 = *(eax_14 + 0xde0) + var_e8;
    double var_e0;
    double var_e0_1 = *(eax_14 + 0xde4) + var_e0;
    double var_d8_1 = *(eax_14 + 0xde8) + var_d8;
    long double x87_r7_10 = var_e8 & ecx_6;
    *(a1 + 0x88) = x87_r7_10;
    long double x87_r6_1 = var_e0_1 & ecx_6;
    double var_80 = x87_r6_1;
    *(a1 + 0x90) = x87_r6_1;
    long double x87_r6_3 = var_d8_1 & ecx_6;
    double var_f0_3 = x87_r6_3;
    *(a1 + 0x98) = x87_r6_3;
    long double x87_r6_4 = var_100;
    memcpy(&var_e8, &a1[0x22], 0x18);
    *(a1 + 0xa0) = x87_r6_4 + x87_r7_10;
    *(a1 + 0xa8) = x87_r6_4 + var_80;
    *(a1 + 0xb0) = x87_r6_4 + var_f0_3;
    long double x87_r6_5 = x87_r6_4 * 0.5;
    var_e8 = x87_r6_5 + var_e8;
    double var_e0_2 = x87_r6_5 + var_e0_1;
    long double x87_r7_12 = x87_r6_5 + var_d8_1;
    double var_d8_2 = x87_r7_12;
    var_e8 = var_e8 - *(eax_14 + 0xde0);
    double var_e0_3 = var_e0_2 - *(eax_14 + 0xde4);
    double var_d8_3 = x87_r7_12 - *(eax_14 + 0xde8);
    *(a1 + 0x88) = *(a1 + 0x88) - *(eax_14 + 0xde0);
    *(a1 + 0x90) = *(a1 + 0x90) - *(eax_14 + 0xde4);
    *(a1 + 0x98) = *(a1 + 0x98) - *(eax_14 + 0xde8);
    *(a1 + 0xa0) = *(a1 + 0xa0) - *(eax_14 + 0xde0);
    bool cond:1 = !*(a1 + 0xd3);
    *(a1 + 0xa8) = *(a1 + 0xa8) - *(eax_14 + 0xde4);
    *(a1 + 0xb0) = *(a1 + 0xb0) - *(eax_14 + 0xde8);

    if (!cond:1)
        sub_4c7350(eax_14, a1, &var_e8, &a1[0x22], &a1[0x28], 4);

    sub_4c6e70(a1[0x1a], a1, &var_e8, &a1[0x22], &a1[0x28]);

    if (!a1[0x35])
    {
        int32_t eax_20 = a1[0x2f];

        if (eax_20 >= 0x100)
            a1[0x2f] = 0xff;
        else if (eax_20 < 0xffffffff)
            a1[0x2f] = 0xffffffff;

        if (a1[0x2f] != 0xffffffff)
        {
            int32_t eax_21 = sub_506c60(a1[0x36]);
            int32_t* ecx_13 = var_10c;
            int32_t eax_22 = a1[0x2f];
            a1[0x36] = eax_21;
            var_100 = eax_22;

            if (ecx_13[eax_22 * 3])
            {
                if (*(a1 + 0xd3))
                    *(a1 + 0xd2) = 1;

                if (eax_22 != a1[0x30])
                {
                    int32_t edx_17 = eax_22 * 3;
                    a1[0x36] = ecx_13[edx_17 + 2];
                    a1[0x34] = ecx_13[edx_17 + 1];
                }
                else
                {
                    int32_t* edi_5 = &var_10c[eax_22 * 3];

                    if (edi_5[2] != eax_21)
                    {
                        if (*(eax_22 + 0xb81a20))
                            *(a1 + 0xd2) = 0;
                        else
                        {
                            sub_4b0d10(*edi_5);
                            *edi_5 = 0;
                        }

                        edi_5[2] = eax_21;
                        int32_t eax_37;
                        int32_t edx_13;
                        edx_13 = HIGHD(eax_21 * eax_21);
                        eax_37 = LOWD(eax_21 * eax_21);
                        int32_t edi_7 = (eax_37 + (edx_13 & 7)) >> 3;
                        void* eax_39 = Mem_Alloc(edi_7, 4);
                        *edi_5 = eax_39;
                        __builtin_memset(__builtin_memset(eax_39, 0, edi_7 & 0xfffffffc), 0,
                            edi_7 & 3);
                        *(var_100 + 0xb81a20) = 0;
                    }
                }
            }
            else
            {
                int32_t eax_23 = 0;
                var_100 = 0;

                while (*ecx_13)
                {
                    eax_23 += 1;
                    ecx_13 = &ecx_13[3];

                    if (eax_23 >= 0x100)
                        break;
                }

                var_100 = eax_23;

                if (eax_23 == 0x100)
                {
                    Warning_Show("limit reached");
                    var_100 = 0xff;
                }

                int32_t* eax_26 = &var_10c[var_100 * 3];
                eax_26[2] = eax_21;
                int32_t eax_29;
                int32_t edx_7;
                edx_7 = HIGHD(eax_21 * eax_21);
                eax_29 = LOWD(eax_21 * eax_21);
                int32_t edi_2 = (eax_29 + (edx_7 & 7)) >> 3;
                void* eax_31 = Mem_Alloc(edi_2, 4);
                *eax_26 = eax_31;
                __builtin_memset(__builtin_memset(eax_31, 0, edi_2 & 0xfffffffc), 0, edi_2 & 3);
                int32_t eax_33 = var_100;
                *(eax_33 + 0xb81a20) = 0;
                a1[0x2f] = eax_33;
            }

            int32_t eax_42;

            if (eax_21 == 0x100)
                eax_42 = 7;
            else if (eax_21 == 0x80)
                eax_42 = 6;
            else if (eax_21 == 0x40)
                eax_42 = 5;
            else if (eax_21 == 0x20)
                eax_42 = 4;
            else if (eax_21 == 0x10)
                eax_42 = 3;
            else if (eax_21 != 8)
            {
                Error_Show("Illegal shift size");

                while (true)
                    /* nop */
            }
            else
                eax_42 = 2;

            a1[0x32] = 0x1e - a1[0x2e] - eax_42;
            a1[0x33] = eax_42 - 2;
        }

        if (a1[0x2f] == 0xffffffff)
        {
            void* eax_45 = a1[0x30];

            if (eax_45 != 0xffffffff)
            {
                if (!*(eax_45 + 0xb81a20))
                {
                    sub_4b0d10(var_10c[eax_45 * 3]);
                    var_10c[a1[0x30] * 3] = 0;
                }

                var_10c[a1[0x30] * 3] = 0;
            }
        }

        int32_t eax_49 = a1[0x2f];
        bool cond:4_1 = !a1[0x34];
        a1[0x30] = eax_49;

        if (!cond:4_1)
        {
            char* eax_50 = &var_10c[1];
            int32_t i_3 = 0x100;
            int32_t i;

            do
            {
                *eax_50 = 0;
                eax_50 = &eax_50[0xc];
                i = i_3;
                i_3 -= 1;
            } while (i != 1);
            eax_49 = a1[0x2f];

            if (eax_49 >= 0)
                var_10c[eax_49 * 3 + 1] = 1;
        }
        else if (eax_49 >= 0)
            var_10c[eax_49 * 3 + 1] = 0;

        char eax_51 = *(a1 + 0xd5);
        *(a1 + 0xd3) = 0;

        if (eax_51)
        {
            void var_98;
            memcpy(&var_98, &a1[8], 0x18);
            double var_88;
            long double x87_r7_26 = var_88;
            var_100 = x87_r7_26;
            double var_f0_4 = x87_r7_26;
            int32_t var_10c_1 = 0x32;
            int32_t var_108_5 = 0x40000000 >> (a1[0x2e] & 0x1f);
            var_108_5 = var_108_5;
            bool cond:6_1;

            do
            {
                memcpy(&var_b8, &var_98, 0x18);
                long double st0_1 = sub_4b4770(0xa7acf8);
                var_b8 = (st0_1 + st0_1 - 1f) * var_108_5 + var_b8;
                long double st0_2 = sub_4b4770(0xa7acf8);
                int32_t eax_52 = a1[0x1a];
                double var_b0 = (st0_2 + st0_2 - 1f) * var_108_5 + var_b0;
                var_a8 = var_a8 + 268435456.0;
                sub_4cabf0(eax_52, &var_78, &var_b8, 1, &var_a0, 0xff, nullptr, 0x80000000);

                while (i_1)
                {
                    long double x87_r7_40 = var_60;
                    long double temp2_1 = var_100;
                    x87_r7_40 - temp2_1;

                    if (*(&((x87_r7_40 < temp2_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_40, temp2_1) ? 1 : 0) << 0xa
                            | (x87_r7_40 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        var_100 = x87_r7_40;

                    long double temp3_1 = var_f0_4;
                    x87_r7_40 - temp3_1;

                    if (!(*(&((x87_r7_40 < temp3_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_40, temp3_1) ? 1 : 0) << 0xa
                            | (x87_r7_40 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                        var_f0_4 = x87_r7_40;

                    void var_70;
                    memcpy(&var_b8, &var_70, 0x18);
                    var_a8 = x87_r7_40 - 4096.0;
                    sub_4cabf0(a1[0x1a], &var_78, &var_b8, 1, &var_a0, 0xff, nullptr, 0x80000000);
                }

                cond:6_1 = var_10c_1 != 1;
                var_10c_1 -= 1;
            } while (cond:6_1);
            long double x87_r7_43 = var_88 - var_108_5;
            int32_t var_10c_2 = 0;
            void var_d0;
            memcpy(&var_d0, &var_98, 0x18);
            double var_c0_1 = x87_r7_43;
            long double x87_r7_44 = var_100;
            long double temp4_1 = var_c0_1;
            x87_r7_44 - temp4_1;

            if (*(&((x87_r7_44 < temp4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_44, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_44 == temp4_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                long double x87_r7_49;
                long double temp5_1;

                do
                {
                    if (!var_10c_2)
                    {
                        a1[0x3a] = QTask_HandleInput(a1, QTask_OpenEvent_2(), 0);
                        var_10c_2 = 1;
                    }

                    double var_c0_2 = var_c0_1 - var_108_5;
                    sub_506cd0(a1[0x3a], a1, &var_d0);
                    var_c0_1 = var_c0_2 - var_108_5;
                    x87_r7_49 = var_100;
                    temp5_1 = var_c0_1;
                    x87_r7_49 - temp5_1;
                } while (*(&((x87_r7_49 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_49, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_49 == temp5_1 ? 1 : 0) << 0xe) + 1) & 1);
            }

            long double x87_r7_51 = var_108_5 + var_88;
            memcpy(&var_d0, &var_98, 0x18);
            double var_c0_3 = x87_r7_51;
            long double x87_r7_52 = var_f0_4;
            long double temp6_1 = var_c0_3;
            x87_r7_52 - temp6_1;

            if (!(*(&((x87_r7_52 < temp6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_52, temp6_1) ? 1 : 0) << 0xa
                | (x87_r7_52 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_57;
                long double temp7_1;

                do
                {
                    if (!var_10c_2)
                    {
                        a1[0x3a] = QTask_HandleInput(a1, QTask_OpenEvent_2(), 0);
                        var_10c_2 = 1;
                    }

                    double var_c0_4 = var_c0_3 + var_108_5;
                    sub_506cd0(a1[0x3a], a1, &var_d0);
                    var_c0_3 = var_c0_4 + var_108_5;
                    x87_r7_57 = var_f0_4;
                    temp7_1 = var_c0_3;
                    x87_r7_57 - temp7_1;
                } while (!(*(&((x87_r7_57 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_57, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r7_57 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x41));
            }
        }

        if (!var_f4)
            sub_4b0d50();
    }

    int32_t edx_23 = *(a1[0x1a] + 0xdcc);
    int32_t eax_73 = a1[0x39] * 0x30;
    *(eax_73 + 0xba508c) = a1[0x33];
    int32_t ecx_38 = *(edx_23 + a1[0x2f] * 0xc + 8);
    *(eax_73 + 0xba5090) = (ecx_38 - 1) / ecx_38;
    *(eax_73 + 0xba5080) = a1[0x31];
    *(eax_73 + 0xba5084) = a1[0x32];
    *(eax_73 + 0xba50a8) = *(edx_23 + a1[0x2f] * 0xc);
    *(eax_73 + 0xba5090) = 1f / (1 << (*(eax_73 + 0xba5084) & 0x1f)) * *(eax_73 + 0xba5090);
    long double x87_r7_63 = 0x40000000 >> (a1[0x2e] & 0x1f);
    *(eax_73 + 0xba5098) = *(a1 + 0x20) - x87_r7_63;
    *(eax_73 + 0xba50a0) = *(a1 + 0x28) - x87_r7_63;
    int32_t result = a1[0x2f] * 3;
    char ecx_47 = *(edx_23 + (result << 2) + 4);
    *(a1 + 0xd3) = 0;
    a1[0x34] = ecx_47;
    return result;
}
