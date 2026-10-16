#include "004E16E0-SplineObjSegment_Process.h"
/* 0x004e16e0 SplineObjSegment_Process full linked: callers=0 callees=7 */
int32_t* sub_4e16e0(float a1, int32_t* a2)

{
    char var_4a1 = 0;
    int32_t* result_1 = a2[8];
    int32_t* result = *(a1 + 0x6c);
    double* var_448 = *a2;
    double* var_470 = a2[1];

    if (result)
    {
        int32_t ecx_1 = *(a1 + 0xa4);

        if (ecx_1 != 0xffffffff)
        {
            void* eax_1 = result[ecx_1];
            void* ecx_2 = *(*(eax_1 + 0xc) + 0xc);
            result = *(ecx_2 + 0x28);

            if (!result)
            {
                int32_t edx_1 = *(ecx_2 + 0x2c);
                int32_t eax_4 = a2[5] << 5;
                result = eax_4 + edx_1;
                int32_t* result_2 = result;

                if (eax_4 != -(edx_1) && *result)
                {
                    int32_t ecx_3 = result[5];
                    char eax_5 = a2[3];

                    if (eax_5 == 0xff)
                    {
                    label_4e17b5:
                        result = a2[2];
                        int32_t* result_3 = nullptr;

                        if (result > 0)
                        {
                            while (true)
                            {
                                result = result_1;
                                bool var_531_1;

                                if (!result[0x16])
                                    var_531_1 = false;
                                else
                                    var_531_1 = result[0x13];

                                long double x87_r7_2 = *(a1 + 0x20) - *(a1 + 0xf4);
                                result = result[0x16];
                                char var_519_1 = result;
                                char var_505_1 = 0;
                                long double temp2_1 = *var_448;
                                x87_r7_2 - temp2_1;
                                result = (x87_r7_2 < temp2_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
                                    | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe | 0x3800;
                                double* ecx_7;

                                if (*(&result + 1) & 0x41)
                                    ecx_7 = var_470;
                                else
                                {
                                    ecx_7 = var_470;
                                    long double temp3_1 = *ecx_7;
                                    x87_r7_2 - temp3_1;
                                    result = (x87_r7_2 < temp3_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_2, temp3_1) ? 1 : 0) << 0xa
                                        | (x87_r7_2 == temp3_1 ? 1 : 0) << 0xe;

                                    if (!(*(&result + 1) & 0x41))
                                        break;
                                }

                                long double x87_r7_5 = *(a1 + 0xf4) + *(a1 + 0x20);
                                long double temp4_1 = *var_448;
                                x87_r7_5 - temp4_1;
                                result = (x87_r7_5 < temp4_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_5, temp4_1) ? 1 : 0) << 0xa
                                    | (x87_r7_5 == temp4_1 ? 1 : 0) << 0xe | 0x3800;

                                if (*(&result + 1) & 1)
                                {
                                    long double temp5_1 = *ecx_7;
                                    x87_r7_5 - temp5_1;
                                    result = (x87_r7_5 < temp5_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_5, temp5_1) ? 1 : 0) << 0xa
                                        | (x87_r7_5 == temp5_1 ? 1 : 0) << 0xe;

                                    if (*(&result + 1) & 1)
                                        break;
                                }

                                long double x87_r7_8 = *(a1 + 0x28) - *(a1 + 0xf4);
                                long double temp6_1 = var_448[1];
                                x87_r7_8 - temp6_1;
                                result = (x87_r7_8 < temp6_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_8, temp6_1) ? 1 : 0) << 0xa
                                    | (x87_r7_8 == temp6_1 ? 1 : 0) << 0xe | 0x3800;

                                if (!(*(&result + 1) & 0x41))
                                {
                                    long double temp7_1 = ecx_7[1];
                                    x87_r7_8 - temp7_1;
                                    result = (x87_r7_8 < temp7_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_8, temp7_1) ? 1 : 0) << 0xa
                                        | (x87_r7_8 == temp7_1 ? 1 : 0) << 0xe;

                                    if (!(*(&result + 1) & 0x41))
                                        break;
                                }

                                long double x87_r7_11 = *(a1 + 0xf4) + *(a1 + 0x28);
                                long double temp8_1 = var_448[1];
                                x87_r7_11 - temp8_1;
                                result = (x87_r7_11 < temp8_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_11, temp8_1) ? 1 : 0) << 0xa
                                    | (x87_r7_11 == temp8_1 ? 1 : 0) << 0xe | 0x3800;

                                if (*(&result + 1) & 1)
                                {
                                    long double temp9_1 = ecx_7[1];
                                    x87_r7_11 - temp9_1;
                                    result = (x87_r7_11 < temp9_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_11, temp9_1) ? 1 : 0) << 0xa
                                        | (x87_r7_11 == temp9_1 ? 1 : 0) << 0xe;

                                    if (*(&result + 1) & 1)
                                        break;
                                }

                                long double x87_r7_14 = *(a1 + 0x30) - *(a1 + 0xf4);
                                long double temp10_1 = var_448[2];
                                x87_r7_14 - temp10_1;
                                result = (x87_r7_14 < temp10_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_14, temp10_1) ? 1 : 0) << 0xa
                                    | (x87_r7_14 == temp10_1 ? 1 : 0) << 0xe | 0x3800;

                                if (!(*(&result + 1) & 0x41))
                                {
                                    long double temp11_1 = ecx_7[2];
                                    x87_r7_14 - temp11_1;
                                    result = (x87_r7_14 < temp11_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_14, temp11_1) ? 1 : 0) << 0xa
                                        | (x87_r7_14 == temp11_1 ? 1 : 0) << 0xe;

                                    if (!(*(&result + 1) & 0x41))
                                        break;
                                }

                                long double x87_r7_17 = *(a1 + 0xf4) + *(a1 + 0x30);
                                long double temp12_1 = var_448[2];
                                x87_r7_17 - temp12_1;
                                result = (x87_r7_17 < temp12_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_17, temp12_1) ? 1 : 0) << 0xa
                                    | (x87_r7_17 == temp12_1 ? 1 : 0) << 0xe | 0x3800;

                                if (*(&result + 1) & 1)
                                {
                                    long double temp13_1 = ecx_7[2];
                                    x87_r7_17 - temp13_1;
                                    result = (x87_r7_17 < temp13_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_17, temp13_1) ? 1 : 0) << 0xa
                                        | (x87_r7_17 == temp13_1 ? 1 : 0) << 0xe;

                                    if (*(&result + 1) & 1)
                                        break;
                                }

                                int32_t __saved_edi;
                                double var_480;
                                int16_t* var_410;

                                if (*(a1 + 0x5b4))
                                {
                                    char var_50d_2 = 1;
                                    int32_t var_518_2 = 0;
                                    float* esi_6 = result_2[7];
                                    float* var_4cc_3 = esi_6;
                                    int32_t var_198[0x64];
                                    var_198[0] = esi_6;
                                    long double x87_r7_273 = *var_448 - *(a1 + 0x20);
                                    long double x87_r6_125 = var_448[1] - *(a1 + 0x28);
                                    long double x87_r5_51 = var_448[2] - *(a1 + 0x30);
                                    float var_3d0_1 = x87_r7_273 * *(a1 + 0x520)
                                        + x87_r5_51 * *(a1 + 0x528)
                                        + x87_r6_125 * *(a1 + 0x524);
                                    float var_528_2 = var_3d0_1;
                                    float var_3cc_1 = x87_r7_273 * *(a1 + 0x52c)
                                        + x87_r5_51 * *(a1 + 0x534)
                                        + x87_r6_125 * *(a1 + 0x530);
                                    float var_3c8_1 = x87_r6_125 * *(a1 + 0x53c)
                                        + x87_r7_273 * *(a1 + 0x538)
                                        + x87_r5_51 * *(a1 + 0x540);
                                    long double x87_r7_279 =
                                        (*(a1 + 0xfc) + *(a1 + 0x100)) * 0.5f;
                                    float var_528_3 = x87_r7_279 + var_3d0_1;
                                    long double x87_r6_131 = *var_470 - *(a1 + 0x20);
                                    long double x87_r5_57 = var_470[1] - *(a1 + 0x28);
                                    long double x87_r4_39 = var_470[2] - *(a1 + 0x30);
                                    float var_3e8_1 = x87_r6_131 * *(a1 + 0x520)
                                        + x87_r4_39 * *(a1 + 0x528)
                                        + x87_r5_57 * *(a1 + 0x524);
                                    float var_490_2 = var_3e8_1;
                                    float var_3e4_1 = x87_r6_131 * *(a1 + 0x52c)
                                        + x87_r4_39 * *(a1 + 0x534)
                                        + x87_r5_57 * *(a1 + 0x530);
                                    float var_3e0_1 = x87_r6_131 * *(a1 + 0x538)
                                        + x87_r4_39 * *(a1 + 0x540)
                                        + x87_r5_57 * *(a1 + 0x53c);
                                    float var_490_3 = x87_r7_279 + var_3e8_1;
                                    float var_444_3 = sub_4b32b0(var_448, var_470);
                                    int16_t eax_72;
                                    eax_72 = var_519_1;
                                    float var_4fc_3 = var_490_3;
                                    float var_4f8_3 = var_3e4_1;
                                    long double x87_r7_291;

                                    if (!eax_72)
                                        x87_r7_291 = var_3e0_1;
                                    else
                                    {
                                        long double x87_r7_283 = *(result_1 + 8) - *(a1 + 0x20);
                                        long double x87_r6_137 =
                                            *(result_1 + 0x10) - *(a1 + 0x28);
                                        long double x87_r5_60 = *(result_1 + 0x18) - *(a1 + 0x30);
                                        float var_3b8_1 = x87_r5_60 * *(a1 + 0x88)
                                            + x87_r6_137 * *(a1 + 0x7c)
                                            + x87_r7_283 * *(a1 + 0x70);
                                        float var_4fc_4 = var_3b8_1;
                                        var_4fc_3 = var_3b8_1 / *(a1 + 0x98);
                                        var_4f8_3 = (x87_r5_60 * *(a1 + 0x8c)
                                            + x87_r6_137 * *(a1 + 0x80)
                                            + x87_r7_283 * *(a1 + 0x74)) / *(a1 + 0x98);
                                        x87_r7_291 = (x87_r5_60 * *(a1 + 0x90)
                                            + x87_r6_137 * *(a1 + 0x84)
                                            + x87_r7_283 * *(a1 + 0x78)) / *(a1 + 0x98);
                                        long double x87_r6_143 = var_4f8_3 - var_3cc_1;
                                        long double x87_r5_65 = var_4fc_3 - var_528_3;
                                        long double x87_r4_53 = x87_r7_291 - var_3c8_1;
                                        var_480 = sqrtl(x87_r5_65 * x87_r5_65
                                            + x87_r6_143 * x87_r6_143 + x87_r4_53 * x87_r4_53);
                                    }

                                    long double x87_r6_145 = var_528_3;
                                    long double temp15_1 = var_4fc_3;
                                    x87_r6_145 - temp15_1;
                                    long double x87_r6_146;

                                    x87_r6_146 = !(*(&((x87_r6_145 < temp15_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_145, temp15_1) ? 1 : 0) << 0xa
                                        | (x87_r6_145 == temp15_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                        ? var_4fc_3 : var_528_3;

                                    float var_4e4_2 = x87_r6_146 - 0.100000001f;
                                    long double x87_r6_148 = var_3cc_1;
                                    long double temp17_1 = var_4f8_3;
                                    x87_r6_148 - temp17_1;
                                    long double x87_r6_149;

                                    x87_r6_149 = !(*(&((x87_r6_148 < temp17_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_148, temp17_1) ? 1 : 0) << 0xa
                                        | (x87_r6_148 == temp17_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                        ? var_4f8_3 : var_3cc_1;

                                    float var_4e0_2 = x87_r6_149 - 0.100000001f;
                                    long double x87_r6_151 = var_3c8_1;
                                    x87_r6_151 - x87_r7_291;
                                    long double x87_r6_152;

                                    x87_r6_152 = !(*(&((x87_r6_151 < x87_r7_291 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_151, x87_r7_291) ? 1 : 0) << 0xa
                                        | (x87_r6_151 == x87_r7_291 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                        ? x87_r7_291 : var_3c8_1;

                                    float var_4dc_2 = x87_r6_152 - 0.100000001f;
                                    long double x87_r6_154 = var_528_3;
                                    long double temp20_1 = var_4fc_3;
                                    x87_r6_154 - temp20_1;
                                    long double x87_r6_155;

                                    x87_r6_155 = *(&((x87_r6_154 < temp20_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_154, temp20_1) ? 1 : 0) << 0xa
                                        | (x87_r6_154 == temp20_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41
                                        ? var_4fc_3 : var_528_3;

                                    float var_4f0_2 = x87_r6_155 + 0.100000001f;
                                    long double x87_r6_157 = var_3cc_1;
                                    long double temp22_1 = var_4f8_3;
                                    x87_r6_157 - temp22_1;
                                    long double x87_r6_158;

                                    x87_r6_158 = *(&((x87_r6_157 < temp22_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_157, temp22_1) ? 1 : 0) << 0xa
                                        | (x87_r6_157 == temp22_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41
                                        ? var_4f8_3 : var_3cc_1;

                                    float var_4ec_2 = x87_r6_158 + 0.100000001f;
                                    long double x87_r6_160 = var_3c8_1;
                                    x87_r6_160 - x87_r7_291;
                                    eax_72 = (x87_r6_160 < x87_r7_291 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_160, x87_r7_291) ? 1 : 0) << 0xa
                                        | (x87_r6_160 == x87_r7_291 ? 1 : 0) << 0xe | 0x3800;

                                    if (!(*(&eax_72 + 1) & 0x41))
                                        x87_r7_291 = var_3c8_1;

                                    float var_4fc_5 = var_490_3;
                                    float var_4f4_6 = var_3e0_1;
                                    float var_4f8_5 = var_3e4_1;
                                    float var_4e8_2 = x87_r7_291 + 0.100000001f;
                                    long double x87_r7_295 = var_3e4_1 - var_3cc_1;
                                    double var_440_2 = x87_r7_295;
                                    long double x87_r6_163 = var_490_3 - var_528_3;
                                    long double x87_r4_56 = var_3e0_1 - var_3c8_1;
                                    float var_4b0_5 = x87_r4_56;
                                    double var_370 = 1.0 / (x87_r4_56 * x87_r4_56
                                        + x87_r6_163 * x87_r6_163 + var_440_2 * var_440_2);
                                    float var_4c8_2 = x87_r6_163;
                                    float var_4c4_2 = x87_r7_295;
                                    long double x87_r7_296 = var_4c4_2;
                                    long double temp24_1 = 0f;
                                    x87_r7_296 - temp24_1;

                                    if (!(*(&((x87_r7_296 < temp24_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_296, temp24_1) ? 1 : 0) << 0xa
                                            | (x87_r7_296 == temp24_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        float var_4b0_7 = var_4c4_2;
                                    else
                                        float var_4b0_6 = -(var_4c4_2);

                                    long double x87_r7_299 = var_4c8_2;
                                    long double temp25_1 = 0f;
                                    x87_r7_299 - temp25_1;

                                    if (!(*(&((x87_r7_299 < temp25_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_299, temp25_1) ? 1 : 0) << 0xa
                                            | (x87_r7_299 == temp25_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        float var_4b0_9 = var_4c8_2;
                                    else
                                        float var_4b0_8 = -(var_4c8_2);

                                    if (result_2[3])
                                    {
                                        while (true)
                                        {
                                            int32_t edx_38 = var_518_2;

                                            while (true)
                                            {
                                                int16_t i;
                                                i = var_50d_2;

                                                if (!i)
                                                {
                                                    int16_t esi_7 = *(esi_6 + 0x16);

                                                    if (!esi_7)
                                                    {
                                                        int32_t temp28_1 = edx_38;
                                                        edx_38 -= 1;
                                                        var_518_2 = edx_38;

                                                        if (temp28_1 - 1 >= 0)
                                                        {
                                                            esi_6 = var_198[edx_38];
                                                            continue;
                                                        }

                                                        i = var_505_1;

                                                        if (i)
                                                        {
                                                            float var_3f4_1 = var_4fc_5;
                                                            long double x87_r7_478 = var_4fc_5
                                                                - (*(a1 + 0xfc) + *(a1 + 0x100))
                                                                * 0.5f;
                                                            float var_330_1 =
                                                                var_4f4_6 * *(a1 + 0x84)
                                                                + var_4f8_5 * *(a1 + 0x80)
                                                                + x87_r7_478 * *(a1 + 0x7c);
                                                            long double x87_r7_480 =
                                                                var_4f4_6 * *(a1 + 0x90)
                                                                + var_4f8_5 * *(a1 + 0x8c)
                                                                + x87_r7_478 * *(a1 + 0x88);
                                                            long double x87_r6_278 =
                                                                var_4f4_6 * *(a1 + 0x78)
                                                                + var_4f8_5 * *(a1 + 0x74)
                                                                + x87_r7_478 * *(a1 + 0x70)
                                                                + *(a1 + 0x20);
                                                            double var_358 = x87_r6_278;
                                                            double var_350_1 =
                                                                var_330_1 + *(a1 + 0x28);
                                                            double var_348_1 =
                                                                x87_r7_480 + *(a1 + 0x30);
                                                            var_480 = sub_4b32b0(var_448, &var_358);
                                                            long double x87_r7_483;
                                                            long double temp38_1;

                                                            if (result_1[0x16])
                                                            {
                                                                x87_r7_483 = var_480;
                                                                temp38_1 = *(result_1 + 0x60);
                                                                x87_r7_483 - temp38_1;
                                                            }

                                                            if (!result_1[0x16] || *(&(
                                                                (x87_r7_483 < temp38_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(x87_r7_483, temp38_1) ? 1 : 0)
                                                                << 0xa
                                                                | (x87_r7_483 == temp38_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1)
                                                            {
                                                                int32_t eax_98 = 0;
                                                                int32_t ecx_51 = 0;
                                                                eax_98 = *var_410;
                                                                ecx_51 = var_410[1];
                                                                int32_t edx_48 = 0;
                                                                edx_48 = var_410[2];
                                                                float* eax_100 = (eax_98 << 4) + ecx_3;
                                                                float* ecx_53 = (ecx_51 << 4) + ecx_3;
                                                                float* edx_50 = (edx_48 << 4) + ecx_3;
                                                                int32_t esi_10 = 0;
                                                                esi_10 = var_410[3];
                                                                int16_t esi_13 =
                                                                    *(result_2[6] + esi_10 * 0xc + 8);
                                                                int32_t esi_15;

                                                                if (esi_13 != 0xffff)
                                                                    esi_15 = *(*(a1 + 0x68)
                                                                        + (esi_13 << 2) + 0xd3c);
                                                                else
                                                                    esi_15 = *(*(a1 + 0x68) + 0xd40);

                                                                long double x87_r7_485 =
                                                                    *edx_50 - *eax_100;
                                                                long double x87_r6_282 =
                                                                    edx_50[1] - eax_100[1];
                                                                long double x87_r5_112 =
                                                                    edx_50[2] - eax_100[2];
                                                                float var_408_1 = *ecx_53 - *eax_100;
                                                                float var_404_1 =
                                                                    ecx_53[1] - eax_100[1];
                                                                float var_400_1 =
                                                                    ecx_53[2] - eax_100[2];
                                                                float var_37c_1 =
                                                                    x87_r5_112 * *(a1 + 0x78)
                                                                    + x87_r7_485 * *(a1 + 0x70)
                                                                    + x87_r6_282 * *(a1 + 0x74);
                                                                float var_378_1 =
                                                                    x87_r5_112 * *(a1 + 0x84)
                                                                    + x87_r7_485 * *(a1 + 0x7c)
                                                                    + x87_r6_282 * *(a1 + 0x80);
                                                                long double x87_r7_488 =
                                                                    x87_r5_112 * *(a1 + 0x90)
                                                                    + x87_r7_485 * *(a1 + 0x88)
                                                                    + x87_r6_282 * *(a1 + 0x8c);
                                                                float var_3ac_1 =
                                                                    var_400_1 * *(a1 + 0x78)
                                                                    + var_408_1 * *(a1 + 0x70)
                                                                    + var_404_1 * *(a1 + 0x74);
                                                                float var_3a8_1 =
                                                                    var_400_1 * *(a1 + 0x84)
                                                                    + var_408_1 * *(a1 + 0x7c)
                                                                    + var_404_1 * *(a1 + 0x80);
                                                                long double x87_r6_295 =
                                                                    var_400_1 * *(a1 + 0x90)
                                                                    + var_408_1 * *(a1 + 0x88)
                                                                    + var_404_1 * *(a1 + 0x8c);
                                                                result_1[0xe] = x87_r6_295 * var_378_1
                                                                    - var_3a8_1 * x87_r7_488;
                                                                result_1[0xf] = -((
                                                                    x87_r6_295 * var_37c_1
                                                                    - var_3ac_1 * x87_r7_488));
                                                                result_1[0x10] = var_3a8_1 * var_37c_1
                                                                    - var_3ac_1 * var_378_1;

                                                                if (*(a1 + 0x5b5))
                                                                {
                                                                    result_1[0xe] = -(result_1[0xe]);
                                                                    result_1[0xf] = -(result_1[0xf]);
                                                                    result_1[0x10] = -(result_1[0x10]);
                                                                }

                                                                void** result_4 = result_1;
                                                                long double x87_r7_499 = var_358;
                                                                int32_t* edx_53 = &result_4[0xb];
                                                                *edx_53 = result_1[0xe];
                                                                int32_t ecx_55 = result_1[0x10];
                                                                edx_53[1] = result_1[0xf];
                                                                edx_53[2] = ecx_55;
                                                                result_4[8] =
                                                                    x87_r7_499 - *(a1 + 0x20);
                                                                result_4[9] =
                                                                    var_350_1 - *(a1 + 0x28);
                                                                long double x87_r7_504 =
                                                                    var_348_1 - *(a1 + 0x30);
                                                                int32_t ecx_56 = memcpy(
                                                                    &result_4[2], &var_358, 0x18);
                                                                result_4[0xa] = x87_r7_504;
                                                                ecx_56 = var_531_1;
                                                                edx_53 = ecx_56;
                                                                *result_4 = a1;
                                                                char temp84_1 = edx_53;
                                                                edx_53 = -(edx_53);
                                                                char temp85_1 = ecx_56;
                                                                ecx_56 = -(ecx_56);
                                                                result_4[0x13] =
                                                                    (edx_53 - edx_53) & esi_15;
                                                                result_4[0x14] =
                                                                    ~(ecx_56 - ecx_56) & esi_15;
                                                                result_4[0x15] = 1;
                                                                result_4[0x16] = 1;
                                                                result_4[0x18] = var_480;
                                                                result_4[0x19] = *(&var_480 + 4);
                                                                result_4[0x12] =
                                                                    (var_410 - result_2[4]) >> 3;
                                                            }
                                                        }

                                                        goto label_4e3f44;
                                                    }
                                                    else
                                                    {
                                                        uint32_t eax_79 = esi_7 * 3;
                                                        long double x87_r7_303 =
                                                            var_4cc_3[eax_79 * 2] - var_528_3;
                                                        esi_6 = &var_4cc_3[eax_79 * 2];
                                                        long double x87_r6_165 =
                                                            var_4cc_3[eax_79 * 2 + 1] - var_3cc_1;
                                                        long double x87_r5_71 =
                                                            esi_6[2] - var_3c8_1;
                                                        var_198[edx_38] = esi_6;
                                                        double var_4a0_5 = x87_r6_165;
                                                        double var_440_3 = x87_r7_303;
                                                        double var_530_5 = x87_r5_71;
                                                        long double x87_r7_306 =
                                                            x87_r6_165 * var_4c4_2
                                                            + x87_r7_303 * var_4c8_2
                                                            + x87_r5_71 * var_4b0_5;
                                                        float var_514_4 = esi_6[3];
                                                        long double x87_r7_311 =
                                                            var_440_3 * var_440_3
                                                            + var_4a0_5 * var_4a0_5
                                                            + var_530_5 * var_530_5
                                                            - x87_r7_306 * x87_r7_306 * var_370;
                                                        long double x87_r6_178 =
                                                            var_514_4 * var_514_4;
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
                                                                *esi_6 + esi_6[3];
                                                            long double temp29_1 = var_4e4_2;
                                                            x87_r7_313 - temp29_1;

                                                            if (*(&(
                                                                    (x87_r7_313 < temp29_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(x87_r7_313, temp29_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (x87_r7_313 == temp29_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 1)
                                                                continue;
                                                            else
                                                            {
                                                                long double x87_r7_315 =
                                                                    esi_6[1] + esi_6[3];
                                                                long double temp33_1 = var_4e0_2;
                                                                x87_r7_315 - temp33_1;

                                                                if (*(&(
                                                                        (x87_r7_315 < temp33_1 ? 1 : 0) << 8 | (
                                                                        FCMP_UO(x87_r7_315, temp33_1) ? 1 : 0)
                                                                        << 0xa
                                                                        | (x87_r7_315 == temp33_1 ? 1 : 0)
                                                                        << 0xe) + 1) & 1)
                                                                    continue;
                                                                else
                                                                {
                                                                    long double x87_r7_317 =
                                                                        esi_6[2] + esi_6[3];
                                                                    long double temp39_1 = var_4dc_2;
                                                                    x87_r7_317 - temp39_1;

                                                                    if (*(&(
                                                                            (x87_r7_317 < temp39_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(x87_r7_317, temp39_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (x87_r7_317 == temp39_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 1)
                                                                        continue;
                                                                    else
                                                                    {
                                                                        long double x87_r7_319 =
                                                                            *esi_6 - esi_6[3];
                                                                        long double temp46_1 = var_4f0_2;
                                                                        x87_r7_319 - temp46_1;

                                                                        if (!(*(&(
                                                                                (x87_r7_319 < temp46_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_319, temp46_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_319 == temp46_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41))
                                                                            continue;
                                                                        else
                                                                        {
                                                                            long double x87_r7_321 =
                                                                                esi_6[1] - esi_6[3];
                                                                            long double temp55_1 = var_4ec_2;
                                                                            x87_r7_321 - temp55_1;

                                                                            if (!(*(&(
                                                                                    (x87_r7_321 < temp55_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(x87_r7_321, temp55_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_321 == temp55_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41))
                                                                                continue;
                                                                            else
                                                                            {
                                                                                long double x87_r7_323 =
                                                                                    esi_6[2] - esi_6[3];
                                                                                long double temp64_1 = var_4e8_2;
                                                                                x87_r7_323 - temp64_1;

                                                                                if (!(*(&(
                                                                                        (x87_r7_323 < temp64_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r7_323, temp64_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r7_323 == temp64_1 ? 1 : 0)
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

                                                i = esi_6[5];
                                                var_50d_2 = 0;

                                                if (i)
                                                {
                                                    float** ecx_39 = &(&__saved_edi)[edx_38 + 0xea];

                                                    do
                                                    {
                                                        ecx_39 = &ecx_39[1];
                                                        edx_38 += 1;
                                                        uint32_t eax_82 = i * 3;
                                                        long double x87_r7_325 =
                                                            var_4cc_3[eax_82 * 2] - var_528_3;
                                                        esi_6 = &var_4cc_3[eax_82 * 2];
                                                        long double x87_r6_180 =
                                                            var_4cc_3[eax_82 * 2 + 1] - var_3cc_1;
                                                        long double x87_r5_84 =
                                                            esi_6[2] - var_3c8_1;
                                                        *ecx_39 = esi_6;
                                                        double var_530_6 = x87_r5_84;
                                                        double var_4a0_6 = x87_r6_180;
                                                        double var_440_4 = x87_r7_325;
                                                        long double x87_r7_327 =
                                                            x87_r5_84 * var_4b0_5
                                                            + x87_r6_180 * var_4c4_2
                                                            + x87_r7_325 * var_4c8_2;
                                                        float var_514_5 = esi_6[3];
                                                        long double x87_r7_332 =
                                                            var_440_4 * var_440_4
                                                            + var_4a0_6 * var_4a0_6
                                                            + var_530_6 * var_530_6
                                                            - x87_r7_327 * x87_r7_327 * var_370;
                                                        long double x87_r6_195 =
                                                            var_514_5 * var_514_5;
                                                        x87_r6_195 - x87_r7_332;
                                                        i = (x87_r6_195 < x87_r7_332 ? 1 : 0) << 8
                                                            | (FCMP_UO(x87_r6_195, x87_r7_332) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r6_195 == x87_r7_332 ? 1 : 0)
                                                            << 0xe;

                                                        if (*(&i + 1) & 1)
                                                            break;

                                                        long double x87_r7_334 = *esi_6 + esi_6[3];
                                                        long double temp32_1 = var_4e4_2;
                                                        x87_r7_334 - temp32_1;
                                                        i = (x87_r7_334 < temp32_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_334, temp32_1) ? 1 : 0)
                                                            << 0xa | (x87_r7_334 == temp32_1 ? 1 : 0)
                                                            << 0xe;

                                                        if (*(&i + 1) & 1)
                                                            break;

                                                        long double x87_r7_336 =
                                                            esi_6[1] + esi_6[3];
                                                        long double temp37_1 = var_4e0_2;
                                                        x87_r7_336 - temp37_1;
                                                        i = (x87_r7_336 < temp37_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_336, temp37_1) ? 1 : 0)
                                                            << 0xa | (x87_r7_336 == temp37_1 ? 1 : 0)
                                                            << 0xe;

                                                        if (*(&i + 1) & 1)
                                                            break;

                                                        long double x87_r7_338 =
                                                            esi_6[2] + esi_6[3];
                                                        long double temp45_1 = var_4dc_2;
                                                        x87_r7_338 - temp45_1;
                                                        i = (x87_r7_338 < temp45_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_338, temp45_1) ? 1 : 0)
                                                            << 0xa | (x87_r7_338 == temp45_1 ? 1 : 0)
                                                            << 0xe;

                                                        if (*(&i + 1) & 1)
                                                            break;

                                                        long double x87_r7_340 = *esi_6 - esi_6[3];
                                                        long double temp54_1 = var_4f0_2;
                                                        x87_r7_340 - temp54_1;
                                                        i = (x87_r7_340 < temp54_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_340, temp54_1) ? 1 : 0)
                                                            << 0xa | (x87_r7_340 == temp54_1 ? 1 : 0)
                                                            << 0xe;

                                                        if (!(*(&i + 1) & 0x41))
                                                            break;

                                                        long double x87_r7_342 =
                                                            esi_6[1] - esi_6[3];
                                                        long double temp63_1 = var_4ec_2;
                                                        x87_r7_342 - temp63_1;
                                                        i = (x87_r7_342 < temp63_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_342, temp63_1) ? 1 : 0)
                                                            << 0xa | (x87_r7_342 == temp63_1 ? 1 : 0)
                                                            << 0xe;

                                                        if (!(*(&i + 1) & 0x41))
                                                            break;

                                                        long double x87_r7_344 =
                                                            esi_6[2] - esi_6[3];
                                                        long double temp73_1 = var_4e8_2;
                                                        x87_r7_344 - temp73_1;
                                                        i = (x87_r7_344 < temp73_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_344, temp73_1) ? 1 : 0)
                                                            << 0xa | (x87_r7_344 == temp73_1 ? 1 : 0)
                                                            << 0xe;

                                                        if (!(*(&i + 1) & 0x41))
                                                            break;

                                                        i = esi_6[5];
                                                    } while (i);

                                                    var_518_2 = edx_38;
                                                }

                                                int16_t ecx_38 = *(esi_6 + 0x12);

                                                if (ecx_38)
                                                {
                                                    int32_t eax_78 = 0;
                                                    eax_78 = esi_6[4];
                                                    int32_t var_4b0_10 = eax_78;
                                                    int16_t* edi_17 = result_2[4] + (eax_78 << 3);
                                                    int16_t* var_474_2 = edi_17;

                                                    if (eax_78 < ecx_38 + eax_78)
                                                    {
                                                        bool cond:10_1;

                                                        do
                                                        {
                                                            int32_t ecx_41 = 0;
                                                            ecx_41 = *edi_17;
                                                            int32_t edx_39 = 0;
                                                            edx_39 = edi_17[1];
                                                            long double x87_r7_345 = var_4e4_2;
                                                            int32_t ecx_42 = ecx_41 << 4;
                                                            long double temp31_1 =
                                                                *(ecx_42 + ecx_3);
                                                            x87_r7_345 - temp31_1;
                                                            float* ecx_43 = ecx_42 + ecx_3;
                                                            float* edx_41 = (edx_39 << 4) + ecx_3;
                                                            int32_t eax_84 = 0;
                                                            eax_84 = edi_17[2];
                                                            float* edi_20 = (eax_84 << 4) + ecx_3;

                                                            if (*(&(
                                                                (x87_r7_345 < temp31_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(x87_r7_345, temp31_1) ? 1 : 0)
                                                                << 0xa
                                                                | (x87_r7_345 == temp31_1 ? 1 : 0)
                                                                << 0xe) + 1) & 0x41)
                                                            {
                                                            label_4e3271:
                                                                long double x87_r7_348 = var_4e0_2;
                                                                long double temp35_1 = ecx_43[1];
                                                                x87_r7_348 - temp35_1;

                                                                if (*(&(
                                                                    (x87_r7_348 < temp35_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(x87_r7_348, temp35_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (x87_r7_348 == temp35_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 0x41)
                                                                {
                                                                label_4e329f:
                                                                    long double x87_r7_351 = var_4dc_2;
                                                                    long double temp42_1 = ecx_43[2];
                                                                    x87_r7_351 - temp42_1;

                                                                    if (*(&(
                                                                        (x87_r7_351 < temp42_1 ? 1 : 0) << 8 | (
                                                                        FCMP_UO(x87_r7_351, temp42_1) ? 1 : 0)
                                                                        << 0xa
                                                                        | (x87_r7_351 == temp42_1 ? 1 : 0)
                                                                        << 0xe) + 1) & 0x41)
                                                                    {
                                                                    label_4e32cd:
                                                                        long double x87_r7_354 = var_4f0_2;
                                                                        long double temp51_1 = *ecx_43;
                                                                        x87_r7_354 - temp51_1;

                                                                        if (!(*(&(
                                                                            (x87_r7_354 < temp51_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(x87_r7_354, temp51_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (x87_r7_354 == temp51_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 1))
                                                                        {
                                                                        label_4e32f8:
                                                                            long double x87_r7_357 = var_4ec_2;
                                                                            long double temp60_1 = ecx_43[1];
                                                                            x87_r7_357 - temp60_1;

                                                                            if (!(*(&(
                                                                                (x87_r7_357 < temp60_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_357, temp60_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_357 == temp60_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 1))
                                                                            {
                                                                            label_4e3326:
                                                                                long double x87_r7_360 = var_4e8_2;
                                                                                long double temp70_1 = ecx_43[2];
                                                                                x87_r7_360 - temp70_1;

                                                                                if (!(*(&(
                                                                                    (x87_r7_360 < temp70_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(x87_r7_360, temp70_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_360 == temp70_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 1))
                                                                                {
                                                                                label_4e3358:
                                                                                    float var_4bc_1 = *edi_20 - *ecx_43;
                                                                                    float var_4b8_1 = edi_20[1] - ecx_43[1];
                                                                                    float var_4b4_1 = edi_20[2] - ecx_43[2];
                                                                                    float var_42c_1 = *edx_41 - *ecx_43;
                                                                                    float var_428_1 = edx_41[1] - ecx_43[1];
                                                                                    long double x87_r7_374 =
                                                                                        edx_41[2] - ecx_43[2];
                                                                                    float var_424_1 = x87_r7_374;
                                                                                    float var_514_6 = x87_r7_374 * var_4b8_1
                                                                                        - var_428_1 * var_4b4_1;
                                                                                    long double x87_r7_379 =
                                                                                        var_424_1 * var_4bc_1
                                                                                        - var_42c_1 * var_4b4_1;
                                                                                    float var_434_1 = -(x87_r7_379);
                                                                                    float var_504_3 = var_428_1 * var_4bc_1
                                                                                        - var_42c_1 * var_4b8_1;
                                                                                    long double x87_r7_387 =
                                                                                        var_504_3 * var_4b0_5
                                                                                        + var_434_1 * var_4c4_2
                                                                                        + var_514_6 * var_4c8_2;
                                                                                    double var_4a0_7 = x87_r7_387;
                                                                                    long double temp81_1 = 0.0;
                                                                                    x87_r7_387 - temp81_1;

                                                                                    if (!(*(&(
                                                                                        (x87_r7_387 < temp81_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r7_387, temp81_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r7_387 == temp81_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 0x40))
                                                                                    {
                                                                                        long double x87_r7_393 = (
                                                                                            (*ecx_43 - var_528_3) * var_514_6
                                                                                            + (ecx_43[2] - var_3c8_1) * var_504_3
                                                                                            + (ecx_43[1] - var_3cc_1) * var_434_1)
                                                                                            / var_4a0_7;
                                                                                        float var_50c_4 = x87_r7_393;
                                                                                        long double temp90_1 = 0f;
                                                                                        x87_r7_393 - temp90_1;

                                                                                        if (!(*(&(
                                                                                            (x87_r7_393 < temp90_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r7_393, temp90_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r7_393 == temp90_1 ? 1 : 0)
                                                                                            << 0xe) + 1) & 1))
                                                                                        {
                                                                                            long double x87_r7_394 = var_50c_4;
                                                                                            long double temp95_1 = 1f;
                                                                                            x87_r7_394 - temp95_1;

                                                                                            if (*(&(
                                                                                                (x87_r7_394 < temp95_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r7_394, temp95_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r7_394 == temp95_1 ? 1 : 0)
                                                                                                << 0xe) + 1) & 0x41)
                                                                                            {
                                                                                                float var_460_1 =
                                                                                                    var_50c_4 * var_4c8_2 + var_528_3;
                                                                                                float var_45c_1 =
                                                                                                    var_50c_4 * var_4c4_2 + var_3cc_1;
                                                                                                float var_458_1 =
                                                                                                    var_50c_4 * var_4b0_5 + var_3c8_1;
                                                                                                long double x87_r7_404 = var_514_6;
                                                                                                long double temp98_1 = 0f;
                                                                                                x87_r7_404 - temp98_1;
                                                                                                float var_340_1;

                                                                                                var_340_1 = !(*(&(
                                                                                                    (x87_r7_404 < temp98_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(x87_r7_404, temp98_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r7_404 == temp98_1 ? 1 : 0)
                                                                                                    << 0xe) + 1) & 1) ? var_514_6
                                                                                                    : -(var_514_6);

                                                                                                long double x87_r7_407 = var_434_1;
                                                                                                long double temp102_1 = 0f;
                                                                                                x87_r7_407 - temp102_1;
                                                                                                long double x87_r7_408 = var_434_1;

                                                                                                if (*(&(
                                                                                                        (x87_r7_407 < temp102_1 ? 1 : 0) << 8
                                                                                                        | (FCMP_UO(x87_r7_407, temp102_1) ? 1
                                                                                                        : 0) << 0xa
                                                                                                        | (x87_r7_407 == temp102_1 ? 1 : 0)
                                                                                                        << 0xe | 0x3800) + 1) & 1)
                                                                                                    x87_r7_408 = -(x87_r7_408);

                                                                                                long double x87_r6_212 = var_504_3;
                                                                                                long double temp104_1 = 0f;
                                                                                                x87_r6_212 - temp104_1;
                                                                                                long double x87_r6_213 = var_504_3;

                                                                                                if (*(&(
                                                                                                        (x87_r6_212 < temp104_1 ? 1 : 0) << 8
                                                                                                        | (FCMP_UO(x87_r6_212, temp104_1) ? 1
                                                                                                        : 0) << 0xa
                                                                                                        | (x87_r6_212 == temp104_1 ? 1 : 0)
                                                                                                        << 0xe | 0x3000) + 1) & 1)
                                                                                                    x87_r6_213 = -(x87_r6_213);

                                                                                                long double x87_r5_93 = var_340_1;
                                                                                                x87_r5_93 - x87_r7_408;
                                                                                                long double x87_r5_94;

                                                                                                if (!(*(&(
                                                                                                    (x87_r5_93 < x87_r7_408 ? 1 : 0) << 8
                                                                                                    | (FCMP_UO(x87_r5_93, x87_r7_408) ? 1
                                                                                                    : 0) << 0xa
                                                                                                    | (x87_r5_93 == x87_r7_408 ? 1 : 0)
                                                                                                    << 0xe | 0x3000) + 1) & 0x41))
                                                                                                {
                                                                                                    x87_r5_94 = var_340_1;
                                                                                                    x87_r5_94 - x87_r6_213;
                                                                                                }

                                                                                                double var_530_7;
                                                                                                float var_514_7;
                                                                                                long double x87_r7_410;

                                                                                                if (*(&(
                                                                                                    (x87_r5_93 < x87_r7_408 ? 1 : 0) << 8
                                                                                                    | (FCMP_UO(x87_r5_93, x87_r7_408) ? 1
                                                                                                    : 0) << 0xa
                                                                                                    | (x87_r5_93 == x87_r7_408 ? 1 : 0)
                                                                                                    << 0xe | 0x3000) + 1) & 0x41 || *(&(
