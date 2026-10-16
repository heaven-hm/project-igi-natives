#include "TextureModifier_LoadParameters.h"
int32_t TextureModifier_LoadParameters(int32_t* a1)

{
    int32_t v_a0 = 0;
    int32_t v_9c = 0xc1c00000;
    int32_t v_100 = 0x40000000 >> (a1[0x2e] & 0x1f) << 1;
    int32_t* v_10c;
    int32_t v_f4;

    if (!a1[0x35])
    {
        int32_t valA4 = QHash_ValueGet();
        v_f4 = valA4;

        if (!valA4)
            QHash_ValueSet();

        int32_t* valA5 = a1[0x3a];

        if (valA5)
        {
            QTask_FindType(valA5);
            a1[0x3a] = 0;
        }

        v_10c = *(a1[0x1a] + 0xdcc);

        if (a1[0x39] == 0xffffffff)
        {
            int32_t valA8 = g_a7ad08;
            *((valA8 << 2) + &g_a7a8f4) = a1;
            a1[0x39] = valA8;
            int32_t valA10 = g_a7ad08 + 1;
            g_a7ad08 = valA10;

            if (valA10 >= 0x100)
            {
                Error_Show("Too many texturemodfiers");

                while (true)
                    /* nop */
            }
        }
    }

    *(a1[0x39] * 0x30 + 0xba50a8) = 0;
    double v_e8;
    memcpy(&v_e8, &a1[0x1c], 0x18);
    double v_d8;
    double v_b8;
    double v_a8;
    void v_78;
    int32_t v_60;
    int32_t i_1;

    if (!a1[0x35] && *(a1 + 0xd5))
    {
        int32_t i_2 = 0;
        memcpy(&v_b8, &a1[0x1c], 0x18);
        v_a8 = v_a8 + 268435456.0;
        i_1 = 0;
        int32_t srcS2 = 0;

        while (true)
        {
            if (srcS2 < 5)
            {
                DynObj_LookupHashItem_10(a1[0x1a], &v_78, &v_b8, 1, &v_a0, 0xff, nullptr, 0x80000000);
                i_2 = i_1;
                srcS2 += 1;

                if (!i_2)
                    continue;
            }
            else if (!i_2)
                break;

            v_d8 = v_60;
            int32_t v_5c;
            *(&v_d8 + 4) = v_5c;
            break;
        }
    }

    void* valA14 = a1[0x1a];
    int32_t objC6 = -(v_100);
    v_e8 = *(valA14 + 0xde0) + v_e8;
    double v_e0;
    double v_e0_1 = *(valA14 + 0xde4) + v_e0;
    double v_d8_1 = *(valA14 + 0xde8) + v_d8;
    long double x87_r7_10 = v_e8 & objC6;
    *(a1 + 0x88) = x87_r7_10;
    long double x87_r6_1 = v_e0_1 & objC6;
    double v_80 = x87_r6_1;
    *(a1 + 0x90) = x87_r6_1;
    long double x87_r6_3 = v_d8_1 & objC6;
    double v_f0_3 = x87_r6_3;
    *(a1 + 0x98) = x87_r6_3;
    long double x87_r6_4 = v_100;
    memcpy(&v_e8, &a1[0x22], 0x18);
    *(a1 + 0xa0) = x87_r6_4 + x87_r7_10;
    *(a1 + 0xa8) = x87_r6_4 + v_80;
    *(a1 + 0xb0) = x87_r6_4 + v_f0_3;
    long double x87_r6_5 = x87_r6_4 * 0.5;
    v_e8 = x87_r6_5 + v_e8;
    double v_e0_2 = x87_r6_5 + v_e0_1;
    long double x87_r7_12 = x87_r6_5 + v_d8_1;
    double v_d8_2 = x87_r7_12;
    v_e8 = v_e8 - *(valA14 + 0xde0);
    double v_e0_3 = v_e0_2 - *(valA14 + 0xde4);
    double v_d8_3 = x87_r7_12 - *(valA14 + 0xde8);
    *(a1 + 0x88) = *(a1 + 0x88) - *(valA14 + 0xde0);
    *(a1 + 0x90) = *(a1 + 0x90) - *(valA14 + 0xde4);
    *(a1 + 0x98) = *(a1 + 0x98) - *(valA14 + 0xde8);
    *(a1 + 0xa0) = *(a1 + 0xa0) - *(valA14 + 0xde0);
    bool cond_1 = !*(a1 + 0xd3);
    *(a1 + 0xa8) = *(a1 + 0xa8) - *(valA14 + 0xde4);
    *(a1 + 0xb0) = *(a1 + 0xb0) - *(valA14 + 0xde8);

    if (!cond_1)
        DynObj_RemoveSymbol_8(valA14, a1, &v_e8, &a1[0x22], &a1[0x28], 4);

    DynObj_UpdateDynTree_8(a1[0x1a], a1, &v_e8, &a1[0x22], &a1[0x28]);

    if (!a1[0x35])
    {
        int32_t valA20 = a1[0x2f];

        if (valA20 >= 0x100)
            a1[0x2f] = 0xff;
        else if (valA20 < 0xffffffff)
            a1[0x2f] = 0xffffffff;

        if (a1[0x2f] != 0xffffffff)
        {
            int32_t valA21 = Physics_ApplyImpulse_5(a1[0x36]);
            int32_t* objC13 = v_10c;
            int32_t valA22 = a1[0x2f];
            a1[0x36] = valA21;
            v_100 = valA22;

            if (objC13[valA22 * 3])
            {
                if (*(a1 + 0xd3))
                    *(a1 + 0xd2) = 1;

                if (valA22 != a1[0x30])
                {
                    int32_t tmpD17 = valA22 * 3;
                    a1[0x36] = objC13[tmpD17 + 2];
                    a1[0x34] = objC13[tmpD17 + 1];
                }
                else
                {
                    int32_t* dstD5 = &v_10c[valA22 * 3];

                    if (dstD5[2] != valA21)
                    {
                        if (*(valA22 + 0xb81a20))
                            *(a1 + 0xd2) = 0;
                        else
                        {
                            Sys_ExecuteBytecode_2(*dstD5);
                            *dstD5 = 0;
                        }

                        dstD5[2] = valA21;
                        int32_t valA37;
                        int32_t tmpD13;
                        tmpD13 = HIGHD(valA21 * valA21);
                        valA37 = LOWD(valA21 * valA21);
                        int32_t dstD7 = (valA37 + (tmpD13 & 7)) >> 3;
                        void* valA39 = Mem_Alloc(dstD7, 4);
                        *dstD5 = valA39;
                        __builtin_memset(__builtin_memset(valA39, 0, dstD7 & 0xfffffffc), 0,
                            dstD7 & 3);
                        *(v_100 + 0xb81a20) = 0;
                    }
                }
            }
            else
            {
                int32_t valA23 = 0;
                v_100 = 0;

                while (*objC13)
                {
                    valA23 += 1;
                    objC13 = &objC13[3];

                    if (valA23 >= 0x100)
                        break;
                }

                v_100 = valA23;

                if (valA23 == 0x100)
                {
                    Warning_Show("limit reached");
                    v_100 = 0xff;
                }

                int32_t* valA26 = &v_10c[v_100 * 3];
                valA26[2] = valA21;
                int32_t valA29;
                int32_t tmpD7;
                tmpD7 = HIGHD(valA21 * valA21);
                valA29 = LOWD(valA21 * valA21);
                int32_t dstD2 = (valA29 + (tmpD7 & 7)) >> 3;
                void* valA31 = Mem_Alloc(dstD2, 4);
                *valA26 = valA31;
                __builtin_memset(__builtin_memset(valA31, 0, dstD2 & 0xfffffffc), 0, dstD2 & 3);
                int32_t valA33 = v_100;
                *(valA33 + 0xb81a20) = 0;
                a1[0x2f] = valA33;
            }

            int32_t valA42;

            if (valA21 == 0x100)
                valA42 = 7;
            else if (valA21 == 0x80)
                valA42 = 6;
            else if (valA21 == 0x40)
                valA42 = 5;
            else if (valA21 == 0x20)
                valA42 = 4;
            else if (valA21 == 0x10)
                valA42 = 3;
            else if (valA21 != 8)
            {
                Error_Show("Illegal shift size");

                while (true)
                    /* nop */
            }
            else
                valA42 = 2;

            a1[0x32] = 0x1e - a1[0x2e] - valA42;
            a1[0x33] = valA42 - 2;
        }

        if (a1[0x2f] == 0xffffffff)
        {
            void* valA45 = a1[0x30];

            if (valA45 != 0xffffffff)
            {
                if (!*(valA45 + 0xb81a20))
                {
                    Sys_ExecuteBytecode_2(v_10c[valA45 * 3]);
                    v_10c[a1[0x30] * 3] = 0;
                }

                v_10c[a1[0x30] * 3] = 0;
            }
        }

        int32_t valA49 = a1[0x2f];
        bool cond_4_1 = !a1[0x34];
        a1[0x30] = valA49;

        if (!cond_4_1)
        {
            char* valA50 = &v_10c[1];
            int32_t i_3 = 0x100;
            int32_t i;

            do
            {
                *valA50 = 0;
                valA50 = &valA50[0xc];
                i = i_3;
                i_3 -= 1;
            } while (i != 1);
            valA49 = a1[0x2f];

            if (valA49 >= 0)
                v_10c[valA49 * 3 + 1] = 1;
        }
        else if (valA49 >= 0)
            v_10c[valA49 * 3 + 1] = 0;

        char valA51 = *(a1 + 0xd5);
        *(a1 + 0xd3) = 0;

        if (valA51)
        {
            void v_98;
            memcpy(&v_98, &a1[8], 0x18);
            double v_88;
            long double x87_r7_26 = v_88;
            v_100 = x87_r7_26;
            double v_f0_4 = x87_r7_26;
            int32_t v_10c_1 = 0x32;
            int32_t v_108_5 = 0x40000000 >> (a1[0x2e] & 0x1f);
            v_108_5 = v_108_5;
            bool cond_6_1;

            do
            {
                memcpy(&v_b8, &v_98, 0x18);
                long double fp0_1 = Sys_AllocateMemory_14(0xa7acf8);
                v_b8 = (fp0_1 + fp0_1 - 1f) * v_108_5 + v_b8;
                long double fp0_2 = Sys_AllocateMemory_14(0xa7acf8);
                int32_t valA52 = a1[0x1a];
                double v_b0 = (fp0_2 + fp0_2 - 1f) * v_108_5 + v_b0;
                v_a8 = v_a8 + 268435456.0;
                DynObj_LookupHashItem_10(valA52, &v_78, &v_b8, 1, &v_a0, 0xff, nullptr, 0x80000000);

                while (i_1)
                {
                    long double x87_r7_40 = v_60;
                    long double f2_1 = v_100;
                    x87_r7_40 - f2_1;

                    if (*(&((x87_r7_40 < f2_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_40, f2_1) ? 1 : 0) << 0xa
                            | (x87_r7_40 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        v_100 = x87_r7_40;

                    long double f3_1 = v_f0_4;
                    x87_r7_40 - f3_1;

                    if (!(*(&((x87_r7_40 < f3_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_40, f3_1) ? 1 : 0) << 0xa
                            | (x87_r7_40 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                        v_f0_4 = x87_r7_40;

                    void v_70;
                    memcpy(&v_b8, &v_70, 0x18);
                    v_a8 = x87_r7_40 - 4096.0;
                    DynObj_LookupHashItem_10(a1[0x1a], &v_78, &v_b8, 1, &v_a0, 0xff, nullptr, 0x80000000);
                }

                cond_6_1 = v_10c_1 != 1;
                v_10c_1 -= 1;
            } while (cond_6_1);
            long double x87_r7_43 = v_88 - v_108_5;
            int32_t v_10c_2 = 0;
            void v_d0;
            memcpy(&v_d0, &v_98, 0x18);
            double v_c0_1 = x87_r7_43;
            long double x87_r7_44 = v_100;
            long double f4_1 = v_c0_1;
            x87_r7_44 - f4_1;

            if (*(&((x87_r7_44 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_44, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_44 == f4_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                long double x87_r7_49;
                long double f5_1;

                do
                {
                    if (!v_10c_2)
                    {
                        a1[0x3a] = QTask_HandleInput(a1, QTask_OpenEvent_2(), 0);
                        v_10c_2 = 1;
                    }

                    double v_c0_2 = v_c0_1 - v_108_5;
                    Physics_SolveConstraints_5(a1[0x3a], a1, &v_d0);
                    v_c0_1 = v_c0_2 - v_108_5;
                    x87_r7_49 = v_100;
                    f5_1 = v_c0_1;
                    x87_r7_49 - f5_1;
                } while (*(&((x87_r7_49 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_49, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_49 == f5_1 ? 1 : 0) << 0xe) + 1) & 1);
            }

            long double x87_r7_51 = v_108_5 + v_88;
            memcpy(&v_d0, &v_98, 0x18);
            double v_c0_3 = x87_r7_51;
            long double x87_r7_52 = v_f0_4;
            long double f6_1 = v_c0_3;
            x87_r7_52 - f6_1;

            if (!(*(&((x87_r7_52 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_52, f6_1) ? 1 : 0) << 0xa
                | (x87_r7_52 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_57;
                long double f7_1;

                do
                {
                    if (!v_10c_2)
                    {
                        a1[0x3a] = QTask_HandleInput(a1, QTask_OpenEvent_2(), 0);
                        v_10c_2 = 1;
                    }

                    double v_c0_4 = v_c0_3 + v_108_5;
                    Physics_SolveConstraints_5(a1[0x3a], a1, &v_d0);
                    v_c0_3 = v_c0_4 + v_108_5;
                    x87_r7_57 = v_f0_4;
                    f7_1 = v_c0_3;
                    x87_r7_57 - f7_1;
                } while (!(*(&((x87_r7_57 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_57, f7_1) ? 1 : 0) << 0xa
                    | (x87_r7_57 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41));
            }
        }

        if (!v_f4)
            Sys_DispatchOpcode_2();
    }

    int32_t tmpD23 = *(a1[0x1a] + 0xdcc);
    int32_t valA73 = a1[0x39] * 0x30;
    *(valA73 + 0xba508c) = a1[0x33];
    int32_t objC38 = *(tmpD23 + a1[0x2f] * 0xc + 8);
    *(valA73 + 0xba5090) = (objC38 - 1) / objC38;
    *(valA73 + 0xba5080) = a1[0x31];
    *(valA73 + 0xba5084) = a1[0x32];
    *(valA73 + 0xba50a8) = *(tmpD23 + a1[0x2f] * 0xc);
    *(valA73 + 0xba5090) = 1f / (1 << (*(valA73 + 0xba5084) & 0x1f)) * *(valA73 + 0xba5090);
    long double x87_r7_63 = 0x40000000 >> (a1[0x2e] & 0x1f);
    *(valA73 + 0xba5098) = *(a1 + 0x20) - x87_r7_63;
    *(valA73 + 0xba50a0) = *(a1 + 0x28) - x87_r7_63;
    int32_t result = a1[0x2f] * 3;
    char objC47 = *(tmpD23 + (result << 2) + 4);
    *(a1 + 0xd3) = 0;
    a1[0x34] = objC47;
    return result;
}
