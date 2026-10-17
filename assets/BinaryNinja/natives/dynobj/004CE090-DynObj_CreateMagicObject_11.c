// Original IGI.EXE function: DynObj_CreateMagicObject_11 (VA 0x004CE090; static CFG gate PASS, CFG score 0.867).
#include "DynObj_CreateMagicObject_11.h"
uint32_t DynObj_CreateMagicObject_11(int32_t a1, char a2, int32_t a3, double* a4, int32_t a5, int32_t a6)

{
    DynObj_InsertHashItem_12(a1, a6);
    uint32_t result = a2;
    uint32_t result_1 = result;

    if (*(a1 + ((result + a6 * 0xfe) << 1) + 0x118))
    {
        DynObj_LookupHashItem_12(a1, a6);
        double* valA1 = a4;
        long double x87_r7_1 = *valA1;
        double v_20;
        memcpy(&v_20, valA1, 0x18);
        int32_t objC4 = x87_r7_1 + *(a1 + 0xde0);
        int32_t tmpD2 = valA1[1] + *(a1 + 0xde4);
        int64_t v_4c_3 = valA1[2];
        int32_t srcS3 = v_4c_3 + *(a1 + 0xde8);
        int32_t* v_60_1 = *(a1 + (a6 << 2) + 0x28);
        int32_t tmpD4 = *(a1 + (a6 << 2) + 0xd0);
        int32_t v_5c_1 = tmpD4;
        double v_38;
        memcpy(&v_38, a1 + a6 * 0x18 + 0x40, 0x18);

        while (true)
        {
            void* objC8 = v_60_1[0xf];
            int64_t v_54;
            double v_30;

            if (objC8)
            {
                *(&v_4c_3 + 4) = 0;
                v_4c_3 = *v_60_1;
                long double x87_r7_4 = v_4c_3;
                long double x87_r6_3 = *(objC8 + 8) * 0.5f / x87_r7_4;
                v_54 = (*valA1 - v_38 + x87_r7_4) * x87_r6_3;
                int32_t tmpD6 = v_54;
                v_54 = (valA1[1] - v_30 + x87_r7_4) * x87_r6_3;
                result = SoundSys_InitSoundSys_3(objC8, tmpD6, v_54);

                if (!result)
                    break;

                tmpD4 = v_5c_1;
            }

            for (void* i = v_60_1[0xb]; i; i = *(i + 0x58))
            {
                int32_t objC9 = 0;
                objC9 = *(i + 0x1c);
                int32_t dstD3 = *(((objC9 + result_1 * 0x180) << 2) + &g_a96ae0);

                if (dstD3)
                {
                    float valA5 = *(i + 0x44);
                    long double x87_r7_9 = *(i + 0x20) - valA5;
                    long double f1_1 = v_20;
                    x87_r7_9 - f1_1;

                    if (*(&((x87_r7_9 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_9, f1_1) ? 1 : 0) << 0xa
                        | (x87_r7_9 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double x87_r7_11 = valA5 + *(i + 0x20);
                        long double f2_1 = v_20;
                        x87_r7_11 - f2_1;

                        if (!(*(&((x87_r7_11 < f2_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_11, f2_1) ? 1 : 0) << 0xa
                            | (x87_r7_11 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
                        {
                            long double x87_r7_13 = *(i + 0x28) - valA5;
                            double v_18;
                            long double f3_1 = v_18;
                            x87_r7_13 - f3_1;

                            if (*(&((x87_r7_13 < f3_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_13, f3_1) ? 1 : 0) << 0xa
                                | (x87_r7_13 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            {
                                long double x87_r7_15 = valA5 + *(i + 0x28);
                                long double f4_1 = v_18;
                                x87_r7_15 - f4_1;

                                if (!(*(&((x87_r7_15 < f4_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_15, f4_1) ? 1 : 0) << 0xa
                                    | (x87_r7_15 == f4_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double x87_r7_17 = *(i + 0x30) - valA5;
                                    double v_10;
                                    long double f5_1 = v_10;
                                    x87_r7_17 - f5_1;

                                    if (*(&((x87_r7_17 < f5_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_17, f5_1) ? 1 : 0) << 0xa
                                        | (x87_r7_17 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    {
                                        long double x87_r7_19 = valA5 + *(i + 0x30);
                                        long double f6_1 = v_10;
                                        x87_r7_19 - f6_1;

                                        if (!(*(&((x87_r7_19 < f6_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_19, f6_1) ? 1 : 0) << 0xa
                                            | (x87_r7_19 == f6_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            && *(objC9 * 0x30 + 0xaf5f0c) & a5)
                                        {
                                            dstD3(i, a3);
                                            tmpD4 = v_5c_1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }

            char objC13 = tmpD4;
            result = ((srcS3 >> (objC13 & 0x1f) & 1) << 1 | (tmpD2 >> (objC13 & 0x1f) & 1)) << 1
                | (objC4 >> (objC13 & 0x1f) & 1);
            int32_t* objC15 = v_60_1[result + 3];
            v_60_1 = objC15;

            if (!objC15)
                break;

            tmpD4 -= 1;
            v_5c_1 = tmpD4;
            double v_28;

            if (tmpD4 == 0x1d)
            {
                uint32_t valA18 = ~result;
                v_54 = ((valA18 & 1) << 0x1e) - 0x20000000;
                long double x87_r7_27 = v_54 + v_38;
                v_54 = ((valA18 & 2) << 0x1d) - 0x20000000;
                v_38 = x87_r7_27;
                long double x87_r7_28 = v_54;
                v_54 = ((valA18 & 4) - 2) << 0x1c;
                valA1 = a4;
                v_30 = x87_r7_28 + v_30;
                v_28 = v_54 + v_28;
            }
            else
            {
                char objC18 = tmpD4;
                v_54 = ((result & 1) * 2 - 1) << (objC18 & 0x1f);
                v_38 = v_54 + v_38;
                v_54 = ((result & 2) - 1) << (objC18 & 0x1f);
                long double x87_r7_23 = v_54 + v_30;
                v_54 = ((result >> 1 & 2) - 1) << (objC18 & 0x1f);
                valA1 = a4;
                v_30 = x87_r7_23;
                v_28 = v_54 + v_28;
            }
        }
    }

    return result;
}
