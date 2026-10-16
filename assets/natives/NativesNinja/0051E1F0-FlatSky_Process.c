#include "0051E1F0-FlatSky_Process.h"
/* 0x0051e1f0 FlatSky_Process full linked: callers=0 callees=9 */
float sub_51e1f0(void* a1) __location("eax")

{
    float var_46c = *(a1 + 0x70) * 4096f;
    float var_430 = *(a1 + 0x6c) * 4096f;
    long double x87_r7_7 = var_46c - (var_46c - 409.600006f) * *(a1 + 0x74);
    float var_424 = x87_r7_7;
    float var_3e0 = 1f / (x87_r7_7 - var_46c);
    sub_52d060(*(a1 + 0x84));
    void var_3dc;
    memcpy(&var_3dc, &g_bcaae0, 0x28);
    float var_3c4;
    long double x87_r7_10 = var_3c4;
    long double temp1 = 0f;
    x87_r7_10 - temp1;
    float var_3c0;

    if (*(&((x87_r7_10 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, temp1) ? 1 : 0) << 0xa
        | (x87_r7_10 == temp1 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_11 = var_3c0;
        long double temp3_1 = 0f;
        x87_r7_11 - temp3_1;

        if (*(&((x87_r7_11 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_11 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            var_3c4 = 1f;
    }

    long double x87_r7_12 = var_3c0;
    long double x87_r6 = var_3c4;
    long double x87_r7_14 = 1.0 / sqrtl(x87_r6 * x87_r6 + x87_r7_12 * x87_r7_12);
    float var_3c4_1 = var_3c4 * x87_r7_14;
    long double x87_r7_15 = x87_r7_14 * var_3c0;
    long double x87_r6_4 = 0f;
    long double x87_r5_4 = 0f;
    float var_44c = x87_r5_4 - x87_r7_15;
    long double x87_r5_6 = -((x87_r5_4 - var_3c4_1));
    long double x87_r4_4 = 0f;
    float var_414 = g_bcaae8 * x87_r4_4 + g_bcaae4 * x87_r5_6 + g_bcaae0 * var_44c;
    float var_410 = g_bcaae8;
    float var_40c = g_bcaae4 * x87_r7_15 + g_bcaae0 * var_3c4_1 + g_bcaae8 * x87_r6_4;
    float var_408 = g_bcaaf4 * x87_r4_4 + g_bcaaf0 * x87_r5_6 + g_bcaaec * var_44c;
    float var_404 = g_bcaaf4;
    float var_400 = g_bcaaf0 * x87_r7_15 + g_bcaaec * var_3c4_1 + g_bcaaf4 * x87_r6_4;
    int32_t var_3b8;
    int32_t var_3f0 = var_3b8 + g_bcab04 + 1;
    float var_3fc = g_bcab00 * x87_r4_4 + g_bcaafc * x87_r5_6 + g_bcaaf8 * var_44c;
    float var_3f8 = g_bcab00;
    long double x87_r7_18 =
        x87_r7_15 * g_bcaafc + g_bcaaf8 * var_3c4_1 + g_bcab00 * x87_r6_4;
    float var_3ec = -(var_46c);
    float var_470 = var_40c * var_46c + var_410 * var_430;
    long double x87_r5_17 = var_404 * var_430;
    float var_3b4 = var_414 * var_46c + var_470;
    float var_45c = var_400 * var_46c + x87_r5_17;
    float var_3b0 = var_408 * var_46c + var_45c;
    float var_468 = var_3f8 * var_430;
    long double x87_r7_19 = x87_r7_18 * var_46c;
    float var_444 = var_3fc * var_46c + x87_r7_19 + var_468;
    float var_3ac = var_444;
    float var_420 = var_3ec * var_414 + var_470;
    float var_41c = var_3ec * var_408 + var_45c;
    long double x87_r6_33 = var_3ec * var_3fc;
    var_3ec = var_420;
    float result_1 = x87_r6_33 + x87_r7_19 + var_468;
    long double x87_r7_21 = var_444;
    long double temp2 = 409.600006f;
    x87_r7_21 - temp2;
    float result = result_1;
    float result_2 = result;
    float var_3e8 = var_41c;
    result = (x87_r7_21 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_21, temp2) ? 1 : 0) << 0xa
        | (x87_r7_21 == temp2 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        long double x87_r7_22 = result_1;
        long double temp4_1 = 409.600006f;
        x87_r7_22 - temp4_1;
        result = (x87_r7_22 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_22, temp4_1) ? 1 : 0) << 0xa
            | (x87_r7_22 == temp4_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
        {
            float var_464;
            sub_498000(&var_464, &var_3b4);
            float var_440;
            sub_498000(&var_440, &var_3ec);
            var_414 = g_bcabb8;
            var_410 = g_bcabbc;
            long double x87_r7_26 = g_bcabc0 + g_bcabb8;
            float var_40c_1 = x87_r7_26;
            float var_408_1 = g_bcabbc;
            var_404 = g_bcabb8;
            long double x87_r6_39 = g_bcabc4 + g_bcabbc;
            float var_400_1 = x87_r6_39;
            float var_3fc_1 = x87_r7_26;
            float var_3f8_1 = x87_r6_39;
            float var_42c = var_440 - var_464;
            float var_460;
            float var_43c;
            float var_428_1 = var_43c - var_460;
            sub_4b2900(&var_42c);
            float var_434_1 = -(var_42c);
            long double x87_r7_34 = var_440 - var_464;
            float var_438 = var_428_1;
            float var_468_1 = -1f;
            float var_470_2 = 100000f;
            float var_45c_1 = -100000f;
            float* esi_1 = &var_410;
            int32_t i_4 = 4;
            float var_458_1 = x87_r7_34 * 0.5f + var_464;
            float var_454_1 = (var_43c - var_460) * 0.5f + var_460;
            int32_t i;

            do
            {
                var_420 = esi_1[-1] - var_458_1;
                float var_41c_1 = *esi_1 - var_454_1;
                long double st0_1 = sub_4b2980(&var_420, &var_438);
                long double x87_r6_40 = var_468_1;
                x87_r6_40 - st0_1;

                if (*(&((x87_r6_40 < st0_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_40, st0_1) ? 1 : 0) << 0xa
                        | (x87_r6_40 == st0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    var_468_1 = st0_1;

                long double st0_2;
                st0_2 = sub_4b2980(&var_420, &var_42c);
                long double x87_r6_41 = var_470_2;
                x87_r6_41 - st0_2;
                result = (x87_r6_41 < st0_2 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_41, st0_2) ? 1 : 0) << 0xa
                    | (x87_r6_41 == st0_2 ? 1 : 0) << 0xe | 0x3800;

                if (!(*(&result + 1) & 1))
                    var_470_2 = st0_2;

                long double x87_r6_42 = var_45c_1;
                x87_r6_42 - st0_2;
                result = (x87_r6_42 < st0_2 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_42, st0_2) ? 1 : 0) << 0xa
                    | (x87_r6_42 == st0_2 ? 1 : 0) << 0xe | 0x3800;

                if (*(&result + 1) & 0x41)
                    var_45c_1 = st0_2;

                esi_1 = &esi_1[2];
                i = i_4;
                i_4 -= 1;
            } while (i != 1);
            long double x87_r7_49 = var_468_1;
            long double temp6_1 = 0f;
            x87_r7_49 - temp6_1;
            result = (x87_r7_49 < temp6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_49, temp6_1) ? 1 : 0) << 0xa
                | (x87_r7_49 == temp6_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 1))
            {
                long double x87_r7_51 = var_468_1 * var_438;
                float eax_7 = var_42c;
                var_464 = eax_7;
                var_440 = eax_7;
                void var_3a4;
                float* eax_8 = &var_3a4;
                int32_t i_3 = 0xd;
                var_438 = x87_r7_51 * 0.0834166706f;
                float var_434_2 = var_468_1 * var_434_1 * 0.0834166706f;
                long double x87_r7_58 = var_45c_1 * var_42c * 1.00100005f;
                float var_43c_2 = var_45c_1 * var_428_1 * 1.00100005f;
                var_464 = var_470_2 * var_42c * 1.00100005f;
                long double x87_r7_59 = x87_r7_58 + var_458_1;
                long double x87_r6_53 = var_454_1 + var_43c_2;
                long double x87_r5_19 = var_458_1 + var_464;
                long double x87_r4_7 = var_454_1 + var_470_2 * var_428_1 * 1.00100005f;
                int32_t i_1;

                do
                {
                    eax_8[-1] = x87_r5_19;
                    *eax_8 = x87_r4_7;
                    eax_8[8] = x87_r7_59;
                    eax_8[9] = x87_r6_53;
                    x87_r5_19 = x87_r5_19 + var_438;
                    eax_8 = &eax_8[0x12];
                    i_1 = i_3;
                    i_3 -= 1;
                    x87_r4_7 = x87_r4_7 + var_434_2;
                    x87_r7_59 = x87_r7_59 + var_438;
                    x87_r6_53 = x87_r6_53 + var_434_2;
                } while (i_1 != 1);
                float var_460_3 = x87_r4_7;
                eax_8 = g_ba1fdc;
                var_464 = x87_r5_19;
                float var_43c_3 = x87_r6_53;
                var_440 = x87_r7_59;
                var_420 = g_bcabc8 + g_bcabb8;
                float var_41c_2 = g_bcabcc + g_bcabbc;
                result = QTask_DeleteTask_2(a1, eax_8);

                for (float i_2 = result; i_2; i_2 = result)
                {
                    long double x87_r7_64 = g_bcaaf8;
                    long double x87_r6_54 = g_bcaafc;
                    long double x87_r5_20 = g_bcab00;
                    float* ecx_5 = &var_3a4;
                    int32_t j_1 = 0x1a;
                    int32_t j;

                    do
                    {
                        long double x87_r4_10 = (ecx_5[-1] - var_420) / g_bcab28;
                        long double x87_r3_30 = (*ecx_5 - var_41c_2) / g_bcab2c;
                        float var_44c_2 =
                            x87_r3_30 * g_bcaaec + x87_r4_10 * g_bcaae0 + x87_r7_64;
                        float var_458_2 = var_44c_2;
                        float var_444_1 =
                            x87_r3_30 * g_bcaaf4 + x87_r4_10 * g_bcaae8 + x87_r5_20;
                        long double x87_r4_15 = var_430 / var_444_1;
                        float var_458_3 = x87_r4_15 * var_44c_2;
                        float var_454_3 = x87_r4_15
                            * (x87_r3_30 * g_bcaaf0 + x87_r4_10 * g_bcaae4 + x87_r6_54);
                        ecx_5[2] = var_458_3 * *(i_2 + 0x248) + *(i_2 + 0x254);
                        ecx_5[3] = var_454_3 * *(i_2 + 0x248) + *(i_2 + 0x258);
                        ecx_5[1] = x87_r4_15 * var_444_1 * g_bcab00 + var_454_3 * g_bcaafc
                            + var_458_3 * g_bcaaf8;
                        ecx_5[5] = *(i_2 + 0x260);
                        ecx_5[6] = *(i_2 + 0x264);
                        ecx_5[7] = *(i_2 + 0x268);
                        long double x87_r4_20 = ecx_5[1];
                        long double temp8_1 = var_424;
                        x87_r4_20 - temp8_1;

                        if (!(*(&((x87_r4_20 < temp8_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r4_20, temp8_1) ? 1 : 0) << 0xa
                            | (x87_r4_20 == temp8_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1))
                        {
                            long double x87_r4_26 =
                                (var_424 - 1f / ecx_5[1] * var_424 * var_46c) * var_3e0;
                            float var_470_3 = x87_r4_26;
                            ecx_5[4] = x87_r4_26;
                            long double x87_r4_27 = var_470_3;
                            long double temp9_1 = 0f;
                            x87_r4_27 - temp9_1;

                            if (!(*(&((x87_r4_27 < temp9_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r4_27, temp9_1) ? 1 : 0) << 0xa
                                | (x87_r4_27 == temp9_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1))
                            {
                                long double x87_r4_28 = var_470_3;
                                long double temp10_1 = 0.999000013f;
                                x87_r4_28 - temp10_1;

                                if (!(*(&((x87_r4_28 < temp10_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r4_28, temp10_1) ? 1 : 0) << 0xa
                                        | (x87_r4_28 == temp10_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41))
                                    ecx_5[4] = 0x3f7fbe77;
                            }
                            else
                                ecx_5[4] = 0;
                        }
                        else
                            ecx_5[4] = 0x3f800000;

                        long double x87_r4_30 = ecx_5[4] * *(i_2 + 0x25c);
                        ecx_5 = &ecx_5[9];
                        j = j_1;
                        j_1 -= 1;
                        ecx_5[-5] = x87_r4_30;
                        ecx_5[-8] = ecx_5[-8] * 16f;
                    } while (j != 1);
                    bool cond:2_1 = !*(i_2 + 0x44);
                    void var_3a8;
                    var_404 = &var_3a8;
                    var_410 = 12.5f;
                    var_414 = 0f;
                    int32_t var_40c_2 = 0xffffffff;
                    int32_t var_408_2 = 0x1a;

                    if (cond:2_1)
                        g_a84a50 = 0;
                    else
                        g_a84a50 = i_2 + 0x20;

                    (*((g_a84a54 << 2) + &g_a94e84))(&var_414);
                    result = QTask_TriggerEvent_2(i_2, g_ba1fdc);
                }
            }
        }
    }

    return result;
}
