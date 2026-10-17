// IGI native provenance: FlatSky_Process - 0x0051E1F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051E1F0-FlatSky_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FlatSky_Process.h"
float FlatSky_Process(void* context) {
    float item_46c = *(context + 0x70) * 4096.0f;
    float item_430 = *(context + 0x6c) * 4096.0f;
    long double fpu_val_7_7 = item_46c - (item_46c - 409.600006f) * *(context + 0x74);
    float item_424 = fpu_val_7_7;
    float item_3e0 = 1.0f / (fpu_val_7_7 - item_46c);
    Light_SetLightColor_9(*(context + 0x84));
    void item_3dc;
    memcpy(&item_3dc, &g_bcaae0, 0x28);
    float item_3c4;
    long double fpu_val_7_10 = item_3c4;
    long double f1 = 0.0f;
    fpu_val_7_10 - f1;
    float item_3c0;

    if (*(&((fpu_val_7_10 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_10, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_10 == f1 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double fpu_val_7_11 = item_3c0;
        long double f3_1 = 0.0f;
        fpu_val_7_11 - f3_1;

        if (*(&((fpu_val_7_11 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_11, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_11 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            item_3c4 = 1.0f;
    }

    long double fpu_val_7_12 = item_3c0;
    long double fpu6 = item_3c4;
    long double fpu_val_7_14 = 1.0 / sqrtl(fpu6 * fpu6 + fpu_val_7_12 * fpu_val_7_12);
    float item_3c4_1 = item_3c4 * fpu_val_7_14;
    long double fpu_val_7_15 = fpu_val_7_14 * item_3c0;
    long double fpu_val_6_4 = 0.0f;
    long double fpu_val_5_4 = 0.0f;
    float item_44c = fpu_val_5_4 - fpu_val_7_15;
    long double fpu_val_5_6 = -((fpu_val_5_4 - item_3c4_1));
    long double fpu_val_4_4 = 0.0f;
    float item_414 = g_bcaae8 * fpu_val_4_4 + g_bcaae4 * fpu_val_5_6 + g_bcaae0 * item_44c;
    float item_410 = g_bcaae8;
    float item_40c = g_bcaae4 * fpu_val_7_15 + g_bcaae0 * item_3c4_1 + g_bcaae8 * fpu_val_6_4;
    float item_408 = g_bcaaf4 * fpu_val_4_4 + g_bcaaf0 * fpu_val_5_6 + g_bcaaec * item_44c;
    float item_404 = g_bcaaf4;
    float item_400 = g_bcaaf0 * fpu_val_7_15 + g_bcaaec * item_3c4_1 + g_bcaaf4 * fpu_val_6_4;
    int32_t item_3b8;
    int32_t item_3f0 = item_3b8 + g_bcab04 + 1;
    float item_3fc = g_bcab00 * fpu_val_4_4 + g_bcaafc * fpu_val_5_6 + g_bcaaf8 * item_44c;
    float item_3f8 = g_bcab00;
    long double fpu_val_7_18 =
        fpu_val_7_15 * g_bcaafc + g_bcaaf8 * item_3c4_1 + g_bcab00 * fpu_val_6_4;
    float item_3ec = -(item_46c);
    float item_470 = item_40c * item_46c + item_410 * item_430;
    long double fpu_val_5_17 = item_404 * item_430;
    float item_3b4 = item_414 * item_46c + item_470;
    float item_45c = item_400 * item_46c + fpu_val_5_17;
    float item_3b0 = item_408 * item_46c + item_45c;
    float item_468 = item_3f8 * item_430;
    long double fpu_val_7_19 = fpu_val_7_18 * item_46c;
    float item_444 = item_3fc * item_46c + fpu_val_7_19 + item_468;
    float item_3ac = item_444;
    float item_420 = item_3ec * item_414 + item_470;
    float item_41c = item_3ec * item_408 + item_45c;
    long double fpu_val_6_33 = item_3ec * item_3fc;
    item_3ec = item_420;
    float result_1 = fpu_val_6_33 + fpu_val_7_19 + item_468;
    long double fpu_val_7_21 = item_444;
    long double f2 = 409.600006f;
    fpu_val_7_21 - f2;
    float result = result_1;
    float result_2 = result;
    float item_3e8 = item_41c;
    result = (fpu_val_7_21 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_21, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_21 == f2 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        long double fpu_val_7_22 = result_1;
        long double f4_1 = 409.600006f;
        fpu_val_7_22 - f4_1;
        result = (fpu_val_7_22 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_22, f4_1) ? 1 : 0) << 0xa
            | (fpu_val_7_22 == f4_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
        {
            float item_464;
            Display_CheckCapabilities_15(&item_464, &item_3b4);
            float item_440;
            Display_CheckCapabilities_15(&item_440, &item_3ec);
            item_414 = g_bcabb8;
            item_410 = g_bcabbc;
            long double fpu_val_7_26 = g_bcabc0 + g_bcabb8;
            float item_40c_1 = fpu_val_7_26;
            float item_408_1 = g_bcabbc;
            item_404 = g_bcabb8;
            long double fpu_val_6_39 = g_bcabc4 + g_bcabbc;
            float item_400_1 = fpu_val_6_39;
            float item_3fc_1 = fpu_val_7_26;
            float item_3f8_1 = fpu_val_6_39;
            float item_42c = item_440 - item_464;
            float item_460;
            float item_43c;
            float item_428_1 = item_43c - item_460;
            Sys_CheckHeap_9(&item_42c);
            float item_434_1 = -(item_42c);
            long double fpu_val_7_34 = item_440 - item_464;
            float item_438 = item_428_1;
            float item_468_1 = -1.0f;
            float item_470_2 = 100000.0f;
            float item_45c_1 = -100000.0f;
            float* source_1 = &item_410;
            int32_t i_4 = 4;
            float item_458_1 = fpu_val_7_34 * 0.5f + item_464;
            float item_454_1 = (item_43c - item_460) * 0.5f + item_460;
            int32_t i;

            do
            {
                item_420 = source_1[-1] - item_458_1;
                float item_41c_1 = *source_1 - item_454_1;
                long double fp0_1 = Sys_OpenFileStream_10(&item_420, &item_438);
                long double fpu_val_6_40 = item_468_1;
                fpu_val_6_40 - fp0_1;

                if (*(&((fpu_val_6_40 < fp0_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_40, fp0_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_40 == fp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    item_468_1 = fp0_1;

                long double fp0_2;
                fp0_2 = Sys_OpenFileStream_10(&item_420, &item_42c);
                long double fpu_val_6_41 = item_470_2;
                fpu_val_6_41 - fp0_2;
                result = (fpu_val_6_41 < fp0_2 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_41, fp0_2) ? 1 : 0) << 0xa
                    | (fpu_val_6_41 == fp0_2 ? 1 : 0) << 0xe | 0x3800;

                if (!(*(&result + 1) & 1))
                    item_470_2 = fp0_2;

                long double fpu_val_6_42 = item_45c_1;
                fpu_val_6_42 - fp0_2;
                result = (fpu_val_6_42 < fp0_2 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_42, fp0_2) ? 1 : 0) << 0xa
                    | (fpu_val_6_42 == fp0_2 ? 1 : 0) << 0xe | 0x3800;

                if (*(&result + 1) & 0x41)
                    item_45c_1 = fp0_2;

                source_1 = &source_1[2];
                i = i_4;
                i_4 -= 1;
            } while (i != 1);
            long double fpu_val_7_49 = item_468_1;
            long double f6_1 = 0.0f;
            fpu_val_7_49 - f6_1;
            result = (fpu_val_7_49 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_49, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_7_49 == f6_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 1))
            {
                long double fpu_val_7_51 = item_468_1 * item_438;
                float data_7 = item_42c;
                item_464 = data_7;
                item_440 = data_7;
                void item_3a4;
                float* data_8 = &item_3a4;
                int32_t i_3 = 0xd;
                item_438 = fpu_val_7_51 * 0.0834166706f;
                float item_434_2 = item_468_1 * item_434_1 * 0.0834166706f;
                long double fpu_val_7_58 = item_45c_1 * item_42c * 1.00100005f;
                float item_43c_2 = item_45c_1 * item_428_1 * 1.00100005f;
                item_464 = item_470_2 * item_42c * 1.00100005f;
                long double fpu_val_7_59 = fpu_val_7_58 + item_458_1;
                long double fpu_val_6_53 = item_454_1 + item_43c_2;
                long double fpu_val_5_19 = item_458_1 + item_464;
                long double fpu_val_4_7 = item_454_1 + item_470_2 * item_428_1 * 1.00100005f;
                int32_t i_1;

                do
                {
                    data_8[-1] = fpu_val_5_19;
                    *data_8 = fpu_val_4_7;
                    data_8[8] = fpu_val_7_59;
                    data_8[9] = fpu_val_6_53;
                    fpu_val_5_19 = fpu_val_5_19 + item_438;
                    data_8 = &data_8[0x12];
                    i_1 = i_3;
                    i_3 -= 1;
                    fpu_val_4_7 = fpu_val_4_7 + item_434_2;
                    fpu_val_7_59 = fpu_val_7_59 + item_438;
                    fpu_val_6_53 = fpu_val_6_53 + item_434_2;
                } while (i_1 != 1);
                float item_460_3 = fpu_val_4_7;
                data_8 = g_ba1fdc;
                item_464 = fpu_val_5_19;
                float item_43c_3 = fpu_val_6_53;
                item_440 = fpu_val_7_59;
                item_420 = g_bcabc8 + g_bcabb8;
                float item_41c_2 = g_bcabcc + g_bcabbc;
                result = QTask_DeleteTask_2(context, data_8);

                for (float i_2 = result; i_2; i_2 = result)
                {
                    long double fpu_val_7_64 = g_bcaaf8;
                    long double fpu_val_6_54 = g_bcaafc;
                    long double fpu_val_5_20 = g_bcab00;
                    float* entity_5 = &item_3a4;
                    int32_t j_1 = 0x1a;
                    int32_t j;

                    do
                    {
                        long double fpu_val_4_10 = (entity_5[-1] - item_420) / g_bcab28;
                        long double fpu_val_3_30 = (*entity_5 - item_41c_2) / g_bcab2c;
                        float item_44c_2 =
                            fpu_val_3_30 * g_bcaaec + fpu_val_4_10 * g_bcaae0 + fpu_val_7_64;
                        float item_458_2 = item_44c_2;
                        float item_444_1 =
                            fpu_val_3_30 * g_bcaaf4 + fpu_val_4_10 * g_bcaae8 + fpu_val_5_20;
                        long double fpu_val_4_15 = item_430 / item_444_1;
                        float item_458_3 = fpu_val_4_15 * item_44c_2;
                        float item_454_3 = fpu_val_4_15
                            * (fpu_val_3_30 * g_bcaaf0 + fpu_val_4_10 * g_bcaae4 + fpu_val_6_54);
                        entity_5[2] = item_458_3 * *(i_2 + 0x248) + *(i_2 + 0x254);
                        entity_5[3] = item_454_3 * *(i_2 + 0x248) + *(i_2 + 0x258);
                        entity_5[1] = fpu_val_4_15 * item_444_1 * g_bcab00 + item_454_3 * g_bcaafc
                            + item_458_3 * g_bcaaf8;
                        entity_5[5] = *(i_2 + 0x260);
                        entity_5[6] = *(i_2 + 0x264);
                        entity_5[7] = *(i_2 + 0x268);
                        long double fpu_val_4_20 = entity_5[1];
                        long double f8_1 = item_424;
                        fpu_val_4_20 - f8_1;

                        if (!(*(&((fpu_val_4_20 < f8_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_4_20, f8_1) ? 1 : 0) << 0xa
                            | (fpu_val_4_20 == f8_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1))
                        {
                            long double fpu_val_4_26 =
                                (item_424 - 1.0f / entity_5[1] * item_424 * item_46c) * item_3e0;
                            float item_470_3 = fpu_val_4_26;
                            entity_5[4] = fpu_val_4_26;
                            long double fpu_val_4_27 = item_470_3;
                            long double f9_1 = 0.0f;
                            fpu_val_4_27 - f9_1;

                            if (!(*(&((fpu_val_4_27 < f9_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_4_27, f9_1) ? 1 : 0) << 0xa
                                | (fpu_val_4_27 == f9_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1))
                            {
                                long double fpu_val_4_28 = item_470_3;
                                long double f10_1 = 0.999000013f;
                                fpu_val_4_28 - f10_1;

                                if (!(*(&((fpu_val_4_28 < f10_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_4_28, f10_1) ? 1 : 0) << 0xa
                                        | (fpu_val_4_28 == f10_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41))
                                    entity_5[4] = 0x3f7fbe77;
                            }
                            else
                                entity_5[4] = 0;
                        }
                        else
                            entity_5[4] = 0x3f800000;

                        long double fpu_val_4_30 = entity_5[4] * *(i_2 + 0x25c);
                        entity_5 = &entity_5[9];
                        j = j_1;
                        j_1 -= 1;
                        entity_5[-5] = fpu_val_4_30;
                        entity_5[-8] = entity_5[-8] * 16.0f;
                    } while (j != 1);
                    bool flag_2_1 = !*(i_2 + 0x44);
                    void item_3a8;
                    item_404 = &item_3a8;
                    item_410 = 12.5f;
                    item_414 = 0.0f;
                    int32_t item_40c_2 = 0xffffffff;
                    int32_t item_408_2 = 0x1a;

                    if (flag_2_1)
                        g_a84a50 = 0;
                    else
                        g_a84a50 = i_2 + 0x20;

                    (*((g_a84a54 << 2) + &g_a94e84))(&item_414);
                    result = QTask_TriggerEvent_2(i_2, g_ba1fdc);
                }
            }
        }
    }

    return result;
}
