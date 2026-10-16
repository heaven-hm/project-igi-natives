#include "gi_platform.h"
#include "0051E1F0-FlatSky_Process.h"
float FlatSky_Process(void* a1) __location("valA")

{
    float v_46c = (*(int32_t*)(uintptr_t)(a1 + 0x70)) * 4096.0f;
    float v_430 = (*(int32_t*)(uintptr_t)(a1 + 0x6c)) * 4096.0f;
    long double x87_r7_7 = v_46c - (v_46c - 409.600006.0f) * (*(int32_t*)(uintptr_t)(a1 + 0x74));
    float v_424 = x87_r7_7;
    float v_3e0 = 1.0f / (x87_r7_7 - v_46c);
    Light_SetLightColor_9((*(int32_t*)(uintptr_t)(a1 + 0x84)));
    char v_3dc;
    memcpy(&v_3dc, &g_bcaae0, 0x28);
    float v_3c4;
    long double x87_r7_10 = v_3c4;
    long double f1 = 0.0f;
    x87_r7_10 - f1;
    float v_3c0;

    if (*(&((x87_r7_10 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, f1) ? 1 : 0) << 0xa
        | (x87_r7_10 == f1 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_11 = v_3c0;
        long double f3_1 = 0.0f;
        x87_r7_11 - f3_1;

        if (*(&((x87_r7_11 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_11 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            v_3c4 = 1.0f;
    }

    long double x87_r7_12 = v_3c0;
    long double fpu6 = v_3c4;
    long double x87_r7_14 = 1.0 / sqrtl(fpu6 * fpu6 + x87_r7_12 * x87_r7_12);
    float v_3c4_1 = v_3c4 * x87_r7_14;
    long double x87_r7_15 = x87_r7_14 * v_3c0;
    long double x87_r6_4 = 0.0f;
    long double x87_r5_4 = 0.0f;
    float v_44c = x87_r5_4 - x87_r7_15;
    long double x87_r5_6 = -((x87_r5_4 - v_3c4_1));
    long double x87_r4_4 = 0.0f;
    float v_414 = g_bcaae8 * x87_r4_4 + g_bcaae4 * x87_r5_6 + g_bcaae0 * v_44c;
    float v_410 = g_bcaae8;
    float v_40c = g_bcaae4 * x87_r7_15 + g_bcaae0 * v_3c4_1 + g_bcaae8 * x87_r6_4;
    float v_408 = g_bcaaf4 * x87_r4_4 + g_bcaaf0 * x87_r5_6 + g_bcaaec * v_44c;
    float v_404 = g_bcaaf4;
    float v_400 = g_bcaaf0 * x87_r7_15 + g_bcaaec * v_3c4_1 + g_bcaaf4 * x87_r6_4;
    int32_t v_3b8;
    int32_t v_3f0 = v_3b8 + g_bcab04 + 1;
    float v_3fc = g_bcab00 * x87_r4_4 + g_bcaafc * x87_r5_6 + g_bcaaf8 * v_44c;
    float v_3f8 = g_bcab00;
    long double x87_r7_18 =
        x87_r7_15 * g_bcaafc + g_bcaaf8 * v_3c4_1 + g_bcab00 * x87_r6_4;
    float v_3ec = -(v_46c);
    float v_470 = v_40c * v_46c + v_410 * v_430;
    long double x87_r5_17 = v_404 * v_430;
    float v_3b4 = v_414 * v_46c + v_470;
    float v_45c = v_400 * v_46c + x87_r5_17;
    float v_3b0 = v_408 * v_46c + v_45c;
    float v_468 = v_3f8 * v_430;
    long double x87_r7_19 = x87_r7_18 * v_46c;
    float v_444 = v_3fc * v_46c + x87_r7_19 + v_468;
    float v_3ac = v_444;
    float v_420 = v_3ec * v_414 + v_470;
    float v_41c = v_3ec * v_408 + v_45c;
    long double x87_r6_33 = v_3ec * v_3fc;
    v_3ec = v_420;
    float result_1 = x87_r6_33 + x87_r7_19 + v_468;
    long double x87_r7_21 = v_444;
    long double f2 = 409.600006.0f;
    x87_r7_21 - f2;
    float result = result_1;
    float result_2 = result;
    float v_3e8 = v_41c;
    result = (x87_r7_21 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_21, f2) ? 1 : 0) << 0xa
        | (x87_r7_21 == f2 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        long double x87_r7_22 = result_1;
        long double f4_1 = 409.600006.0f;
        x87_r7_22 - f4_1;
        result = (x87_r7_22 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_22, f4_1) ? 1 : 0) << 0xa
            | (x87_r7_22 == f4_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
        {
            float v_464;
            Display_CheckCapabilities_15(&v_464, &v_3b4);
            float v_440;
            Display_CheckCapabilities_15(&v_440, &v_3ec);
            v_414 = g_bcabb8;
            v_410 = g_bcabbc;
            long double x87_r7_26 = g_bcabc0 + g_bcabb8;
            float v_40c_1 = x87_r7_26;
            float v_408_1 = g_bcabbc;
            v_404 = g_bcabb8;
            long double x87_r6_39 = g_bcabc4 + g_bcabbc;
            float v_400_1 = x87_r6_39;
            float v_3fc_1 = x87_r7_26;
            float v_3f8_1 = x87_r6_39;
            float v_42c = v_440 - v_464;
            float v_460;
            float v_43c;
            float v_428_1 = v_43c - v_460;
            Sys_CheckHeap_9(&v_42c);
            float v_434_1 = -(v_42c);
            long double x87_r7_34 = v_440 - v_464;
            float v_438 = v_428_1;
            float v_468_1 = -1.0f;
            float v_470_2 = 100000.0f;
            float v_45c_1 = -100000.0f;
            float* srcS1 = &v_410;
            int32_t i_4 = 4;
            float v_458_1 = x87_r7_34 * 0.5.0f + v_464;
            float v_454_1 = (v_43c - v_460) * 0.5.0f + v_460;
            int32_t i;

            do
            {
                v_420 = srcS1[-1] - v_458_1;
                float v_41c_1 = *srcS1 - v_454_1;
                long double fp0_1 = Sys_OpenFileStream_10(&v_420, &v_438);
                long double x87_r6_40 = v_468_1;
                x87_r6_40 - fp0_1;

                if (*(&((x87_r6_40 < fp0_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_40, fp0_1) ? 1 : 0) << 0xa
                        | (x87_r6_40 == fp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    v_468_1 = fp0_1;

                long double fp0_2;
                fp0_2 = Sys_OpenFileStream_10(&v_420, &v_42c);
                long double x87_r6_41 = v_470_2;
                x87_r6_41 - fp0_2;
                result = (x87_r6_41 < fp0_2 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_41, fp0_2) ? 1 : 0) << 0xa
                    | (x87_r6_41 == fp0_2 ? 1 : 0) << 0xe | 0x3800;

                if (!(*(&result + 1) & 1))
                    v_470_2 = fp0_2;

                long double x87_r6_42 = v_45c_1;
                x87_r6_42 - fp0_2;
                result = (x87_r6_42 < fp0_2 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_42, fp0_2) ? 1 : 0) << 0xa
                    | (x87_r6_42 == fp0_2 ? 1 : 0) << 0xe | 0x3800;

                if (*(&result + 1) & 0x41)
                    v_45c_1 = fp0_2;

                srcS1 = &srcS1[2];
                i = i_4;
                i_4 -= 1;
            } while (i != 1);
            long double x87_r7_49 = v_468_1;
            long double f6_1 = 0.0f;
            x87_r7_49 - f6_1;
            result = (x87_r7_49 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_49, f6_1) ? 1 : 0) << 0xa
                | (x87_r7_49 == f6_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 1))
            {
                long double x87_r7_51 = v_468_1 * v_438;
                float valA7 = v_42c;
                v_464 = valA7;
                v_440 = valA7;
                char v_3a4;
                float* valA8 = &v_3a4;
                int32_t i_3 = 0xd;
                v_438 = x87_r7_51 * 0.0834166706.0f;
                float v_434_2 = v_468_1 * v_434_1 * 0.0834166706.0f;
                long double x87_r7_58 = v_45c_1 * v_42c * 1.00100005.0f;
                float v_43c_2 = v_45c_1 * v_428_1 * 1.00100005.0f;
                v_464 = v_470_2 * v_42c * 1.00100005.0f;
                long double x87_r7_59 = x87_r7_58 + v_458_1;
                long double x87_r6_53 = v_454_1 + v_43c_2;
                long double x87_r5_19 = v_458_1 + v_464;
                long double x87_r4_7 = v_454_1 + v_470_2 * v_428_1 * 1.00100005.0f;
                int32_t i_1;

                do
                {
                    valA8[-1] = x87_r5_19;
                    *valA8 = x87_r4_7;
                    valA8[8] = x87_r7_59;
                    valA8[9] = x87_r6_53;
                    x87_r5_19 = x87_r5_19 + v_438;
                    valA8 = &valA8[0x12];
                    i_1 = i_3;
                    i_3 -= 1;
                    x87_r4_7 = x87_r4_7 + v_434_2;
                    x87_r7_59 = x87_r7_59 + v_438;
                    x87_r6_53 = x87_r6_53 + v_434_2;
                } while (i_1 != 1);
                float v_460_3 = x87_r4_7;
                valA8 = g_ba1fdc;
                v_464 = x87_r5_19;
                float v_43c_3 = x87_r6_53;
                v_440 = x87_r7_59;
                v_420 = g_bcabc8 + g_bcabb8;
                float v_41c_2 = g_bcabcc + g_bcabbc;
                result = QTask_DeleteTask_2(a1, valA8);

                for (float i_2 = result; i_2; i_2 = result)
                {
                    long double x87_r7_64 = g_bcaaf8;
                    long double x87_r6_54 = g_bcaafc;
                    long double x87_r5_20 = g_bcab00;
                    float* objC5 = &v_3a4;
                    int32_t j_1 = 0x1a;
                    int32_t j;

                    do
                    {
                        long double x87_r4_10 = (objC5[-1] - v_420) / g_bcab28;
                        long double x87_r3_30 = (*objC5 - v_41c_2) / g_bcab2c;
                        float v_44c_2 =
                            x87_r3_30 * g_bcaaec + x87_r4_10 * g_bcaae0 + x87_r7_64;
                        float v_458_2 = v_44c_2;
                        float v_444_1 =
                            x87_r3_30 * g_bcaaf4 + x87_r4_10 * g_bcaae8 + x87_r5_20;
                        long double x87_r4_15 = v_430 / v_444_1;
                        float v_458_3 = x87_r4_15 * v_44c_2;
                        float v_454_3 = x87_r4_15
                            * (x87_r3_30 * g_bcaaf0 + x87_r4_10 * g_bcaae4 + x87_r6_54);
                        objC5[2] = v_458_3 * *(i_2 + 0x248) + *(i_2 + 0x254);
                        objC5[3] = v_454_3 * *(i_2 + 0x248) + *(i_2 + 0x258);
                        objC5[1] = x87_r4_15 * v_444_1 * g_bcab00 + v_454_3 * g_bcaafc
                            + v_458_3 * g_bcaaf8;
                        objC5[5] = *(i_2 + 0x260);
                        objC5[6] = *(i_2 + 0x264);
                        objC5[7] = *(i_2 + 0x268);
                        long double x87_r4_20 = objC5[1];
                        long double f8_1 = v_424;
                        x87_r4_20 - f8_1;

                        if (!(*(&((x87_r4_20 < f8_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r4_20, f8_1) ? 1 : 0) << 0xa
                            | (x87_r4_20 == f8_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1))
                        {
                            long double x87_r4_26 =
                                (v_424 - 1.0f / objC5[1] * v_424 * v_46c) * v_3e0;
                            float v_470_3 = x87_r4_26;
                            objC5[4] = x87_r4_26;
                            long double x87_r4_27 = v_470_3;
                            long double f9_1 = 0.0f;
                            x87_r4_27 - f9_1;

                            if (!(*(&((x87_r4_27 < f9_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r4_27, f9_1) ? 1 : 0) << 0xa
                                | (x87_r4_27 == f9_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1))
                            {
                                long double x87_r4_28 = v_470_3;
                                long double f10_1 = 0.999000013.0f;
                                x87_r4_28 - f10_1;

                                if (!(*(&((x87_r4_28 < f10_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r4_28, f10_1) ? 1 : 0) << 0xa
                                        | (x87_r4_28 == f10_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41))
                                    objC5[4] = 0x3f7fbe77;
                            }
                            else
                                objC5[4] = 0;
                        }
                        else
                            objC5[4] = 0x3f800000;

                        long double x87_r4_30 = objC5[4] * *(i_2 + 0x25c);
                        objC5 = &objC5[9];
                        j = j_1;
                        j_1 -= 1;
                        objC5[-5] = x87_r4_30;
                        objC5[-8] = objC5[-8] * 16.0f;
                    } while (j != 1);
                    bool cond_2_1 = !*(i_2 + 0x44);
                    char v_3a8;
                    v_404 = &v_3a8;
                    v_410 = 12.5.0f;
                    v_414 = 0.0f;
                    int32_t v_40c_2 = 0xffffffff;
                    int32_t v_408_2 = 0x1a;

                    if (cond_2_1)
                        g_a84a50 = 0;
                    else
                        g_a84a50 = i_2 + 0x20;

                    ((int(*)())(uintptr_t)(*((g_a84a54 << 2) + &g_a94e84)))(&v_414);
                    result = QTask_TriggerEvent_2(i_2, g_ba1fdc);
                }
            }
        }
    }

    return result;
}
