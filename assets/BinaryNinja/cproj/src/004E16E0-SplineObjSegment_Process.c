#include "gi_platform.h"
#include "004E16E0-SplineObjSegment_Process.h"
int32_t* SplineObjSegment_Process(float a1, int32_t* a2)

{
    char v_4a1 = 0;
    int32_t* result_1 = a2[8];
    int32_t* result = (*(int32_t*)(uintptr_t)(a1 + 0x6c));
    double* v_448 = *a2;
    double* v_470 = a2[1];

    if (result)
    {
        int32_t objC1 = (*(int32_t*)(uintptr_t)(a1 + 0xa4));

        if (objC1 != 0xffffffff)
        {
            void* valA1 = result[objC1];
            void* objC2 = *(*(valA1 + 0xc) + 0xc);
            result = *(objC2 + 0x28);

            if (!result)
            {
                int32_t tmpD1 = *(objC2 + 0x2c);
                int32_t valA4 = a2[5] << 5;
                result = valA4 + tmpD1;
                int32_t* result_2 = result;

                if (valA4 != -(tmpD1) && *result)
                {
                    int32_t objC3 = result[5];
                    char valA5 = a2[3];

                    if (valA5 == 0xff)
                    {
    label_4e17b5: ;
                        result = a2[2];
                        int32_t* result_3 = nullptr;

                        if (result > 0)
                        {
                            while (true)
                            {
                                result = result_1;
                                bool v_531_1;

                                if (!result[0x16])
                                    v_531_1 = false;
                                else
                                    v_531_1 = result[0x13];

                                long double x87_r7_2 = (*(int32_t*)(uintptr_t)(a1 + 0x20)) - (*(int32_t*)(uintptr_t)(a1 + 0xf4));
                                result = result[0x16];
                                char v_519_1 = result;
                                char v_505_1 = 0;
                                long double f2_1 = *v_448;
                                x87_r7_2 - f2_1;
                                result = (x87_r7_2 < f2_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_2, f2_1) ? 1 : 0) << 0xa
                                    | (x87_r7_2 == f2_1 ? 1 : 0) << 0xe | 0x3800;
                                double* objC7;

                                if (*(&result + 1) & 0x41)
                                    objC7 = v_470;
                                else
                                {
                                    objC7 = v_470;
                                    long double f3_1 = *objC7;
                                    x87_r7_2 - f3_1;
                                    result = (x87_r7_2 < f3_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_2, f3_1) ? 1 : 0) << 0xa
                                        | (x87_r7_2 == f3_1 ? 1 : 0) << 0xe;

                                    if (!(*(&result + 1) & 0x41))
                                        break;
                                }

                                long double x87_r7_5 = (*(int32_t*)(uintptr_t)(a1 + 0xf4)) + (*(int32_t*)(uintptr_t)(a1 + 0x20));
                                long double f4_1 = *v_448;
                                x87_r7_5 - f4_1;
                                result = (x87_r7_5 < f4_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_5, f4_1) ? 1 : 0) << 0xa
                                    | (x87_r7_5 == f4_1 ? 1 : 0) << 0xe | 0x3800;

                                if (*(&result + 1) & 1)
                                {
                                    long double f5_1 = *objC7;
                                    x87_r7_5 - f5_1;
                                    result = (x87_r7_5 < f5_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_5, f5_1) ? 1 : 0) << 0xa
                                        | (x87_r7_5 == f5_1 ? 1 : 0) << 0xe;

                                    if (*(&result + 1) & 1)
                                        break;
                                }

                                long double x87_r7_8 = (*(int32_t*)(uintptr_t)(a1 + 0x28)) - (*(int32_t*)(uintptr_t)(a1 + 0xf4));
                                long double f6_1 = v_448[1];
                                x87_r7_8 - f6_1;
                                result = (x87_r7_8 < f6_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_8, f6_1) ? 1 : 0) << 0xa
                                    | (x87_r7_8 == f6_1 ? 1 : 0) << 0xe | 0x3800;

                                if (!(*(&result + 1) & 0x41))
                                {
                                    long double f7_1 = objC7[1];
                                    x87_r7_8 - f7_1;
                                    result = (x87_r7_8 < f7_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_8, f7_1) ? 1 : 0) << 0xa
                                        | (x87_r7_8 == f7_1 ? 1 : 0) << 0xe;

                                    if (!(*(&result + 1) & 0x41))
                                        break;
                                }

                                long double x87_r7_11 = (*(int32_t*)(uintptr_t)(a1 + 0xf4)) + (*(int32_t*)(uintptr_t)(a1 + 0x28));
                                long double f8_1 = v_448[1];
                                x87_r7_11 - f8_1;
                                result = (x87_r7_11 < f8_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_11, f8_1) ? 1 : 0) << 0xa
                                    | (x87_r7_11 == f8_1 ? 1 : 0) << 0xe | 0x3800;

                                if (*(&result + 1) & 1)
                                {
                                    long double f9_1 = objC7[1];
                                    x87_r7_11 - f9_1;
                                    result = (x87_r7_11 < f9_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_11, f9_1) ? 1 : 0) << 0xa
                                        | (x87_r7_11 == f9_1 ? 1 : 0) << 0xe;

                                    if (*(&result + 1) & 1)
                                        break;
                                }

                                long double x87_r7_14 = (*(int32_t*)(uintptr_t)(a1 + 0x30)) - (*(int32_t*)(uintptr_t)(a1 + 0xf4));
                                long double f10_1 = v_448[2];
                                x87_r7_14 - f10_1;
                                result = (x87_r7_14 < f10_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_14, f10_1) ? 1 : 0) << 0xa
                                    | (x87_r7_14 == f10_1 ? 1 : 0) << 0xe | 0x3800;

                                if (!(*(&result + 1) & 0x41))
                                {
                                    long double f11_1 = objC7[2];
                                    x87_r7_14 - f11_1;
                                    result = (x87_r7_14 < f11_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_14, f11_1) ? 1 : 0) << 0xa
                                        | (x87_r7_14 == f11_1 ? 1 : 0) << 0xe;

                                    if (!(*(&result + 1) & 0x41))
                                        break;
                                }

                                long double x87_r7_17 = (*(int32_t*)(uintptr_t)(a1 + 0xf4)) + (*(int32_t*)(uintptr_t)(a1 + 0x30));
                                long double f12_1 = v_448[2];
                                x87_r7_17 - f12_1;
                                result = (x87_r7_17 < f12_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_17, f12_1) ? 1 : 0) << 0xa
                                    | (x87_r7_17 == f12_1 ? 1 : 0) << 0xe | 0x3800;

                                if (*(&result + 1) & 1)
                                {
                                    long double f13_1 = objC7[2];
                                    x87_r7_17 - f13_1;
                                    result = (x87_r7_17 < f13_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_17, f13_1) ? 1 : 0) << 0xa
                                        | (x87_r7_17 == f13_1 ? 1 : 0) << 0xe;

                                    if (*(&result + 1) & 1)
                                        break;
                                }

                                int32_t saved_dst;
                                double v_480;
                                int16_t* v_410;

                                if ((*(int32_t*)(uintptr_t)(a1 + 0x5b4)))
                                {
                                    char v_50d_2 = 1;
                                    int32_t v_518_2 = 0;
                                    float* srcS6 = result_2[7];
                                    float* v_4cc_3 = srcS6;
                                    int32_t v_198[0x64];
                                    v_198[0] = srcS6;
                                    long double x87_r7_273 = *v_448 - (*(int32_t*)(uintptr_t)(a1 + 0x20));
                                    long double x87_r6_125 = v_448[1] - (*(int32_t*)(uintptr_t)(a1 + 0x28));
                                    long double x87_r5_51 = v_448[2] - (*(int32_t*)(uintptr_t)(a1 + 0x30));
                                    float v_3d0_1 = x87_r7_273 * (*(int32_t*)(uintptr_t)(a1 + 0x520))
                                        + x87_r5_51 * (*(int32_t*)(uintptr_t)(a1 + 0x528))
                                        + x87_r6_125 * (*(int32_t*)(uintptr_t)(a1 + 0x524));
                                    float v_528_2 = v_3d0_1;
                                    float v_3cc_1 = x87_r7_273 * (*(int32_t*)(uintptr_t)(a1 + 0x52c))
                                        + x87_r5_51 * (*(int32_t*)(uintptr_t)(a1 + 0x534))
                                        + x87_r6_125 * (*(int32_t*)(uintptr_t)(a1 + 0x530));
                                    float v_3c8_1 = x87_r6_125 * (*(int32_t*)(uintptr_t)(a1 + 0x53c))
                                        + x87_r7_273 * (*(int32_t*)(uintptr_t)(a1 + 0x538))
                                        + x87_r5_51 * (*(int32_t*)(uintptr_t)(a1 + 0x540));
                                    long double x87_r7_279 =
                                        ((*(int32_t*)(uintptr_t)(a1 + 0xfc)) + (*(int32_t*)(uintptr_t)(a1 + 0x100))) * 0.5.0f;
                                    float v_528_3 = x87_r7_279 + v_3d0_1;
                                    long double x87_r6_131 = *v_470 - (*(int32_t*)(uintptr_t)(a1 + 0x20));
                                    long double x87_r5_57 = v_470[1] - (*(int32_t*)(uintptr_t)(a1 + 0x28));
                                    long double x87_r4_39 = v_470[2] - (*(int32_t*)(uintptr_t)(a1 + 0x30));
                                    float v_3e8_1 = x87_r6_131 * (*(int32_t*)(uintptr_t)(a1 + 0x520))
                                        + x87_r4_39 * (*(int32_t*)(uintptr_t)(a1 + 0x528))
                                        + x87_r5_57 * (*(int32_t*)(uintptr_t)(a1 + 0x524));
                                    float v_490_2 = v_3e8_1;
                                    float v_3e4_1 = x87_r6_131 * (*(int32_t*)(uintptr_t)(a1 + 0x52c))
                                        + x87_r4_39 * (*(int32_t*)(uintptr_t)(a1 + 0x534))
                                        + x87_r5_57 * (*(int32_t*)(uintptr_t)(a1 + 0x530));
                                    float v_3e0_1 = x87_r6_131 * (*(int32_t*)(uintptr_t)(a1 + 0x538))
                                        + x87_r4_39 * (*(int32_t*)(uintptr_t)(a1 + 0x540))
                                        + x87_r5_57 * (*(int32_t*)(uintptr_t)(a1 + 0x53c));
                                    float v_490_3 = x87_r7_279 + v_3e8_1;
                                    float v_444_3 = Sys_DispatchOpcode_11(v_448, v_470);
                                    int16_t valA72;
                                    valA72 = v_519_1;
                                    float v_4fc_3 = v_490_3;
                                    float v_4f8_3 = v_3e4_1;
                                    long double x87_r7_291;

                                    if (!valA72)
                                        x87_r7_291 = v_3e0_1;
                                    else
                                    {
                                        long double x87_r7_283 = *(result_1 + 8) - (*(int32_t*)(uintptr_t)(a1 + 0x20));
                                        long double x87_r6_137 =
                                            *(result_1 + 0x10) - (*(int32_t*)(uintptr_t)(a1 + 0x28));
                                        long double x87_r5_60 = *(result_1 + 0x18) - (*(int32_t*)(uintptr_t)(a1 + 0x30));
                                        float v_3b8_1 = x87_r5_60 * (*(int32_t*)(uintptr_t)(a1 + 0x88))
                                            + x87_r6_137 * (*(int32_t*)(uintptr_t)(a1 + 0x7c))
                                            + x87_r7_283 * (*(int32_t*)(uintptr_t)(a1 + 0x70));
                                        float v_4fc_4 = v_3b8_1;
                                        v_4fc_3 = v_3b8_1 / (*(int32_t*)(uintptr_t)(a1 + 0x98));
                                        v_4f8_3 = (x87_r5_60 * (*(int32_t*)(uintptr_t)(a1 + 0x8c))
                                            + x87_r6_137 * (*(int32_t*)(uintptr_t)(a1 + 0x80))
                                            + x87_r7_283 * (*(int32_t*)(uintptr_t)(a1 + 0x74))) / (*(int32_t*)(uintptr_t)(a1 + 0x98));
                                        x87_r7_291 = (x87_r5_60 * (*(int32_t*)(uintptr_t)(a1 + 0x90))
                                            + x87_r6_137 * (*(int32_t*)(uintptr_t)(a1 + 0x84))
                                            + x87_r7_283 * (*(int32_t*)(uintptr_t)(a1 + 0x78))) / (*(int32_t*)(uintptr_t)(a1 + 0x98));
                                        long double x87_r6_143 = v_4f8_3 - v_3cc_1;
                                        long double x87_r5_65 = v_4fc_3 - v_528_3;
                                        long double x87_r4_53 = x87_r7_291 - v_3c8_1;
                                        v_480 = sqrtl(x87_r5_65 * x87_r5_65
                                            + x87_r6_143 * x87_r6_143 + x87_r4_53 * x87_r4_53);
                                    }

                                    long double x87_r6_145 = v_528_3;
                                    long double f15_1 = v_4fc_3;
                                    x87_r6_145 - f15_1;
                                    long double x87_r6_146;

                                    x87_r6_146 = !(*(&((x87_r6_145 < f15_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_145, f15_1) ? 1 : 0) << 0xa
                                        | (x87_r6_145 == f15_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                        ? v_4fc_3 : v_528_3;

                                    float v_4e4_2 = x87_r6_146 - 0.100000001.0f;
                                    long double x87_r6_148 = v_3cc_1;
                                    long double f17_1 = v_4f8_3;
                                    x87_r6_148 - f17_1;
                                    long double x87_r6_149;

                                    x87_r6_149 = !(*(&((x87_r6_148 < f17_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_148, f17_1) ? 1 : 0) << 0xa
                                        | (x87_r6_148 == f17_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                        ? v_4f8_3 : v_3cc_1;

                                    float v_4e0_2 = x87_r6_149 - 0.100000001.0f;
                                    long double x87_r6_151 = v_3c8_1;
                                    x87_r6_151 - x87_r7_291;
                                    long double x87_r6_152;

                                    x87_r6_152 = !(*(&((x87_r6_151 < x87_r7_291 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_151, x87_r7_291) ? 1 : 0) << 0xa
                                        | (x87_r6_151 == x87_r7_291 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                        ? x87_r7_291 : v_3c8_1;

                                    float v_4dc_2 = x87_r6_152 - 0.100000001.0f;
                                    long double x87_r6_154 = v_528_3;
                                    long double f20_1 = v_4fc_3;
                                    x87_r6_154 - f20_1;
                                    long double x87_r6_155;

                                    x87_r6_155 = *(&((x87_r6_154 < f20_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_154, f20_1) ? 1 : 0) << 0xa
                                        | (x87_r6_154 == f20_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41
                                        ? v_4fc_3 : v_528_3;

                                    float v_4f0_2 = x87_r6_155 + 0.100000001.0f;
                                    long double x87_r6_157 = v_3cc_1;
                                    long double f22_1 = v_4f8_3;
                                    x87_r6_157 - f22_1;
                                    long double x87_r6_158;

                                    x87_r6_158 = *(&((x87_r6_157 < f22_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_157, f22_1) ? 1 : 0) << 0xa
                                        | (x87_r6_157 == f22_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41
                                        ? v_4f8_3 : v_3cc_1;

                                    float v_4ec_2 = x87_r6_158 + 0.100000001.0f;
                                    long double x87_r6_160 = v_3c8_1;
                                    x87_r6_160 - x87_r7_291;
                                    valA72 = (x87_r6_160 < x87_r7_291 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_160, x87_r7_291) ? 1 : 0) << 0xa
                                        | (x87_r6_160 == x87_r7_291 ? 1 : 0) << 0xe | 0x3800;

                                    if (!(*(&valA72 + 1) & 0x41))
                                        x87_r7_291 = v_3c8_1;

                                    float v_4fc_5 = v_490_3;
                                    float v_4f4_6 = v_3e0_1;
                                    float v_4f8_5 = v_3e4_1;
                                    float v_4e8_2 = x87_r7_291 + 0.100000001.0f;
                                    long double x87_r7_295 = v_3e4_1 - v_3cc_1;
                                    double v_440_2 = x87_r7_295;
                                    long double x87_r6_163 = v_490_3 - v_528_3;
                                    long double x87_r4_56 = v_3e0_1 - v_3c8_1;
                                    float v_4b0_5 = x87_r4_56;
                                    double v_370 = 1.0 / (x87_r4_56 * x87_r4_56
                                        + x87_r6_163 * x87_r6_163 + v_440_2 * v_440_2);
                                    float v_4c8_2 = x87_r6_163;
                                    float v_4c4_2 = x87_r7_295;
                                    long double x87_r7_296 = v_4c4_2;
                                    long double f24_1 = 0.0f;
                                    x87_r7_296 - f24_1;

                                    if (!(*(&((x87_r7_296 < f24_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_296, f24_1) ? 1 : 0) << 0xa
                                            | (x87_r7_296 == f24_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        float v_4b0_7 = v_4c4_2;
                                    else
                                        float v_4b0_6 = -(v_4c4_2);

                                    long double x87_r7_299 = v_4c8_2;
                                    long double f25_1 = 0.0f;
                                    x87_r7_299 - f25_1;

                                    if (!(*(&((x87_r7_299 < f25_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_299, f25_1) ? 1 : 0) << 0xa
                                            | (x87_r7_299 == f25_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        float v_4b0_9 = v_4c8_2;
                                    else
                                        float v_4b0_8 = -(v_4c8_2);

                                    if (result_2[3])
                                    {
                                        while (true)
                                        {
                                            int32_t tmpD38 = v_518_2;

                                            while (true)
                                            {
                                                int16_t i;
                                                i = v_50d_2;

                                                if (!i)
                                                {
                                                    int16_t srcS7 = *(srcS6 + 0x16);

                                                    if (!srcS7)
                                                    {
                                                        int32_t f28_1 = tmpD38;
                                                        tmpD38 -= 1;
                                                        v_518_2 = tmpD38;

                                                        if (f28_1 - 1 >= 0)
                                                        {
                                                            srcS6 = v_198[tmpD38];
                                                            continue;
                                                        }

                                                        i = v_505_1;

                                                        if (i)
                                                        {
                                                            float v_3f4_1 = v_4fc_5;
                                                            long double x87_r7_478 = v_4fc_5
                                                                - ((*(int32_t*)(uintptr_t)(a1 + 0xfc)) + (*(int32_t*)(uintptr_t)(a1 + 0x100)))
                                                                * 0.5.0f;
                                                            float v_330_1 =
                                                                v_4f4_6 * (*(int32_t*)(uintptr_t)(a1 + 0x84))
                                                                + v_4f8_5 * (*(int32_t*)(uintptr_t)(a1 + 0x80))
                                                                + x87_r7_478 * (*(int32_t*)(uintptr_t)(a1 + 0x7c));
                                                            long double x87_r7_480 =
                                                                v_4f4_6 * (*(int32_t*)(uintptr_t)(a1 + 0x90))
                                                                + v_4f8_5 * (*(int32_t*)(uintptr_t)(a1 + 0x8c))
                                                                + x87_r7_478 * (*(int32_t*)(uintptr_t)(a1 + 0x88));
                                                            long double x87_r6_278 =
                                                                v_4f4_6 * (*(int32_t*)(uintptr_t)(a1 + 0x78))
                                                                + v_4f8_5 * (*(int32_t*)(uintptr_t)(a1 + 0x74))
                                                                + x87_r7_478 * (*(int32_t*)(uintptr_t)(a1 + 0x70))
                                                                + (*(int32_t*)(uintptr_t)(a1 + 0x20));
                                                            double v_358 = x87_r6_278;
                                                            double v_350_1 =
                                                                v_330_1 + (*(int32_t*)(uintptr_t)(a1 + 0x28));
                                                            double v_348_1 =
                                                                x87_r7_480 + (*(int32_t*)(uintptr_t)(a1 + 0x30));
                                                            v_480 = Sys_DispatchOpcode_11(v_448, &v_358);
                                                            long double x87_r7_483;
                                                            long double f38_1;

                                                            if (result_1[0x16])
                                                            {
                                                                x87_r7_483 = v_480;
                                                                f38_1 = *(result_1 + 0x60);
                                                                x87_r7_483 - f38_1;
                                                            }

                                                            if (!result_1[0x16] || *(&(
                                                                (x87_r7_483 < f38_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(x87_r7_483, f38_1) ? 1 : 0)
                                                                << 0xa
                                                                | (x87_r7_483 == f38_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1)
                                                            {
                                                                int32_t valA98 = 0;
                                                                int32_t objC51 = 0;
                                                                valA98 = *v_410;
                                                                objC51 = v_410[1];
                                                                int32_t tmpD48 = 0;
                                                                tmpD48 = v_410[2];
                                                                float* valA100 = (valA98 << 4) + objC3;
                                                                float* objC53 = (objC51 << 4) + objC3;
                                                                float* tmpD50 = (tmpD48 << 4) + objC3;
                                                                int32_t srcS10 = 0;
                                                                srcS10 = v_410[3];
                                                                int16_t srcS13 =
                                                                    *(result_2[6] + srcS10 * 0xc + 8);
                                                                int32_t srcS15;

                                                                if (srcS13 != 0xffff)
                                                                    srcS15 = (*(int32_t*)(uintptr_t)(*(a1 + 0x68)
                                                                        + (srcS13 << 2) + 0xd3c));
                                                                else
                                                                    srcS15 = (*(int32_t*)(uintptr_t)(*(a1 + 0x68) + 0xd40));

                                                                long double x87_r7_485 =
                                                                    *tmpD50 - *valA100;
                                                                long double x87_r6_282 =
                                                                    tmpD50[1] - valA100[1];
                                                                long double x87_r5_112 =
                                                                    tmpD50[2] - valA100[2];
                                                                float v_408_1 = *objC53 - *valA100;
                                                                float v_404_1 =
                                                                    objC53[1] - valA100[1];
                                                                float v_400_1 =
                                                                    objC53[2] - valA100[2];
                                                                float v_37c_1 =
                                                                    x87_r5_112 * (*(int32_t*)(uintptr_t)(a1 + 0x78))
                                                                    + x87_r7_485 * (*(int32_t*)(uintptr_t)(a1 + 0x70))
                                                                    + x87_r6_282 * (*(int32_t*)(uintptr_t)(a1 + 0x74));
                                                                float v_378_1 =
                                                                    x87_r5_112 * (*(int32_t*)(uintptr_t)(a1 + 0x84))
                                                                    + x87_r7_485 * (*(int32_t*)(uintptr_t)(a1 + 0x7c))
                                                                    + x87_r6_282 * (*(int32_t*)(uintptr_t)(a1 + 0x80));
                                                                long double x87_r7_488 =
                                                                    x87_r5_112 * (*(int32_t*)(uintptr_t)(a1 + 0x90))
                                                                    + x87_r7_485 * (*(int32_t*)(uintptr_t)(a1 + 0x88))
                                                                    + x87_r6_282 * (*(int32_t*)(uintptr_t)(a1 + 0x8c));
                                                                float v_3ac_1 =
                                                                    v_400_1 * (*(int32_t*)(uintptr_t)(a1 + 0x78))
                                                                    + v_408_1 * (*(int32_t*)(uintptr_t)(a1 + 0x70))
                                                                    + v_404_1 * (*(int32_t*)(uintptr_t)(a1 + 0x74));
                                                                float v_3a8_1 =
                                                                    v_400_1 * (*(int32_t*)(uintptr_t)(a1 + 0x84))
                                                                    + v_408_1 * (*(int32_t*)(uintptr_t)(a1 + 0x7c))
                                                                    + v_404_1 * (*(int32_t*)(uintptr_t)(a1 + 0x80));
                                                                long double x87_r6_295 =
                                                                    v_400_1 * (*(int32_t*)(uintptr_t)(a1 + 0x90))
                                                                    + v_408_1 * (*(int32_t*)(uintptr_t)(a1 + 0x88))
                                                                    + v_404_1 * (*(int32_t*)(uintptr_t)(a1 + 0x8c));
                                                                result_1[0xe] = x87_r6_295 * v_378_1
                                                                    - v_3a8_1 * x87_r7_488;
                                                                result_1[0xf] = -((
                                                                    x87_r6_295 * v_37c_1
                                                                    - v_3ac_1 * x87_r7_488));
                                                                result_1[0x10] = v_3a8_1 * v_37c_1
                                                                    - v_3ac_1 * v_378_1;

                                                                if ((*(int32_t*)(uintptr_t)(a1 + 0x5b5)))
                                                                {
                                                                    result_1[0xe] = -(result_1[0xe]);
                                                                    result_1[0xf] = -(result_1[0xf]);
                                                                    result_1[0x10] = -(result_1[0x10]);
                                                                }

                                                                void** result_4 = result_1;
                                                                long double x87_r7_499 = v_358;
                                                                int32_t* tmpD53 = &result_4[0xb];
                                                                *tmpD53 = result_1[0xe];
                                                                int32_t objC55 = result_1[0x10];
                                                                tmpD53[1] = result_1[0xf];
                                                                tmpD53[2] = objC55;
                                                                result_4[8] =
                                                                    x87_r7_499 - (*(int32_t*)(uintptr_t)(a1 + 0x20));
                                                                result_4[9] =
                                                                    v_350_1 - (*(int32_t*)(uintptr_t)(a1 + 0x28));
                                                                long double x87_r7_504 =
                                                                    v_348_1 - (*(int32_t*)(uintptr_t)(a1 + 0x30));
                                                                int32_t objC56 = memcpy(
                                                                    &result_4[2], &v_358, 0x18);
                                                                result_4[0xa] = x87_r7_504;
                                                                objC56 = v_531_1;
                                                                tmpD53 = objC56;
                                                                *result_4 = a1;
                                                                char f84_1 = tmpD53;
                                                                tmpD53 = -(tmpD53);
                                                                char f85_1 = objC56;
                                                                objC56 = -(objC56);
                                                                result_4[0x13] =
                                                                    (tmpD53 - tmpD53) & srcS15;
                                                                result_4[0x14] =
                                                                    ~(objC56 - objC56) & srcS15;
                                                                result_4[0x15] = 1;
                                                                result_4[0x16] = 1;
                                                                result_4[0x18] = v_480;
                                                                result_4[0x19] = *(&v_480 + 4);
                                                                result_4[0x12] =
                                                                    (v_410 - result_2[4]) >> 3;
                                                            }
                                                        }

                                                        goto label_4e3f44;
                                                    }
                                                    else
                                                    {
                                                        uint32_t valA79 = srcS7 * 3;
                                                        long double x87_r7_303 =
                                                            v_4cc_3[valA79 * 2] - v_528_3;
                                                        srcS6 = &v_4cc_3[valA79 * 2];
                                                        long double x87_r6_165 =
                                                            v_4cc_3[valA79 * 2 + 1] - v_3cc_1;
                                                        long double x87_r5_71 =
                                                            srcS6[2] - v_3c8_1;
                                                        v_198[tmpD38] = srcS6;
                                                        double v_4a0_5 = x87_r6_165;
                                                        double v_440_3 = x87_r7_303;
                                                        double v_530_5 = x87_r5_71;
                                                        long double x87_r7_306 =
                                                            x87_r6_165 * v_4c4_2
                                                            + x87_r7_303 * v_4c8_2
                                                            + x87_r5_71 * v_4b0_5;
                                                        float v_514_4 = srcS6[3];
                                                        long double x87_r7_311 =
                                                            v_440_3 * v_440_3
                                                            + v_4a0_5 * v_4a0_5
                                                            + v_530_5 * v_530_5
                                                            - x87_r7_306 * x87_r7_306 * v_370;
                                                        long double x87_r6_178 =
                                                            v_514_4 * v_514_4;
                                                        x87_r6_178 - x87_r7_311;

                                                        if (*(&(
                                                                (x87_r6_178 < x87_r7_311 ? 1 : 0) << 8
                                                                | (FCMP_UO(x87_r6_178, x87_r7_311) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r6_178 == x87_r7_311 ? 1 : 0)
                                                                << 0xe) + 1) & 1)
                                                            continue;
                                                        else
                                                        {
                                                            long double x87_r7_313 =
                                                                *srcS6 + srcS6[3];
                                                            long double f29_1 = v_4e4_2;
                                                            x87_r7_313 - f29_1;

                                                            if (*(&(
                                                                    (x87_r7_313 < f29_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(x87_r7_313, f29_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (x87_r7_313 == f29_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 1)
                                                                continue;
                                                            else
                                                            {
                                                                long double x87_r7_315 =
                                                                    srcS6[1] + srcS6[3];
                                                                long double f33_1 = v_4e0_2;
                                                                x87_r7_315 - f33_1;

                                                                if (*(&(
                                                                        (x87_r7_315 < f33_1 ? 1 : 0) << 8 | (
                                                                        FCMP_UO(x87_r7_315, f33_1) ? 1 : 0)
                                                                        << 0xa
                                                                        | (x87_r7_315 == f33_1 ? 1 : 0)
                                                                        << 0xe) + 1) & 1)
                                                                    continue;
                                                                else
                                                                {
                                                                    long double x87_r7_317 =
                                                                        srcS6[2] + srcS6[3];
                                                                    long double f39_1 = v_4dc_2;
                                                                    x87_r7_317 - f39_1;

                                                                    if (*(&(
                                                                            (x87_r7_317 < f39_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(x87_r7_317, f39_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (x87_r7_317 == f39_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 1)
                                                                        continue;
                                                                    else
                                                                    {
                                                                        long double x87_r7_319 =
                                                                            *srcS6 - srcS6[3];
                                                                        long double f46_1 = v_4f0_2;
                                                                        x87_r7_319 - f46_1;

                                                                        if (!(*(&(
                                                                                (x87_r7_319 < f46_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_319, f46_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_319 == f46_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41))
                                                                            continue;
                                                                        else
                                                                        {
                                                                            long double x87_r7_321 =
                                                                                srcS6[1] - srcS6[3];
                                                                            long double f55_1 = v_4ec_2;
                                                                            x87_r7_321 - f55_1;

                                                                            if (!(*(&(
                                                                                    (x87_r7_321 < f55_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(x87_r7_321, f55_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_321 == f55_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41))
                                                                                continue;
                                                                            else
                                                                            {
                                                                                long double x87_r7_323 =
                                                                                    srcS6[2] - srcS6[3];
                                                                                long double f64_1 = v_4e8_2;
                                                                                x87_r7_323 - f64_1;

                                                                                if (!(*(&(
                                                                                        (x87_r7_323 < f64_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r7_323, f64_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r7_323 == f64_1 ? 1 : 0)
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

                                                i = srcS6[5];
                                                v_50d_2 = 0;

                                                if (i)
                                                {
                                                    float** objC39 = &(&saved_dst)[tmpD38 + 0xea];

                                                    do
                                                    {
                                                        objC39 = &objC39[1];
                                                        tmpD38 += 1;
                                                        uint32_t valA82 = i * 3;
                                                        long double x87_r7_325 =
                                                            v_4cc_3[valA82 * 2] - v_528_3;
                                                        srcS6 = &v_4cc_3[valA82 * 2];
                                                        long double x87_r6_180 =
                                                            v_4cc_3[valA82 * 2 + 1] - v_3cc_1;
                                                        long double x87_r5_84 =
                                                            srcS6[2] - v_3c8_1;
                                                        *objC39 = srcS6;
                                                        double v_530_6 = x87_r5_84;
                                                        double v_4a0_6 = x87_r6_180;
                                                        double v_440_4 = x87_r7_325;
                                                        long double x87_r7_327 =
                                                            x87_r5_84 * v_4b0_5
                                                            + x87_r6_180 * v_4c4_2
                                                            + x87_r7_325 * v_4c8_2;
                                                        float v_514_5 = srcS6[3];
                                                        long double x87_r7_332 =
                                                            v_440_4 * v_440_4
                                                            + v_4a0_6 * v_4a0_6
                                                            + v_530_6 * v_530_6
                                                            - x87_r7_327 * x87_r7_327 * v_370;
                                                        long double x87_r6_195 =
                                                            v_514_5 * v_514_5;
                                                        x87_r6_195 - x87_r7_332;
                                                        i = (x87_r6_195 < x87_r7_332 ? 1 : 0) << 8
                                                            | (FCMP_UO(x87_r6_195, x87_r7_332) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r6_195 == x87_r7_332 ? 1 : 0)
                                                            << 0xe;

                                                        if (*(&i + 1) & 1)
                                                            break;

                                                        long double x87_r7_334 = *srcS6 + srcS6[3];
                                                        long double f32_1 = v_4e4_2;
                                                        x87_r7_334 - f32_1;
                                                        i = (x87_r7_334 < f32_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_334, f32_1) ? 1 : 0)
                                                            << 0xa | (x87_r7_334 == f32_1 ? 1 : 0)
                                                            << 0xe;

                                                        if (*(&i + 1) & 1)
                                                            break;

                                                        long double x87_r7_336 =
                                                            srcS6[1] + srcS6[3];
                                                        long double f37_1 = v_4e0_2;
                                                        x87_r7_336 - f37_1;
                                                        i = (x87_r7_336 < f37_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_336, f37_1) ? 1 : 0)
                                                            << 0xa | (x87_r7_336 == f37_1 ? 1 : 0)
                                                            << 0xe;

                                                        if (*(&i + 1) & 1)
                                                            break;

                                                        long double x87_r7_338 =
                                                            srcS6[2] + srcS6[3];
                                                        long double f45_1 = v_4dc_2;
                                                        x87_r7_338 - f45_1;
                                                        i = (x87_r7_338 < f45_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_338, f45_1) ? 1 : 0)
                                                            << 0xa | (x87_r7_338 == f45_1 ? 1 : 0)
                                                            << 0xe;

                                                        if (*(&i + 1) & 1)
                                                            break;

                                                        long double x87_r7_340 = *srcS6 - srcS6[3];
                                                        long double f54_1 = v_4f0_2;
                                                        x87_r7_340 - f54_1;
                                                        i = (x87_r7_340 < f54_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_340, f54_1) ? 1 : 0)
                                                            << 0xa | (x87_r7_340 == f54_1 ? 1 : 0)
                                                            << 0xe;

                                                        if (!(*(&i + 1) & 0x41))
                                                            break;

                                                        long double x87_r7_342 =
                                                            srcS6[1] - srcS6[3];
                                                        long double f63_1 = v_4ec_2;
                                                        x87_r7_342 - f63_1;
                                                        i = (x87_r7_342 < f63_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_342, f63_1) ? 1 : 0)
                                                            << 0xa | (x87_r7_342 == f63_1 ? 1 : 0)
                                                            << 0xe;

                                                        if (!(*(&i + 1) & 0x41))
                                                            break;

                                                        long double x87_r7_344 =
                                                            srcS6[2] - srcS6[3];
                                                        long double f73_1 = v_4e8_2;
                                                        x87_r7_344 - f73_1;
                                                        i = (x87_r7_344 < f73_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_344, f73_1) ? 1 : 0)
                                                            << 0xa | (x87_r7_344 == f73_1 ? 1 : 0)
                                                            << 0xe;

                                                        if (!(*(&i + 1) & 0x41))
                                                            break;

                                                        i = srcS6[5];
                                                    } while (i);

                                                    v_518_2 = tmpD38;
                                                }

                                                int16_t objC38 = *(srcS6 + 0x12);

                                                if (objC38)
                                                {
                                                    int32_t valA78 = 0;
                                                    valA78 = srcS6[4];
                                                    int32_t v_4b0_10 = valA78;
                                                    int16_t* dstD17 = result_2[4] + (valA78 << 3);
                                                    int16_t* v_474_2 = dstD17;

                                                    if (valA78 < objC38 + valA78)
                                                    {
                                                        bool cond_10_1;

                                                        do
                                                        {
                                                            int32_t objC41 = 0;
                                                            objC41 = *dstD17;
                                                            int32_t tmpD39 = 0;
                                                            tmpD39 = dstD17[1];
                                                            long double x87_r7_345 = v_4e4_2;
                                                            int32_t objC42 = objC41 << 4;
                                                            long double f31_1 =
                                                                *(objC42 + objC3);
                                                            x87_r7_345 - f31_1;
                                                            float* objC43 = objC42 + objC3;
                                                            float* tmpD41 = (tmpD39 << 4) + objC3;
                                                            int32_t valA84 = 0;
                                                            valA84 = dstD17[2];
                                                            float* dstD20 = (valA84 << 4) + objC3;

                                                            if (*(&(
                                                                (x87_r7_345 < f31_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(x87_r7_345, f31_1) ? 1 : 0)
                                                                << 0xa
                                                                | (x87_r7_345 == f31_1 ? 1 : 0)
                                                                << 0xe) + 1) & 0x41)
                                                            {
    label_4e3271: ;
                                                                long double x87_r7_348 = v_4e0_2;
                                                                long double f35_1 = objC43[1];
                                                                x87_r7_348 - f35_1;

                                                                if (*(&(
                                                                    (x87_r7_348 < f35_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(x87_r7_348, f35_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (x87_r7_348 == f35_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 0x41)
                                                                {
    label_4e329f: ;
                                                                    long double x87_r7_351 = v_4dc_2;
                                                                    long double f42_1 = objC43[2];
                                                                    x87_r7_351 - f42_1;

                                                                    if (*(&(
                                                                        (x87_r7_351 < f42_1 ? 1 : 0) << 8 | (
                                                                        FCMP_UO(x87_r7_351, f42_1) ? 1 : 0)
                                                                        << 0xa
                                                                        | (x87_r7_351 == f42_1 ? 1 : 0)
                                                                        << 0xe) + 1) & 0x41)
                                                                    {
    label_4e32cd: ;
                                                                        long double x87_r7_354 = v_4f0_2;
                                                                        long double f51_1 = *objC43;
                                                                        x87_r7_354 - f51_1;

                                                                        if (!(*(&(
                                                                            (x87_r7_354 < f51_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(x87_r7_354, f51_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (x87_r7_354 == f51_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 1))
                                                                        {
    label_4e32f8: ;
                                                                            long double x87_r7_357 = v_4ec_2;
                                                                            long double f60_1 = objC43[1];
                                                                            x87_r7_357 - f60_1;

                                                                            if (!(*(&(
                                                                                (x87_r7_357 < f60_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_357, f60_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_357 == f60_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 1))
                                                                            {
    label_4e3326: ;
                                                                                long double x87_r7_360 = v_4e8_2;
                                                                                long double f70_1 = objC43[2];
                                                                                x87_r7_360 - f70_1;

                                                                                if (!(*(&(
                                                                                    (x87_r7_360 < f70_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(x87_r7_360, f70_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_360 == f70_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 1))
                                                                                {
    label_4e3358: ;
                                                                                    float v_4bc_1 = *dstD20 - *objC43;
                                                                                    float v_4b8_1 = dstD20[1] - objC43[1];
                                                                                    float v_4b4_1 = dstD20[2] - objC43[2];
                                                                                    float v_42c_1 = *tmpD41 - *objC43;
                                                                                    float v_428_1 = tmpD41[1] - objC43[1];
                                                                                    long double x87_r7_374 =
                                                                                        tmpD41[2] - objC43[2];
                                                                                    float v_424_1 = x87_r7_374;
                                                                                    float v_514_6 = x87_r7_374 * v_4b8_1
                                                                                        - v_428_1 * v_4b4_1;
                                                                                    long double x87_r7_379 =
                                                                                        v_424_1 * v_4bc_1
                                                                                        - v_42c_1 * v_4b4_1;
                                                                                    float v_434_1 = -(x87_r7_379);
                                                                                    float v_504_3 = v_428_1 * v_4bc_1
                                                                                        - v_42c_1 * v_4b8_1;
                                                                                    long double x87_r7_387 =
                                                                                        v_504_3 * v_4b0_5
                                                                                        + v_434_1 * v_4c4_2
                                                                                        + v_514_6 * v_4c8_2;
                                                                                    double v_4a0_7 = x87_r7_387;
                                                                                    long double f81_1 = 0.0;
                                                                                    x87_r7_387 - f81_1;

                                                                                    if (!(*(&(
                                                                                        (x87_r7_387 < f81_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r7_387, f81_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r7_387 == f81_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 0x40))
                                                                                    {
                                                                                        long double x87_r7_393 = (
                                                                                            (*objC43 - v_528_3) * v_514_6
                                                                                            + (objC43[2] - v_3c8_1) * v_504_3
                                                                                            + (objC43[1] - v_3cc_1) * v_434_1)
                                                                                            / v_4a0_7;
                                                                                        float v_50c_4 = x87_r7_393;
                                                                                        long double f90_1 = 0.0f;
                                                                                        x87_r7_393 - f90_1;

                                                                                        if (!(*(&(
                                                                                            (x87_r7_393 < f90_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r7_393, f90_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r7_393 == f90_1 ? 1 : 0)
                                                                                            << 0xe) + 1) & 1))
                                                                                        {
                                                                                            long double x87_r7_394 = v_50c_4;
                                                                                            long double f95_1 = 1.0f;
                                                                                            x87_r7_394 - f95_1;

                                                                                            if (*(&(
                                                                                                (x87_r7_394 < f95_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r7_394, f95_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r7_394 == f95_1 ? 1 : 0)
                                                                                                << 0xe) + 1) & 0x41)
                                                                                            {
                                                                                                float v_460_1 =
                                                                                                    v_50c_4 * v_4c8_2 + v_528_3;
                                                                                                float v_45c_1 =
                                                                                                    v_50c_4 * v_4c4_2 + v_3cc_1;
                                                                                                float v_458_1 =
                                                                                                    v_50c_4 * v_4b0_5 + v_3c8_1;
                                                                                                long double x87_r7_404 = v_514_6;
                                                                                                long double f98_1 = 0.0f;
                                                                                                x87_r7_404 - f98_1;
                                                                                                float v_340_1;

                                                                                                v_340_1 = !(*(&(
                                                                                                    (x87_r7_404 < f98_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(x87_r7_404, f98_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r7_404 == f98_1 ? 1 : 0)
                                                                                                    << 0xe) + 1) & 1) ? v_514_6
                                                                                                    : -(v_514_6);

                                                                                                long double x87_r7_407 = v_434_1;
                                                                                                long double f102_1 = 0.0f;
                                                                                                x87_r7_407 - f102_1;
                                                                                                long double x87_r7_408 = v_434_1;

                                                                                                if (*(&(
                                                                                                        (x87_r7_407 < f102_1 ? 1 : 0) << 8
                                                                                                        | (FCMP_UO(x87_r7_407, f102_1) ? 1
                                                                                                        : 0) << 0xa
                                                                                                        | (x87_r7_407 == f102_1 ? 1 : 0)
                                                                                                        << 0xe | 0x3800) + 1) & 1)
                                                                                                    x87_r7_408 = -(x87_r7_408);

                                                                                                long double x87_r6_212 = v_504_3;
                                                                                                long double f104_1 = 0.0f;
                                                                                                x87_r6_212 - f104_1;
                                                                                                long double x87_r6_213 = v_504_3;

                                                                                                if (*(&(
                                                                                                        (x87_r6_212 < f104_1 ? 1 : 0) << 8
                                                                                                        | (FCMP_UO(x87_r6_212, f104_1) ? 1
                                                                                                        : 0) << 0xa
                                                                                                        | (x87_r6_212 == f104_1 ? 1 : 0)
                                                                                                        << 0xe | 0x3000) + 1) & 1)
                                                                                                    x87_r6_213 = -(x87_r6_213);

                                                                                                long double x87_r5_93 = v_340_1;
                                                                                                x87_r5_93 - x87_r7_408;
                                                                                                long double x87_r5_94;

                                                                                                if (!(*(&(
                                                                                                    (x87_r5_93 < x87_r7_408 ? 1 : 0) << 8
                                                                                                    | (FCMP_UO(x87_r5_93, x87_r7_408) ? 1
                                                                                                    : 0) << 0xa
                                                                                                    | (x87_r5_93 == x87_r7_408 ? 1 : 0)
                                                                                                    << 0xe | 0x3000) + 1) & 0x41))
                                                                                                {
                                                                                                    x87_r5_94 = v_340_1;
                                                                                                    x87_r5_94 - x87_r6_213;
                                                                                                }

                                                                                                double v_530_7;
                                                                                                float v_514_7;
                                                                                                long double x87_r7_410;

                                                                                                if (*(&(
                                                                                                    (x87_r5_93 < x87_r7_408 ? 1 : 0) << 8
                                                                                                    | (FCMP_UO(x87_r5_93, x87_r7_408) ? 1
                                                                                                    : 0) << 0xa
                                                                                                    | (x87_r5_93 == x87_r7_408 ? 1 : 0)
                                                                                                    << 0xe | 0x3000) + 1) & 0x41 || *(&(
