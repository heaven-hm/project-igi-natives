#include "HeightMap_Setup.h"
int32_t HeightMap_Setup(int32_t* a1)

{
    g_b97d20 = 0;
    int32_t v_b0 = 0;
    int32_t v_ac = 0xc1c00000;
    int32_t v_100 = 0x40000000 >> (a1[0x2e] & 0x1f) << 1;
    int32_t* v_104;
    int32_t v_ec;

    if (!a1[0x38])
    {
        int32_t valA4 = QHash_ValueGet();
        v_ec = valA4;

        if (!valA4)
            QHash_ValueSet();

        int32_t* valA5 = a1[0x3f];

        if (valA5)
        {
            QTask_FindType(valA5);
            a1[0x3f] = 0;
        }

        v_104 = *(a1[0x1a] + 0xdd0);

        if (a1[0x3e] == 0xffffffff)
        {
            int32_t valA8 = g_a7b250;
            *((valA8 << 2) + &g_a7ad10) = a1;
            a1[0x3e] = valA8;
            int32_t valA10 = g_a7b250 + 1;
            g_a7b250 = valA10;

            if (valA10 >= 0x100)
            {
                Error_Show("Too many texturemodfiers");

                while (true)
                    /* nop */
            }
        }
    }

    *(a1[0x3e] * 0x30 + 0xba2088) = 0;
    double v_e8;
    memcpy(&v_e8, &a1[0x1c], 0x18);
    double v_d8;
    double v_a8;
    void v_78;
    int32_t v_60;
    int32_t v_20;

    if (!a1[0x38])
    {
        int32_t valA13 = 0;
        memcpy(&v_a8, &a1[0x1c], 0x18);
        v_20 = 0;
        int32_t srcS2 = 0;

        while (true)
        {
            if (srcS2 < 5)
            {
                DynObj_UpdateDynTree_10(a1[0x1a], &v_78, &v_a8, 1, &v_b0, 0xff, nullptr, 0x80000000);
                valA13 = v_20;
                srcS2 += 1;

                if (!valA13)
                    continue;
            }
            else if (!valA13)
                break;

            v_d8 = v_60;
            int32_t v_5c;
            *(&v_d8 + 4) = v_5c;
            break;
        }
    }

    void* valA15 = a1[0x1a];
    int32_t objC6 = -(v_100);
    v_e8 = *(valA15 + 0xde0) + v_e8;
    double v_e0 = *(valA15 + 0xde4) + v_e0;
    double v_d8_1 = *(valA15 + 0xde8) + v_d8;
    long double x87_r7_7 = v_e8 & objC6;
    *(a1 + 0x88) = x87_r7_7;
    long double x87_r6_1 = v_e0 & objC6;
    double v_d0 = x87_r6_1;
    *(a1 + 0x90) = x87_r6_1;
    long double x87_r6_3 = v_d8_1 & objC6;
    double v_f8_3 = x87_r6_3;
    *(a1 + 0x98) = x87_r6_3;
    long double x87_r6_4 = v_100;
    memcpy(&v_e8, &a1[0x22], 0x18);
    *(a1 + 0xa0) = x87_r6_4 + x87_r7_7;
    *(a1 + 0xa8) = x87_r6_4 + v_d0;
    *(a1 + 0xb0) = x87_r6_4 + v_f8_3;
    long double x87_r6_5 = x87_r6_4 * 0.5;
    v_e8 = x87_r6_5 + v_e8;
    v_e0 = x87_r6_5 + v_e0;
    long double x87_r7_9 = x87_r6_5 + v_d8_1;
    double v_d8_2 = x87_r7_9;
    v_e8 = v_e8 - *(valA15 + 0xde0);
    v_e0 = v_e0 - *(valA15 + 0xde4);
    double v_d8_3 = x87_r7_9 - *(valA15 + 0xde8);
    *(a1 + 0x88) = *(a1 + 0x88) - *(valA15 + 0xde0);
    *(a1 + 0x90) = *(a1 + 0x90) - *(valA15 + 0xde4);
    *(a1 + 0x98) = *(a1 + 0x98) - *(valA15 + 0xde8);
    bool cond_1 = !*(a1 + 0xdf);
    *(a1 + 0xa0) = *(a1 + 0xa0) - *(valA15 + 0xde0);
    *(a1 + 0xa8) = *(a1 + 0xa8) - *(valA15 + 0xde4);
    *(a1 + 0xb0) = *(a1 + 0xb0) - *(valA15 + 0xde8);

    if (!cond_1)
        DynObj_RemoveSymbol_8(valA15, a1, &v_e8, &a1[0x22], &a1[0x28], 4);

    DynObj_UpdateDynTree_8(a1[0x1a], a1, &v_e8, &a1[0x22], &a1[0x28]);

    if (!a1[0x38])
    {
        int32_t* objC9;

        if (a1[0x2f] == 0xffffffff)
            objC9 = v_104;
        else
        {
            int32_t valA21 = Physics_ApplyImpulse_5(a1[0x39]);
            void* srcS8 = a1[0x2f];
            objC9 = v_104;
            a1[0x39] = valA21;

            if (objC9[srcS8 * 3])
            {
                if (*(a1 + 0xdf))
                    *(a1 + 0xde) = 1;

                void* valA28 = srcS8 * 3;

                if (srcS8 != a1[0x30])
                {
                    a1[0x39] = objC9[valA28 + 2];
                    a1[0x37] = objC9[valA28 + 1];
                }
                else
                {
                    int32_t* valA29 = &objC9[valA28];
                    bool cond_6_1 = objC9[valA28 + 2] == valA21;
                    v_100 = valA29;

                    if (!cond_6_1)
                    {
                        if (*(srcS8 + 0xb81920))
                            *(a1 + 0xde) = 0;
                        else
                        {
                            Sys_ExecuteBytecode_2(*valA29);
                            int32_t* tmpD11 = v_100;
                            valA29 = tmpD11;
                            *tmpD11 = 0;
                        }

                        valA29[2] = valA21;
                        int32_t dstD7 = (valA21 + 1) * (valA21 + 1);
                        void* valA30 = Mem_Alloc(dstD7, 4);
                        *v_100 = valA30;
                        __builtin_memset(__builtin_memset(valA30, 0x40404040, dstD7 & 0xfffffffc),
                            0x40, dstD7 & 3);
                        objC9 = v_104;
                        *(srcS8 + 0xb81920) = 0;
                    }
                }
            }
            else
            {
                void* srcS9 = nullptr;
                int32_t* valA22 = objC9;

                while (*valA22)
                {
                    srcS9 += 1;
                    valA22 = &valA22[3];

                    if (srcS9 >= 0x100)
                        break;
                }

                if (srcS9 == 0x100)
                {
                    Warning_Show("limit reached");
                    objC9 = v_104;
                    srcS9 = 0xff;
                }

                void* valA24 = &objC9[srcS9 * 3];
                v_100 = valA24;
                *(valA24 + 8) = valA21;
                int32_t dstD3 = (valA21 + 1) * (valA21 + 1);
                void* valA25 = Mem_Alloc(dstD3, 4);
                *v_100 = valA25;
                __builtin_memset(__builtin_memset(valA25, 0x40404040, dstD3 & 0xfffffffc), 0x40,
                    dstD3 & 3);
                objC9 = v_104;
                *(srcS9 + 0xb81920) = 0;
                a1[0x2f] = srcS9;
            }

            int32_t valA33;

            if (valA21 == 0x100)
                valA33 = 7;
            else if (valA21 == 0x80)
                valA33 = 6;
            else if (valA21 == 0x40)
                valA33 = 5;
            else if (valA21 == 0x20)
                valA33 = 4;
            else if (valA21 == 0x10)
                valA33 = 3;
            else if (valA21 != 8)
            {
                Error_Show("Illegal shift size");

                while (true)
                    /* nop */
            }
            else
                valA33 = 2;

            a1[0x32] = 0x1e - a1[0x2e] - valA33;
            a1[0x33] = valA33 - 2;
        }

        if (a1[0x2f] == 0xffffffff)
        {
            void* valA35 = a1[0x30];

            if (valA35 != 0xffffffff)
            {
                if (!*(valA35 + 0xb81920))
                {
                    Sys_ExecuteBytecode_2(objC9[valA35 * 3]);
                    objC9 = v_104;
                    v_104[a1[0x30] * 3] = 0;
                }

                objC9[a1[0x30] * 3] = 0;
            }
        }

        int32_t valA40 = a1[0x2f];
        bool cond_4_1 = !a1[0x37];
        a1[0x30] = valA40;

        if (!cond_4_1)
        {
            char* valA41 = &objC9[1];
            int32_t i_1 = 0x100;
            int32_t i;

            do
            {
                *valA41 = 0;
                valA41 = &valA41[0xc];
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
            valA40 = a1[0x2f];

            if (valA40 >= 0)
                objC9[valA40 * 3 + 1] = 1;
        }
        else if (valA40 >= 0)
            objC9[valA40 * 3 + 1] = 0;

        char valA42 = *(a1 + 0xe1);
        *(a1 + 0xdf) = 0;

        if (valA42)
        {
            void v_90;
            memcpy(&v_90, &a1[8], 0x18);
            double v_80;
            long double x87_r7_23 = v_80;
            double v_d0_1 = x87_r7_23;
            double v_f8_4 = x87_r7_23;
            int32_t v_108_5 = 0xc8;
            v_100 = 0x40000000 >> (a1[0x2e] & 0x1f);
            bool cond_7_1;

            do
            {
                memcpy(&v_a8, &v_90, 0x18);
                long double fp0_1 = Sys_AllocateMemory_14(0xa7b138);
                v_a8 = (fp0_1 + fp0_1 - 1f) * v_100 + v_a8;
                long double fp0_2 = Sys_AllocateMemory_14(0xa7b138);
                double v_a0 = (fp0_2 + fp0_2 - 1f) * v_100 + v_a0;
                double v_98 = v_98 + 268435456.0;
                DynObj_UpdateDynTree_10(a1[0x1a], &v_78, &v_a8, 1, &v_b0, 0xff, nullptr, 0x80000000);

                if (v_20)
                {
                    long double x87_r7_37 = v_60;
                    long double f2_1 = v_d0_1;
                    x87_r7_37 - f2_1;

                    if (*(&((x87_r7_37 < f2_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_37, f2_1) ? 1 : 0) << 0xa
                            | (x87_r7_37 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        v_d0_1 = x87_r7_37;

                    long double f3_1 = v_f8_4;
                    x87_r7_37 - f3_1;

                    if (!(*(&((x87_r7_37 < f3_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_37, f3_1) ? 1 : 0) << 0xa
                            | (x87_r7_37 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                        v_f8_4 = x87_r7_37;
                }

                cond_7_1 = v_108_5 != 1;
                v_108_5 -= 1;
            } while (cond_7_1);
            long double x87_r7_40 = v_80 - v_100;
            int32_t v_104_1 = 0;
            void v_c8;
            memcpy(&v_c8, &v_90, 0x18);
            double v_b8_1 = x87_r7_40;
            long double x87_r7_41 = v_d0_1;
            long double f4_1 = v_b8_1;
            x87_r7_41 - f4_1;

            if (*(&((x87_r7_41 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_41, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_41 == f4_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                long double x87_r7_46;
                long double f5_1;

                do
                {
                    if (!v_104_1)
                    {
                        a1[0x3f] = QTask_HandleInput(a1, QTask_OpenEvent_2(), 0);
                        v_104_1 = 1;
                    }

                    double v_b8_2 = v_b8_1 - v_100;
                    Physics_EvaluateAreaCriteria_6(a1[0x3f], a1, &v_c8);
                    v_b8_1 = v_b8_2 - v_100;
                    x87_r7_46 = v_d0_1;
                    f5_1 = v_b8_1;
                    x87_r7_46 - f5_1;
                } while (*(&((x87_r7_46 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_46, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_46 == f5_1 ? 1 : 0) << 0xe) + 1) & 1);
            }

            long double x87_r7_48 = v_100 + v_80;
            memcpy(&v_c8, &v_90, 0x18);
            double v_b8_3 = x87_r7_48;
            long double x87_r7_49 = v_f8_4;
            long double f6_1 = v_b8_3;
            x87_r7_49 - f6_1;

            if (!(*(&((x87_r7_49 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_49, f6_1) ? 1 : 0) << 0xa
                | (x87_r7_49 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_54;
                long double f7_1;

                do
                {
                    if (!v_104_1)
                    {
                        a1[0x3f] = QTask_HandleInput(a1, QTask_OpenEvent_2(), 0);
                        v_104_1 = 1;
                    }

                    double v_b8_4 = v_b8_3 + v_100;
                    Physics_EvaluateAreaCriteria_6(a1[0x3f], a1, &v_c8);
                    v_b8_3 = v_b8_4 + v_100;
                    x87_r7_54 = v_f8_4;
                    f7_1 = v_b8_3;
                    x87_r7_54 - f7_1;
                } while (!(*(&((x87_r7_54 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_54, f7_1) ? 1 : 0) << 0xa
                    | (x87_r7_54 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41));
            }
        }

        if (!v_ec)
            Sys_DispatchOpcode_2();
    }

    int32_t tmpD21 = *(a1[0x1a] + 0xdd0);
    int32_t valA64 = a1[0x3e] * 0x30;
    *(valA64 + 0xba206c) = a1[0x33];
    *(valA64 + 0xba2070) = 0x3f800000;
    *(valA64 + 0xba2060) = a1[0x31];
    *(valA64 + 0xba2064) = a1[0x32];
    *(valA64 + 0xba2088) = *(tmpD21 + a1[0x2f] * 0xc);
    *(valA64 + 0xba2070) = 1f / (1 << (*(valA64 + 0xba2064) & 0x1f)) * *(valA64 + 0xba2070);
    long double x87_r7_58 = 0x40000000 >> (a1[0x2e] & 0x1f);
    *(valA64 + 0xba2078) = *(a1 + 0x20) - x87_r7_58;
    *(valA64 + 0xba2080) = *(a1 + 0x28) - x87_r7_58;
    int32_t result = a1[0x2f] * 3;
    char objC33 = *(tmpD21 + (result << 2) + 4);
    *(a1 + 0xdf) = 0;
    a1[0x37] = objC33;
    g_b97d20 = 1;
    return result;
}
