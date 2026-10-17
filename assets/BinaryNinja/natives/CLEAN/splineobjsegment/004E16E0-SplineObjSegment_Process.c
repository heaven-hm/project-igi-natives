// IGI native provenance: SplineObjSegment_Process - 0x004E16E0 - CFG score 95.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E16E0-SplineObjSegment_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SplineObjSegment_Process.h"
int32_t* SplineObjSegment_Process(float context, int32_t* param_2)

{
    char item_4a1 = 0;
    int32_t* result_1 = param_2[8];
    int32_t* result = *(context + 0x6c);
    double* item_448 = *param_2;
    double* item_470 = param_2[1];

    if (result)
    {
        int32_t entity_1 = *(context + 0xa4);

        if (entity_1 != 0xffffffff)
        {
            void* data_1 = result[entity_1];
            void* entity_2 = *(*(data_1 + 0xc) + 0xc);
            result = *(entity_2 + 0x28);

            if (!result)
            {
                int32_t temp_1 = *(entity_2 + 0x2c);
                int32_t data_4 = param_2[5] << 5;
                result = data_4 + temp_1;
                int32_t* result_2 = result;

                if (data_4 != -(temp_1) && *result)
                {
                    int32_t entity_3 = result[5];
                    char data_5 = param_2[3];

                    if (data_5 == 0xff)
                    {
                    label_4e17b5:
                        result = param_2[2];
                        int32_t* result_3 = nullptr;

                        if (result > 0)
                        {
                            while (true)
                            {
                                result = result_1;
                                bool item_531_1;

                                if (!result[0x16])
                                    item_531_1 = false;
                                else
                                    item_531_1 = result[0x13];

                                long double fpu_val_7_2 = *(context + 0x20) - *(context + 0xf4);
                                result = result[0x16];
                                char item_519_1 = result;
                                char item_505_1 = 0;
                                long double f2_1 = *item_448;
                                fpu_val_7_2 - f2_1;
                                result = (fpu_val_7_2 < f2_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_2, f2_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_2 == f2_1 ? 1 : 0) << 0xe | 0x3800;
                                double* entity_7;

                                if (*(&result + 1) & 0x41)
                                    entity_7 = item_470;
                                else
                                {
                                    entity_7 = item_470;
                                    long double f3_1 = *entity_7;
                                    fpu_val_7_2 - f3_1;
                                    result = (fpu_val_7_2 < f3_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_2, f3_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_2 == f3_1 ? 1 : 0) << 0xe;

                                    if (!(*(&result + 1) & 0x41))
                                        break;
                                }

                                long double fpu_val_7_5 = *(context + 0xf4) + *(context + 0x20);
                                long double f4_1 = *item_448;
                                fpu_val_7_5 - f4_1;
                                result = (fpu_val_7_5 < f4_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_5, f4_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_5 == f4_1 ? 1 : 0) << 0xe | 0x3800;

                                if (*(&result + 1) & 1)
                                {
                                    long double f5_1 = *entity_7;
                                    fpu_val_7_5 - f5_1;
                                    result = (fpu_val_7_5 < f5_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_5, f5_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_5 == f5_1 ? 1 : 0) << 0xe;

                                    if (*(&result + 1) & 1)
                                        break;
                                }

                                long double fpu_val_7_8 = *(context + 0x28) - *(context + 0xf4);
                                long double f6_1 = item_448[1];
                                fpu_val_7_8 - f6_1;
                                result = (fpu_val_7_8 < f6_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_8, f6_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_8 == f6_1 ? 1 : 0) << 0xe | 0x3800;

                                if (!(*(&result + 1) & 0x41))
                                {
                                    long double f7_1 = entity_7[1];
                                    fpu_val_7_8 - f7_1;
                                    result = (fpu_val_7_8 < f7_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_8, f7_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_8 == f7_1 ? 1 : 0) << 0xe;

                                    if (!(*(&result + 1) & 0x41))
                                        break;
                                }

                                long double fpu_val_7_11 = *(context + 0xf4) + *(context + 0x28);
                                long double f8_1 = item_448[1];
                                fpu_val_7_11 - f8_1;
                                result = (fpu_val_7_11 < f8_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_11, f8_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_11 == f8_1 ? 1 : 0) << 0xe | 0x3800;

                                if (*(&result + 1) & 1)
                                {
                                    long double f9_1 = entity_7[1];
                                    fpu_val_7_11 - f9_1;
                                    result = (fpu_val_7_11 < f9_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_11, f9_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_11 == f9_1 ? 1 : 0) << 0xe;

                                    if (*(&result + 1) & 1)
                                        break;
                                }

                                long double fpu_val_7_14 = *(context + 0x30) - *(context + 0xf4);
                                long double f10_1 = item_448[2];
                                fpu_val_7_14 - f10_1;
                                result = (fpu_val_7_14 < f10_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_14, f10_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_14 == f10_1 ? 1 : 0) << 0xe | 0x3800;

                                if (!(*(&result + 1) & 0x41))
                                {
                                    long double f11_1 = entity_7[2];
                                    fpu_val_7_14 - f11_1;
                                    result = (fpu_val_7_14 < f11_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_14, f11_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_14 == f11_1 ? 1 : 0) << 0xe;

                                    if (!(*(&result + 1) & 0x41))
                                        break;
                                }

                                long double fpu_val_7_17 = *(context + 0xf4) + *(context + 0x30);
                                long double f12_1 = item_448[2];
                                fpu_val_7_17 - f12_1;
                                result = (fpu_val_7_17 < f12_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_17, f12_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_17 == f12_1 ? 1 : 0) << 0xe | 0x3800;

                                if (*(&result + 1) & 1)
                                {
                                    long double f13_1 = entity_7[2];
                                    fpu_val_7_17 - f13_1;
                                    result = (fpu_val_7_17 < f13_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_17, f13_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_17 == f13_1 ? 1 : 0) << 0xe;

                                    if (*(&result + 1) & 1)
                                        break;
                                }

                                int32_t saved_target;
                                double item_480;
                                int16_t* item_410;

                                if (*(context + 0x5b4))
                                {
                                    char item_50d_2 = 1;
                                    int32_t item_518_2 = 0;
                                    float* source_6 = result_2[7];
                                    float* item_4cc_3 = source_6;
                                    int32_t item_198[0x64];
                                    item_198[0] = source_6;
                                    long double fpu_val_7_273 = *item_448 - *(context + 0x20);
                                    long double fpu_val_6_125 = item_448[1] - *(context + 0x28);
                                    long double fpu_val_5_51 = item_448[2] - *(context + 0x30);
                                    float item_3d0_1 = fpu_val_7_273 * *(context + 0x520)
                                        + fpu_val_5_51 * *(context + 0x528)
                                        + fpu_val_6_125 * *(context + 0x524);
                                    float item_528_2 = item_3d0_1;
                                    float item_3cc_1 = fpu_val_7_273 * *(context + 0x52c)
                                        + fpu_val_5_51 * *(context + 0x534)
                                        + fpu_val_6_125 * *(context + 0x530);
                                    float item_3c8_1 = fpu_val_6_125 * *(context + 0x53c)
                                        + fpu_val_7_273 * *(context + 0x538)
                                        + fpu_val_5_51 * *(context + 0x540);
                                    long double fpu_val_7_279 =
                                        (*(context + 0xfc) + *(context + 0x100)) * 0.5f;
                                    float item_528_3 = fpu_val_7_279 + item_3d0_1;
                                    long double fpu_val_6_131 = *item_470 - *(context + 0x20);
                                    long double fpu_val_5_57 = item_470[1] - *(context + 0x28);
                                    long double fpu_val_4_39 = item_470[2] - *(context + 0x30);
                                    float item_3e8_1 = fpu_val_6_131 * *(context + 0x520)
                                        + fpu_val_4_39 * *(context + 0x528)
                                        + fpu_val_5_57 * *(context + 0x524);
                                    float item_490_2 = item_3e8_1;
                                    float item_3e4_1 = fpu_val_6_131 * *(context + 0x52c)
                                        + fpu_val_4_39 * *(context + 0x534)
                                        + fpu_val_5_57 * *(context + 0x530);
                                    float item_3e0_1 = fpu_val_6_131 * *(context + 0x538)
                                        + fpu_val_4_39 * *(context + 0x540)
                                        + fpu_val_5_57 * *(context + 0x53c);
                                    float item_490_3 = fpu_val_7_279 + item_3e8_1;
                                    float item_444_3 = Sys_DispatchOpcode_11(item_448, item_470);
                                    int16_t data_72;
                                    data_72 = item_519_1;
                                    float item_4fc_3 = item_490_3;
                                    float item_4f8_3 = item_3e4_1;
                                    long double fpu_val_7_291;

                                    if (!data_72)
                                        fpu_val_7_291 = item_3e0_1;
                                    else
                                    {
                                        long double fpu_val_7_283 = *(result_1 + 8) - *(context + 0x20);
                                        long double fpu_val_6_137 =
                                            *(result_1 + 0x10) - *(context + 0x28);
                                        long double fpu_val_5_60 = *(result_1 + 0x18) - *(context + 0x30);
                                        float item_3b8_1 = fpu_val_5_60 * *(context + 0x88)
                                            + fpu_val_6_137 * *(context + 0x7c)
                                            + fpu_val_7_283 * *(context + 0x70);
                                        float item_4fc_4 = item_3b8_1;
                                        item_4fc_3 = item_3b8_1 / *(context + 0x98);
                                        item_4f8_3 = (fpu_val_5_60 * *(context + 0x8c)
                                            + fpu_val_6_137 * *(context + 0x80)
                                            + fpu_val_7_283 * *(context + 0x74)) / *(context + 0x98);
                                        fpu_val_7_291 = (fpu_val_5_60 * *(context + 0x90)
                                            + fpu_val_6_137 * *(context + 0x84)
                                            + fpu_val_7_283 * *(context + 0x78)) / *(context + 0x98);
                                        long double fpu_val_6_143 = item_4f8_3 - item_3cc_1;
                                        long double fpu_val_5_65 = item_4fc_3 - item_528_3;
                                        long double fpu_val_4_53 = fpu_val_7_291 - item_3c8_1;
                                        item_480 = sqrtl(fpu_val_5_65 * fpu_val_5_65
                                            + fpu_val_6_143 * fpu_val_6_143 + fpu_val_4_53 * fpu_val_4_53);
                                    }

                                    long double fpu_val_6_145 = item_528_3;
                                    long double f15_1 = item_4fc_3;
                                    fpu_val_6_145 - f15_1;
                                    long double fpu_val_6_146;

                                    fpu_val_6_146 = !(*(&((fpu_val_6_145 < f15_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_145, f15_1) ? 1 : 0) << 0xa
                                        | (fpu_val_6_145 == f15_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                        ? item_4fc_3 : item_528_3;

                                    float item_4e4_2 = fpu_val_6_146 - 0.100000001f;
                                    long double fpu_val_6_148 = item_3cc_1;
                                    long double f17_1 = item_4f8_3;
                                    fpu_val_6_148 - f17_1;
                                    long double fpu_val_6_149;

                                    fpu_val_6_149 = !(*(&((fpu_val_6_148 < f17_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_148, f17_1) ? 1 : 0) << 0xa
                                        | (fpu_val_6_148 == f17_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                        ? item_4f8_3 : item_3cc_1;

                                    float item_4e0_2 = fpu_val_6_149 - 0.100000001f;
                                    long double fpu_val_6_151 = item_3c8_1;
                                    fpu_val_6_151 - fpu_val_7_291;
                                    long double fpu_val_6_152;

                                    fpu_val_6_152 = !(*(&((fpu_val_6_151 < fpu_val_7_291 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_151, fpu_val_7_291) ? 1 : 0) << 0xa
                                        | (fpu_val_6_151 == fpu_val_7_291 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                        ? fpu_val_7_291 : item_3c8_1;

                                    float item_4dc_2 = fpu_val_6_152 - 0.100000001f;
                                    long double fpu_val_6_154 = item_528_3;
                                    long double f20_1 = item_4fc_3;
                                    fpu_val_6_154 - f20_1;
                                    long double fpu_val_6_155;

                                    fpu_val_6_155 = *(&((fpu_val_6_154 < f20_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_154, f20_1) ? 1 : 0) << 0xa
                                        | (fpu_val_6_154 == f20_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41
                                        ? item_4fc_3 : item_528_3;

                                    float item_4f0_2 = fpu_val_6_155 + 0.100000001f;
                                    long double fpu_val_6_157 = item_3cc_1;
                                    long double f22_1 = item_4f8_3;
                                    fpu_val_6_157 - f22_1;
                                    long double fpu_val_6_158;

                                    fpu_val_6_158 = *(&((fpu_val_6_157 < f22_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_157, f22_1) ? 1 : 0) << 0xa
                                        | (fpu_val_6_157 == f22_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41
                                        ? item_4f8_3 : item_3cc_1;

                                    float item_4ec_2 = fpu_val_6_158 + 0.100000001f;
                                    long double fpu_val_6_160 = item_3c8_1;
                                    fpu_val_6_160 - fpu_val_7_291;
                                    data_72 = (fpu_val_6_160 < fpu_val_7_291 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_160, fpu_val_7_291) ? 1 : 0) << 0xa
                                        | (fpu_val_6_160 == fpu_val_7_291 ? 1 : 0) << 0xe | 0x3800;

                                    if (!(*(&data_72 + 1) & 0x41))
                                        fpu_val_7_291 = item_3c8_1;

                                    float item_4fc_5 = item_490_3;
                                    float item_4f4_6 = item_3e0_1;
                                    float item_4f8_5 = item_3e4_1;
                                    float item_4e8_2 = fpu_val_7_291 + 0.100000001f;
                                    long double fpu_val_7_295 = item_3e4_1 - item_3cc_1;
                                    double item_440_2 = fpu_val_7_295;
                                    long double fpu_val_6_163 = item_490_3 - item_528_3;
                                    long double fpu_val_4_56 = item_3e0_1 - item_3c8_1;
                                    float item_4b0_5 = fpu_val_4_56;
                                    double item_370 = 1.0 / (fpu_val_4_56 * fpu_val_4_56
                                        + fpu_val_6_163 * fpu_val_6_163 + item_440_2 * item_440_2);
                                    float item_4c8_2 = fpu_val_6_163;
                                    float item_4c4_2 = fpu_val_7_295;
                                    long double fpu_val_7_296 = item_4c4_2;
                                    long double f24_1 = 0.0f;
                                    fpu_val_7_296 - f24_1;

                                    if (!(*(&((fpu_val_7_296 < f24_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_296, f24_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_296 == f24_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        float item_4b0_7 = item_4c4_2;
                                    else
                                        float item_4b0_6 = -(item_4c4_2);

                                    long double fpu_val_7_299 = item_4c8_2;
                                    long double f25_1 = 0.0f;
                                    fpu_val_7_299 - f25_1;

                                    if (!(*(&((fpu_val_7_299 < f25_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_299, f25_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_299 == f25_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        float item_4b0_9 = item_4c8_2;
                                    else
                                        float item_4b0_8 = -(item_4c8_2);

                                    if (result_2[3])
                                    {
                                        while (true)
                                        {
                                            int32_t temp_38 = item_518_2;

                                            while (true)
                                            {
                                                int16_t i;
                                                i = item_50d_2;

                                                if (!i)
                                                {
                                                    int16_t source_7 = *(source_6 + 0x16);

                                                    if (!source_7)
                                                    {
                                                        int32_t f28_1 = temp_38;
                                                        temp_38 -= 1;
                                                        item_518_2 = temp_38;

                                                        if (f28_1 - 1 >= 0)
                                                        {
                                                            source_6 = item_198[temp_38];
                                                            continue;
                                                        }

                                                        i = item_505_1;

                                                        if (i)
                                                        {
                                                            float item_3f4_1 = item_4fc_5;
                                                            long double fpu_val_7_478 = item_4fc_5
                                                                - (*(context + 0xfc) + *(context + 0x100))
                                                                * 0.5f;
                                                            float item_330_1 =
                                                                item_4f4_6 * *(context + 0x84)
                                                                + item_4f8_5 * *(context + 0x80)
                                                                + fpu_val_7_478 * *(context + 0x7c);
                                                            long double fpu_val_7_480 =
                                                                item_4f4_6 * *(context + 0x90)
                                                                + item_4f8_5 * *(context + 0x8c)
                                                                + fpu_val_7_478 * *(context + 0x88);
                                                            long double fpu_val_6_278 =
                                                                item_4f4_6 * *(context + 0x78)
                                                                + item_4f8_5 * *(context + 0x74)
                                                                + fpu_val_7_478 * *(context + 0x70)
                                                                + *(context + 0x20);
                                                            double item_358 = fpu_val_6_278;
                                                            double item_350_1 =
                                                                item_330_1 + *(context + 0x28);
                                                            double item_348_1 =
                                                                fpu_val_7_480 + *(context + 0x30);
                                                            item_480 = Sys_DispatchOpcode_11(item_448, &item_358);
                                                            long double fpu_val_7_483;
                                                            long double f38_1;

                                                            if (result_1[0x16])
                                                            {
                                                                fpu_val_7_483 = item_480;
                                                                f38_1 = *(result_1 + 0x60);
                                                                fpu_val_7_483 - f38_1;
                                                            }

                                                            if (!result_1[0x16] || *(&(
                                                                (fpu_val_7_483 < f38_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(fpu_val_7_483, f38_1) ? 1 : 0)
                                                                << 0xa
                                                                | (fpu_val_7_483 == f38_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1)
                                                            {
                                                                int32_t data_98 = 0;
                                                                int32_t entity_51 = 0;
                                                                data_98 = *item_410;
                                                                entity_51 = item_410[1];
                                                                int32_t temp_48 = 0;
                                                                temp_48 = item_410[2];
                                                                float* data_100 = (data_98 << 4) + entity_3;
                                                                float* entity_53 = (entity_51 << 4) + entity_3;
                                                                float* temp_50 = (temp_48 << 4) + entity_3;
                                                                int32_t source_10 = 0;
                                                                source_10 = item_410[3];
                                                                int16_t source_13 =
                                                                    *(result_2[6] + source_10 * 0xc + 8);
                                                                int32_t source_15;

                                                                if (source_13 != 0xffff)
                                                                    source_15 = *(*(context + 0x68)
                                                                        + (source_13 << 2) + 0xd3c);
                                                                else
                                                                    source_15 = *(*(context + 0x68) + 0xd40);

                                                                long double fpu_val_7_485 =
                                                                    *temp_50 - *data_100;
                                                                long double fpu_val_6_282 =
                                                                    temp_50[1] - data_100[1];
                                                                long double fpu_val_5_112 =
                                                                    temp_50[2] - data_100[2];
                                                                float item_408_1 = *entity_53 - *data_100;
                                                                float item_404_1 =
                                                                    entity_53[1] - data_100[1];
                                                                float item_400_1 =
                                                                    entity_53[2] - data_100[2];
                                                                float item_37c_1 =
                                                                    fpu_val_5_112 * *(context + 0x78)
                                                                    + fpu_val_7_485 * *(context + 0x70)
                                                                    + fpu_val_6_282 * *(context + 0x74);
                                                                float item_378_1 =
                                                                    fpu_val_5_112 * *(context + 0x84)
                                                                    + fpu_val_7_485 * *(context + 0x7c)
                                                                    + fpu_val_6_282 * *(context + 0x80);
                                                                long double fpu_val_7_488 =
                                                                    fpu_val_5_112 * *(context + 0x90)
                                                                    + fpu_val_7_485 * *(context + 0x88)
                                                                    + fpu_val_6_282 * *(context + 0x8c);
                                                                float item_3ac_1 =
                                                                    item_400_1 * *(context + 0x78)
                                                                    + item_408_1 * *(context + 0x70)
                                                                    + item_404_1 * *(context + 0x74);
                                                                float item_3a8_1 =
                                                                    item_400_1 * *(context + 0x84)
                                                                    + item_408_1 * *(context + 0x7c)
                                                                    + item_404_1 * *(context + 0x80);
                                                                long double fpu_val_6_295 =
                                                                    item_400_1 * *(context + 0x90)
                                                                    + item_408_1 * *(context + 0x88)
                                                                    + item_404_1 * *(context + 0x8c);
                                                                result_1[0xe] = fpu_val_6_295 * item_378_1
                                                                    - item_3a8_1 * fpu_val_7_488;
                                                                result_1[0xf] = -((
                                                                    fpu_val_6_295 * item_37c_1
                                                                    - item_3ac_1 * fpu_val_7_488));
                                                                result_1[0x10] = item_3a8_1 * item_37c_1
                                                                    - item_3ac_1 * item_378_1;

                                                                if (*(context + 0x5b5))
                                                                {
                                                                    result_1[0xe] = -(result_1[0xe]);
                                                                    result_1[0xf] = -(result_1[0xf]);
                                                                    result_1[0x10] = -(result_1[0x10]);
                                                                }

                                                                void** result_4 = result_1;
                                                                long double fpu_val_7_499 = item_358;
                                                                int32_t* temp_53 = &result_4[0xb];
                                                                *temp_53 = result_1[0xe];
                                                                int32_t entity_55 = result_1[0x10];
                                                                temp_53[1] = result_1[0xf];
                                                                temp_53[2] = entity_55;
                                                                result_4[8] =
                                                                    fpu_val_7_499 - *(context + 0x20);
                                                                result_4[9] =
                                                                    item_350_1 - *(context + 0x28);
                                                                long double fpu_val_7_504 =
                                                                    item_348_1 - *(context + 0x30);
                                                                int32_t entity_56 = memcpy(
                                                                    &result_4[2], &item_358, 0x18);
                                                                result_4[0xa] = fpu_val_7_504;
                                                                entity_56 = item_531_1;
                                                                temp_53 = entity_56;
                                                                *result_4 = context;
                                                                char f84_1 = temp_53;
                                                                temp_53 = -(temp_53);
                                                                char f85_1 = entity_56;
                                                                entity_56 = -(entity_56);
                                                                result_4[0x13] =
                                                                    (temp_53 - temp_53) & source_15;
                                                                result_4[0x14] =
                                                                    ~(entity_56 - entity_56) & source_15;
                                                                result_4[0x15] = 1;
                                                                result_4[0x16] = 1;
                                                                result_4[0x18] = item_480;
                                                                result_4[0x19] = *(&item_480 + 4);
                                                                result_4[0x12] =
                                                                    (item_410 - result_2[4]) >> 3;
                                                            }
                                                        }

                                                        goto label_4e3f44;
                                                    }
                                                    else
                                                    {
                                                        uint32_t data_79 = source_7 * 3;
                                                        long double fpu_val_7_303 =
                                                            item_4cc_3[data_79 * 2] - item_528_3;
                                                        source_6 = &item_4cc_3[data_79 * 2];
                                                        long double fpu_val_6_165 =
                                                            item_4cc_3[data_79 * 2 + 1] - item_3cc_1;
                                                        long double fpu_val_5_71 =
                                                            source_6[2] - item_3c8_1;
                                                        item_198[temp_38] = source_6;
                                                        double item_4a0_5 = fpu_val_6_165;
                                                        double item_440_3 = fpu_val_7_303;
                                                        double item_530_5 = fpu_val_5_71;
                                                        long double fpu_val_7_306 =
                                                            fpu_val_6_165 * item_4c4_2
                                                            + fpu_val_7_303 * item_4c8_2
                                                            + fpu_val_5_71 * item_4b0_5;
                                                        float item_514_4 = source_6[3];
                                                        long double fpu_val_7_311 =
                                                            item_440_3 * item_440_3
                                                            + item_4a0_5 * item_4a0_5
                                                            + item_530_5 * item_530_5
                                                            - fpu_val_7_306 * fpu_val_7_306 * item_370;
                                                        long double fpu_val_6_178 =
                                                            item_514_4 * item_514_4;
                                                        fpu_val_6_178 - fpu_val_7_311;

                                                        if (*(&(
                                                                (fpu_val_6_178 < fpu_val_7_311 ? 1 : 0) << 8
                                                                | (FCMP_UO(fpu_val_6_178, fpu_val_7_311) ? 1
                                                                : 0) << 0xa
                                                                | (fpu_val_6_178 == fpu_val_7_311 ? 1 : 0)
                                                                << 0xe) + 1) & 1)
                                                            continue;
                                                        else
                                                        {
                                                            long double fpu_val_7_313 =
                                                                *source_6 + source_6[3];
                                                            long double f29_1 = item_4e4_2;
                                                            fpu_val_7_313 - f29_1;

                                                            if (*(&(
                                                                    (fpu_val_7_313 < f29_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(fpu_val_7_313, f29_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (fpu_val_7_313 == f29_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 1)
                                                                continue;
                                                            else
                                                            {
                                                                long double fpu_val_7_315 =
                                                                    source_6[1] + source_6[3];
                                                                long double f33_1 = item_4e0_2;
                                                                fpu_val_7_315 - f33_1;

                                                                if (*(&(
                                                                        (fpu_val_7_315 < f33_1 ? 1 : 0) << 8 | (
                                                                        FCMP_UO(fpu_val_7_315, f33_1) ? 1 : 0)
                                                                        << 0xa
                                                                        | (fpu_val_7_315 == f33_1 ? 1 : 0)
                                                                        << 0xe) + 1) & 1)
                                                                    continue;
                                                                else
                                                                {
                                                                    long double fpu_val_7_317 =
                                                                        source_6[2] + source_6[3];
                                                                    long double f39_1 = item_4dc_2;
                                                                    fpu_val_7_317 - f39_1;

                                                                    if (*(&(
                                                                            (fpu_val_7_317 < f39_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(fpu_val_7_317, f39_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (fpu_val_7_317 == f39_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 1)
                                                                        continue;
                                                                    else
                                                                    {
                                                                        long double fpu_val_7_319 =
                                                                            *source_6 - source_6[3];
                                                                        long double f46_1 = item_4f0_2;
                                                                        fpu_val_7_319 - f46_1;

                                                                        if (!(*(&(
                                                                                (fpu_val_7_319 < f46_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(fpu_val_7_319, f46_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (fpu_val_7_319 == f46_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41))
                                                                            continue;
                                                                        else
                                                                        {
                                                                            long double fpu_val_7_321 =
                                                                                source_6[1] - source_6[3];
                                                                            long double f55_1 = item_4ec_2;
                                                                            fpu_val_7_321 - f55_1;

                                                                            if (!(*(&(
                                                                                    (fpu_val_7_321 < f55_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(fpu_val_7_321, f55_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (fpu_val_7_321 == f55_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41))
                                                                                continue;
                                                                            else
                                                                            {
                                                                                long double fpu_val_7_323 =
                                                                                    source_6[2] - source_6[3];
                                                                                long double f64_1 = item_4e8_2;
                                                                                fpu_val_7_323 - f64_1;

                                                                                if (!(*(&(
                                                                                        (fpu_val_7_323 < f64_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(fpu_val_7_323, f64_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (fpu_val_7_323 == f64_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 0x41))
                                                                                    continue;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                i = source_6[5];
                                                item_50d_2 = 0;

                                                if (i)
                                                {
                                                    float** entity_39 = &(&saved_target)[temp_38 + 0xea];

                                                    do
                                                    {
                                                        entity_39 = &entity_39[1];
                                                        temp_38 += 1;
                                                        uint32_t data_82 = i * 3;
                                                        long double fpu_val_7_325 =
                                                            item_4cc_3[data_82 * 2] - item_528_3;
                                                        source_6 = &item_4cc_3[data_82 * 2];
                                                        long double fpu_val_6_180 =
                                                            item_4cc_3[data_82 * 2 + 1] - item_3cc_1;
                                                        long double fpu_val_5_84 =
                                                            source_6[2] - item_3c8_1;
                                                        *entity_39 = source_6;
                                                        double item_530_6 = fpu_val_5_84;
                                                        double item_4a0_6 = fpu_val_6_180;
                                                        double item_440_4 = fpu_val_7_325;
                                                        long double fpu_val_7_327 =
                                                            fpu_val_5_84 * item_4b0_5
                                                            + fpu_val_6_180 * item_4c4_2
                                                            + fpu_val_7_325 * item_4c8_2;
                                                        float item_514_5 = source_6[3];
                                                        long double fpu_val_7_332 =
                                                            item_440_4 * item_440_4
                                                            + item_4a0_6 * item_4a0_6
                                                            + item_530_6 * item_530_6
                                                            - fpu_val_7_327 * fpu_val_7_327 * item_370;
                                                        long double fpu_val_6_195 =
                                                            item_514_5 * item_514_5;
                                                        fpu_val_6_195 - fpu_val_7_332;
                                                        i = (fpu_val_6_195 < fpu_val_7_332 ? 1 : 0) << 8
                                                            | (FCMP_UO(fpu_val_6_195, fpu_val_7_332) ? 1
                                                            : 0) << 0xa
                                                            | (fpu_val_6_195 == fpu_val_7_332 ? 1 : 0)
                                                            << 0xe;

                                                        if (*(&i + 1) & 1)
                                                            break;

                                                        long double fpu_val_7_334 = *source_6 + source_6[3];
                                                        long double f32_1 = item_4e4_2;
                                                        fpu_val_7_334 - f32_1;
                                                        i = (fpu_val_7_334 < f32_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(fpu_val_7_334, f32_1) ? 1 : 0)
                                                            << 0xa | (fpu_val_7_334 == f32_1 ? 1 : 0)
                                                            << 0xe;

                                                        if (*(&i + 1) & 1)
                                                            break;

                                                        long double fpu_val_7_336 =
                                                            source_6[1] + source_6[3];
                                                        long double f37_1 = item_4e0_2;
                                                        fpu_val_7_336 - f37_1;
                                                        i = (fpu_val_7_336 < f37_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(fpu_val_7_336, f37_1) ? 1 : 0)
                                                            << 0xa | (fpu_val_7_336 == f37_1 ? 1 : 0)
                                                            << 0xe;

                                                        if (*(&i + 1) & 1)
                                                            break;

                                                        long double fpu_val_7_338 =
                                                            source_6[2] + source_6[3];
                                                        long double f45_1 = item_4dc_2;
                                                        fpu_val_7_338 - f45_1;
                                                        i = (fpu_val_7_338 < f45_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(fpu_val_7_338, f45_1) ? 1 : 0)
                                                            << 0xa | (fpu_val_7_338 == f45_1 ? 1 : 0)
                                                            << 0xe;

                                                        if (*(&i + 1) & 1)
                                                            break;

                                                        long double fpu_val_7_340 = *source_6 - source_6[3];
                                                        long double f54_1 = item_4f0_2;
                                                        fpu_val_7_340 - f54_1;
                                                        i = (fpu_val_7_340 < f54_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(fpu_val_7_340, f54_1) ? 1 : 0)
                                                            << 0xa | (fpu_val_7_340 == f54_1 ? 1 : 0)
                                                            << 0xe;

                                                        if (!(*(&i + 1) & 0x41))
                                                            break;

                                                        long double fpu_val_7_342 =
                                                            source_6[1] - source_6[3];
                                                        long double f63_1 = item_4ec_2;
                                                        fpu_val_7_342 - f63_1;
                                                        i = (fpu_val_7_342 < f63_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(fpu_val_7_342, f63_1) ? 1 : 0)
                                                            << 0xa | (fpu_val_7_342 == f63_1 ? 1 : 0)
                                                            << 0xe;

                                                        if (!(*(&i + 1) & 0x41))
                                                            break;

                                                        long double fpu_val_7_344 =
                                                            source_6[2] - source_6[3];
                                                        long double f73_1 = item_4e8_2;
                                                        fpu_val_7_344 - f73_1;
                                                        i = (fpu_val_7_344 < f73_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(fpu_val_7_344, f73_1) ? 1 : 0)
                                                            << 0xa | (fpu_val_7_344 == f73_1 ? 1 : 0)
                                                            << 0xe;

                                                        if (!(*(&i + 1) & 0x41))
                                                            break;

                                                        i = source_6[5];
                                                    } while (i);

                                                    item_518_2 = temp_38;
                                                }

                                                int16_t entity_38 = *(source_6 + 0x12);

                                                if (entity_38)
                                                {
                                                    int32_t data_78 = 0;
                                                    data_78 = source_6[4];
                                                    int32_t item_4b0_10 = data_78;
                                                    int16_t* dest_17 = result_2[4] + (data_78 << 3);
                                                    int16_t* item_474_2 = dest_17;

                                                    if (data_78 < entity_38 + data_78)
                                                    {
                                                        bool flag_10_1;

                                                        do
                                                        {
                                                            int32_t entity_41 = 0;
                                                            entity_41 = *dest_17;
                                                            int32_t temp_39 = 0;
                                                            temp_39 = dest_17[1];
                                                            long double fpu_val_7_345 = item_4e4_2;
                                                            int32_t entity_42 = entity_41 << 4;
                                                            long double f31_1 =
                                                                *(entity_42 + entity_3);
                                                            fpu_val_7_345 - f31_1;
                                                            float* entity_43 = entity_42 + entity_3;
                                                            float* temp_41 = (temp_39 << 4) + entity_3;
                                                            int32_t data_84 = 0;
                                                            data_84 = dest_17[2];
                                                            float* dest_20 = (data_84 << 4) + entity_3;

                                                            if (*(&(
                                                                (fpu_val_7_345 < f31_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(fpu_val_7_345, f31_1) ? 1 : 0)
                                                                << 0xa
                                                                | (fpu_val_7_345 == f31_1 ? 1 : 0)
                                                                << 0xe) + 1) & 0x41)
                                                            {
                                                            label_4e3271:
                                                                long double fpu_val_7_348 = item_4e0_2;
                                                                long double f35_1 = entity_43[1];
                                                                fpu_val_7_348 - f35_1;

                                                                if (*(&(
                                                                    (fpu_val_7_348 < f35_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(fpu_val_7_348, f35_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (fpu_val_7_348 == f35_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 0x41)
                                                                {
                                                                label_4e329f:
                                                                    long double fpu_val_7_351 = item_4dc_2;
                                                                    long double f42_1 = entity_43[2];
                                                                    fpu_val_7_351 - f42_1;

                                                                    if (*(&(
                                                                        (fpu_val_7_351 < f42_1 ? 1 : 0) << 8 | (
                                                                        FCMP_UO(fpu_val_7_351, f42_1) ? 1 : 0)
                                                                        << 0xa
                                                                        | (fpu_val_7_351 == f42_1 ? 1 : 0)
                                                                        << 0xe) + 1) & 0x41)
                                                                    {
                                                                    label_4e32cd:
                                                                        long double fpu_val_7_354 = item_4f0_2;
                                                                        long double f51_1 = *entity_43;
                                                                        fpu_val_7_354 - f51_1;

                                                                        if (!(*(&(
                                                                            (fpu_val_7_354 < f51_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(fpu_val_7_354, f51_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (fpu_val_7_354 == f51_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 1))
                                                                        {
                                                                        label_4e32f8:
                                                                            long double fpu_val_7_357 = item_4ec_2;
                                                                            long double f60_1 = entity_43[1];
                                                                            fpu_val_7_357 - f60_1;

                                                                            if (!(*(&(
                                                                                (fpu_val_7_357 < f60_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(fpu_val_7_357, f60_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (fpu_val_7_357 == f60_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 1))
                                                                            {
                                                                            label_4e3326:
                                                                                long double fpu_val_7_360 = item_4e8_2;
                                                                                long double f70_1 = entity_43[2];
                                                                                fpu_val_7_360 - f70_1;

                                                                                if (!(*(&(
                                                                                    (fpu_val_7_360 < f70_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(fpu_val_7_360, f70_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (fpu_val_7_360 == f70_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 1))
                                                                                {
                                                                                label_4e3358:
                                                                                    float item_4bc_1 = *dest_20 - *entity_43;
                                                                                    float item_4b8_1 = dest_20[1] - entity_43[1];
                                                                                    float item_4b4_1 = dest_20[2] - entity_43[2];
                                                                                    float item_42c_1 = *temp_41 - *entity_43;
                                                                                    float item_428_1 = temp_41[1] - entity_43[1];
                                                                                    long double fpu_val_7_374 =
                                                                                        temp_41[2] - entity_43[2];
                                                                                    float item_424_1 = fpu_val_7_374;
                                                                                    float item_514_6 = fpu_val_7_374 * item_4b8_1
                                                                                        - item_428_1 * item_4b4_1;
                                                                                    long double fpu_val_7_379 =
                                                                                        item_424_1 * item_4bc_1
                                                                                        - item_42c_1 * item_4b4_1;
                                                                                    float item_434_1 = -(fpu_val_7_379);
                                                                                    float item_504_3 = item_428_1 * item_4bc_1
                                                                                        - item_42c_1 * item_4b8_1;
                                                                                    long double fpu_val_7_387 =
                                                                                        item_504_3 * item_4b0_5
                                                                                        + item_434_1 * item_4c4_2
                                                                                        + item_514_6 * item_4c8_2;
                                                                                    double item_4a0_7 = fpu_val_7_387;
                                                                                    long double f81_1 = 0.0;
                                                                                    fpu_val_7_387 - f81_1;

                                                                                    if (!(*(&(
                                                                                        (fpu_val_7_387 < f81_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(fpu_val_7_387, f81_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (fpu_val_7_387 == f81_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 0x40))
                                                                                    {
                                                                                        long double fpu_val_7_393 = (
                                                                                            (*entity_43 - item_528_3) * item_514_6
                                                                                            + (entity_43[2] - item_3c8_1) * item_504_3
                                                                                            + (entity_43[1] - item_3cc_1) * item_434_1)
                                                                                            / item_4a0_7;
                                                                                        float item_50c_4 = fpu_val_7_393;
                                                                                        long double f90_1 = 0.0f;
                                                                                        fpu_val_7_393 - f90_1;

                                                                                        if (!(*(&(
                                                                                            (fpu_val_7_393 < f90_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(fpu_val_7_393, f90_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (fpu_val_7_393 == f90_1 ? 1 : 0)
                                                                                            << 0xe) + 1) & 1))
                                                                                        {
                                                                                            long double fpu_val_7_394 = item_50c_4;
                                                                                            long double f95_1 = 1.0f;
                                                                                            fpu_val_7_394 - f95_1;

                                                                                            if (*(&(
                                                                                                (fpu_val_7_394 < f95_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(fpu_val_7_394, f95_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (fpu_val_7_394 == f95_1 ? 1 : 0)
                                                                                                << 0xe) + 1) & 0x41)
                                                                                            {
                                                                                                float item_460_1 =
                                                                                                    item_50c_4 * item_4c8_2 + item_528_3;
                                                                                                float item_45c_1 =
                                                                                                    item_50c_4 * item_4c4_2 + item_3cc_1;
                                                                                                float item_458_1 =
                                                                                                    item_50c_4 * item_4b0_5 + item_3c8_1;
                                                                                                long double fpu_val_7_404 = item_514_6;
                                                                                                long double f98_1 = 0.0f;
                                                                                                fpu_val_7_404 - f98_1;
                                                                                                float item_340_1;

                                                                                                item_340_1 = !(*(&(
                                                                                                    (fpu_val_7_404 < f98_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(fpu_val_7_404, f98_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (fpu_val_7_404 == f98_1 ? 1 : 0)
                                                                                                    << 0xe) + 1) & 1) ? item_514_6
                                                                                                    : -(item_514_6);

                                                                                                long double fpu_val_7_407 = item_434_1;
                                                                                                long double f102_1 = 0.0f;
                                                                                                fpu_val_7_407 - f102_1;
                                                                                                long double fpu_val_7_408 = item_434_1;

                                                                                                if (*(&(
                                                                                                        (fpu_val_7_407 < f102_1 ? 1 : 0) << 8
                                                                                                        | (FCMP_UO(fpu_val_7_407, f102_1) ? 1
                                                                                                        : 0) << 0xa
                                                                                                        | (fpu_val_7_407 == f102_1 ? 1 : 0)
                                                                                                        << 0xe | 0x3800) + 1) & 1)
                                                                                                    fpu_val_7_408 = -(fpu_val_7_408);

                                                                                                long double fpu_val_6_212 = item_504_3;
                                                                                                long double f104_1 = 0.0f;
                                                                                                fpu_val_6_212 - f104_1;
                                                                                                long double fpu_val_6_213 = item_504_3;

                                                                                                if (*(&(
                                                                                                        (fpu_val_6_212 < f104_1 ? 1 : 0) << 8
                                                                                                        | (FCMP_UO(fpu_val_6_212, f104_1) ? 1
                                                                                                        : 0) << 0xa
                                                                                                        | (fpu_val_6_212 == f104_1 ? 1 : 0)
                                                                                                        << 0xe | 0x3000) + 1) & 1)
                                                                                                    fpu_val_6_213 = -(fpu_val_6_213);

                                                                                                long double fpu_val_5_93 = item_340_1;
                                                                                                fpu_val_5_93 - fpu_val_7_408;
                                                                                                long double fpu_val_5_94;

                                                                                                if (!(*(&(
                                                                                                    (fpu_val_5_93 < fpu_val_7_408 ? 1 : 0) << 8
                                                                                                    | (FCMP_UO(fpu_val_5_93, fpu_val_7_408) ? 1
                                                                                                    : 0) << 0xa
                                                                                                    | (fpu_val_5_93 == fpu_val_7_408 ? 1 : 0)
                                                                                                    << 0xe | 0x3000) + 1) & 0x41))
                                                                                                {
                                                                                                    fpu_val_5_94 = item_340_1;
                                                                                                    fpu_val_5_94 - fpu_val_6_213;
                                                                                                }

                                                                                                double item_530_7;
                                                                                                float item_514_7;
                                                                                                long double fpu_val_7_410;

                                                                                                if (*(&(
                                                                                                    (fpu_val_5_93 < fpu_val_7_408 ? 1 : 0) << 8
                                                                                                    | (FCMP_UO(fpu_val_5_93, fpu_val_7_408) ? 1
                                                                                                    : 0) << 0xa
                                                                                                    | (fpu_val_5_93 == fpu_val_7_408 ? 1 : 0)
                                                                                                    << 0xe | 0x3000) + 1) & 0x41 || *(&(
