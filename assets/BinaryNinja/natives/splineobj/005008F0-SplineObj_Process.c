// Original IGI.EXE function: SplineObj_Process (VA 0x005008F0; static CFG gate FAIL, CFG score 0.800).
#include "SplineObj_Process.h"
int32_t SplineObj_Process(float a1)

{
    int32_t* flagP = a1;
    void* valA = flagP[5];
    char v_11 = 0;
    void* tmpD = QTask_AllocateEvent_2(flagP, g_a7a620);
    char* ctxB;

    if (tmpD)
    {
        void* dstD11 = tmpD + 0x178;
        int32_t i = 0xffffffff;
        ctxB = &flagP[0x5e];

        while (i)
        {
            bool cond_0_1 = 0 != *dstD11;
            dstD11 += 1;
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t objC14 = ~i;
        int32_t srcS9;
        int32_t dstD14;
        dstD14 = memcpy(ctxB, dstD11 - objC14, objC14 & 0xfffffffc);
        memcpy(dstD14, srcS9, objC14 & 3);
        void* dstD15 = tmpD + 0x188;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond_1_1 = 0 != *dstD15;
            dstD15 += 1;
            i_1 -= 1;

            if (!cond_1_1)
                break;
        }

        int32_t objC18 = ~i_1;
        int32_t srcS12;
        int32_t dstD18;
        dstD18 = memcpy(&flagP[0x62], dstD15 - objC18, objC18 & 0xfffffffc);
        memcpy(dstD18, srcS12, objC18 & 3);
        memcpy(&flagP[0x3e], tmpD + 0xf8, 0x18);
        memcpy(&flagP[0x44], tmpD + 0x110, 0x28);
        long double x87_r7_17 = flagP[0x44];
        long double f1_1 = 0f;
        x87_r7_17 - f1_1;
        float valA15 = flagP[0x47];
        *(flagP + 0x1a1) = *(tmpD + 0x1a1);
        float v_8_2 = valA15;
        *(flagP + 0x1a5) = *(tmpD + 0x1a5);
        float v_4_2 = flagP[0x4a];

        if (!(*(&((x87_r7_17 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_17, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_17 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        {
        label_500c79:
            long double x87_r6_19 = v_4_2;
            long double x87_r5_3 = v_8_2;
            long double x87_r6_21 =
                1.0 / sqrtl(x87_r7_17 * x87_r7_17 + x87_r5_3 * x87_r5_3 + x87_r6_19 * x87_r6_19);
            x87_r7_17 = x87_r7_17 * x87_r6_21;
            v_8_2 = v_8_2 * x87_r6_21;
            v_4_2 = v_4_2 * x87_r6_21;
        }
        else
        {
            long double x87_r6_17 = v_8_2;
            long double f2_1 = 0f;
            x87_r6_17 - f2_1;

            if (!(*(&((x87_r6_17 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_17, f2_1) ? 1 : 0) << 0xa
                    | (x87_r6_17 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_500c79;

            long double x87_r6_18 = v_4_2;
            long double f4_1 = 0f;
            x87_r6_18 - f4_1;

            if (!(*(&((x87_r6_18 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_18, f4_1) ? 1 : 0) << 0xa
                    | (x87_r6_18 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_500c79;
        }

        int32_t* tmpD1 = *(tmpD + 0xf0);
        float v_8_3;
        long double x87_r6_30;
        long double x87_r7_19;

        if (!tmpD1)
        {
            x87_r7_19 = x87_r7_17 * g_54e5d4;
            v_8_3 = g_54e5d4 * v_8_2;
            x87_r6_30 = g_54e5d4;
        }
        else
        {
            long double x87_r6_27 = tmpD1[0x40] - tmpD1[0x3f];
            a1 = x87_r6_27;
            x87_r7_19 = x87_r7_17 * x87_r6_27;
            v_8_3 = a1 * v_8_2;
            x87_r6_30 = a1;
        }

        *(flagP + 0xf8) = x87_r7_19 + *(flagP + 0xf8);
        *(flagP + 0x100) = v_8_3 + *(flagP + 0x100);
        *(flagP + 0x108) = x87_r6_30 * v_4_2 + *(flagP + 0x108);
    }
    else
    {
        tmpD = g_a7a620;
        int32_t* valA2 = QTask_TriggerEvent_2(flagP, tmpD);
        ctxB = &flagP[0x5e];

        if (valA2)
        {
            void* dstD1 = &valA2[0x5e];
            int32_t i_2 = 0xffffffff;

            while (i_2)
            {
                bool cond_3_1 = 0 != *dstD1;
                dstD1 += 1;
                i_2 -= 1;

                if (!cond_3_1)
                    break;
            }

            int32_t objC3 = ~i_2;
            int32_t srcS2;
            int32_t dstD4;
            dstD4 = memcpy(ctxB, dstD1 - objC3, objC3 & 0xfffffffc);
            memcpy(dstD4, srcS2, objC3 & 3);
            void* dstD5 = &valA2[0x62];
            int32_t i_3 = 0xffffffff;

            while (i_3)
            {
                bool cond_4_1 = 0 != *dstD5;
                dstD5 += 1;
                i_3 -= 1;

                if (!cond_4_1)
                    break;
            }

            int32_t objC7 = ~i_3;
            int32_t srcS5;
            int32_t dstD8;
            dstD8 = memcpy(&flagP[0x62], dstD5 - objC7, objC7 & 0xfffffffc);
            memcpy(dstD8, srcS5, objC7 & 3);
            memcpy(&flagP[0x3e], &valA2[0x3e], 0x18);
            memcpy(&flagP[0x44], &valA2[0x44], 0x28);
            float v_c_1 = flagP[0x44];
            long double x87_r7_1 = v_c_1;
            long double f3_1 = 0f;
            x87_r7_1 - f3_1;
            float v_4_1 = flagP[0x4a];
            *(flagP + 0x1a1) = *(valA2 + 0x1a1);
            float objC13 = flagP[0x47];
            float v_8_1 = objC13;

            if (!(*(&((x87_r7_1 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_1, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_500aa3:
                long double x87_r7_4 = v_4_1;
                long double x87_r6_1 = v_8_1;
                long double x87_r5_1 = v_c_1;
                long double x87_r7_6 =
                    1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_4 * x87_r7_4);
                v_c_1 = v_c_1 * x87_r7_6;
                v_8_1 = v_8_1 * x87_r7_6;
                v_4_1 = v_4_1 * x87_r7_6;
            }
            else
            {
                long double x87_r7_2 = v_8_1;
                long double f5_1 = 0f;
                x87_r7_2 - f5_1;

                if (!(*(&((x87_r7_2 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_2, f5_1) ? 1 : 0) << 0xa
                        | (x87_r7_2 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_500aa3;

                long double x87_r7_3 = v_4_1;
                long double f6_1 = 0f;
                x87_r7_3 - f6_1;

                if (!(*(&((x87_r7_3 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_3, f6_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_500aa3;
            }

            objC13 = g_a7a620;
            int32_t* valA10 = QTask_TriggerEvent_2(valA2, objC13);
            long double x87_r7_10;

            if (!valA10)
            {
                x87_r7_10 = g_54e5d4 * v_c_1;
                v_8_1 = g_54e5d4 * v_8_1;
                v_4_1 = g_54e5d4 * v_4_1;
            }
            else
            {
                void* valA11 = valA10[0x3c];

                if (!valA11)
                    x87_r7_10 = v_c_1;
                else
                {
                    long double x87_r7_9 = *(valA11 + 0x100) - *(valA11 + 0xfc);
                    a1 = x87_r7_9;
                    x87_r7_10 = x87_r7_9 * v_c_1;
                    v_8_1 = a1 * v_8_1;
                    v_4_1 = a1 * v_4_1;
                }
            }

            v_11 = 1;
            *(flagP + 0xf8) = *(flagP + 0xf8) - x87_r7_10;
            *(flagP + 0x100) = *(flagP + 0x100) - v_8_1;
            *(flagP + 0x108) = *(flagP + 0x108) - v_4_1;
        }
        else
        {
            *ctxB = g_567c74;
            char objC2 = g_567c74;
            flagP[0x3e] = 0;
            flagP[0x40] = 0;
            flagP[0x42] = 0;
            flagP[0x62] = objC2;
            flagP[0x3f] = 0;
            flagP[0x41] = 0;
            flagP[0x43] = 0;
            flagP[0x44] = 0x3f800000;
            flagP[0x45] = 0;
            flagP[0x46] = 0;
            flagP[0x47] = 0;
            flagP[0x48] = 0x3f800000;
            flagP[0x49] = 0;
            flagP[0x4a] = 0;
            flagP[0x4b] = 0;
            flagP[0x4c] = 0x3f800000;
            flagP[0x4d] = 0;
            *(flagP + 0x1a1) = 0;
            *(flagP + 0x1a5) = 0;
        }
    }

    flagP[0x3c] = 0;
    *(flagP + 0x1a2) = *(valA + 0x4e);
    flagP[0x66] = *(valA + 0x24);
    flagP[0x69] = 0;
    flagP[0x68] = 0;
    void* valA19 = DynObj_Missing(ctxB);
    int16_t result = DynObj_LookupHashItem_6(g_a44344, flagP, valA19);
    result = v_11;
    flagP[0x67] = g_a44344;

    if (!result)
        return result;

    int32_t objC26 = 0;
    objC26 = QTask_TriggerEvent_2(flagP, g_a7a620)[7];
    uint32_t valA22 = Script_ParseEnumReal32_8();
    uint32_t tmpD4 = valA22 * 3;
    valA22 = g_a7a620;
    return (*(((objC26 + (tmpD4 << 7)) << 2) + &g_a96ae0))(QTask_TriggerEvent_2(flagP, valA22), 0);
}
