#include "00518CA0-Water_Setup.h"
/* 0x00518ca0 Water_Setup full linked: callers=0 callees=1 */
double* sub_518ca0(void* a1, int32_t* a2)

{
    int32_t* esi = a2;
    double* i_1 = nullptr;
    void* ebx = esi[8];
    double* edx = *esi;
    double* i = esi[1];

    if (esi[2] > 0)
    {
        double* var_80_1 = &i[2];

        do
        {
            long double x87_r7_1 = *edx;
            long double temp0_1 = *(a1 + 0x4be8);
            x87_r7_1 - temp0_1;

            if (!(*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double x87_r7_2 = *edx;
                long double temp1_1 = *(a1 + 0x4c00);
                x87_r7_2 - temp1_1;

                if (*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                {
                    long double x87_r7_3 = edx[1];
                    long double temp2_1 = *(a1 + 0x4bf0);
                    x87_r7_3 - temp2_1;

                    if (!(*(&((x87_r7_3 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_3, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        long double x87_r7_4 = edx[1];
                        long double temp3_1 = *(a1 + 0x4c08);
                        x87_r7_4 - temp3_1;

                        if (*(&((x87_r7_4 < temp3_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_4, temp3_1) ? 1 : 0) << 0xa
                            | (x87_r7_4 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            void* eax_1 = g_a44344;
                            int32_t var_40_1 = 0;
                            int32_t var_3c_1 = 0;
                            int32_t var_38_1 = 0x3f800000;
                            long double x87_r7_7 = *(a1 + 0x4b78) * 0.5f + *(a1 + 0x4b8c);
                            int32_t var_28_1 = *(eax_1 + 0xd3c);
                            int32_t var_70_1 = *edx;
                            double var_60_1 = x87_r7_7;
                            long double x87_r6_2 = edx[2] - x87_r7_7;
                            int32_t var_2c_1 = *(eax_1 + 0xd64);
                            int32_t var_68_1 = edx[1];
                            int32_t var_6c_1 = *(edx + 4);
                            long double temp4_1 = 0.0;
                            x87_r6_2 - temp4_1;
                            int32_t var_64_1 = *(edx + 0xc);

                            if (*(&((x87_r6_2 < temp4_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_2, temp4_1) ? 1 : 0) << 0xa
                                    | (x87_r6_2 == temp4_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                                x87_r6_2 = -(x87_r6_2);

                            long double temp5_1 = *var_80_1;
                            x87_r7_7 - temp5_1;
                            int32_t ecx_3;

                            ecx_3 = !(*(&((x87_r7_7 < temp5_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_7, temp5_1) ? 1 : 0) << 0xa
                                | (x87_r7_7 == temp5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0 : 1;

                            long double temp6_1 = edx[2];
                            x87_r7_7 - temp6_1;
                            int32_t eax_6;

                            eax_6 = !(*(&((x87_r7_7 < temp6_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_7, temp6_1) ? 1 : 0) << 0xa
                                | (x87_r7_7 == temp6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0 : 1;

                            if (ecx_3 != eax_6)
                            {
                                long double temp7_1;

                                if (*(ebx + 0x58))
                                {
                                    temp7_1 = *(ebx + 0x60);
                                    x87_r6_2 - temp7_1;
                                }

                                if (!*(ebx + 0x58) || *(&((x87_r6_2 < temp7_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_2, temp7_1) ? 1 : 0) << 0xa
                                    | (x87_r6_2 == temp7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                {
                                    long double x87_r7_8 = x87_r7_7 - edx[2];
                                    int32_t var_20_1 = 1;
                                    int32_t var_78 = 0;
                                    long double temp8_1 = 0.0;
                                    x87_r7_8 - temp8_1;

                                    if (*(&((x87_r7_8 < temp8_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_8, temp8_1) ? 1 : 0) << 0xa
                                            | (x87_r7_8 == temp8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                        x87_r7_8 = -(x87_r7_8);

                                    double var_18_1 = x87_r7_8;
                                    memcpy(ebx, &var_78, 0x70);
                                    esi = a2;
                                }
                            }
                        }
                    }
                }
            }

            edx = &edx[3];
            var_80_1 = &var_80_1[3];
            ebx += 0x70;
            i = i_1 + 1;
            i_1 = i;
        } while (i < esi[2]);
    }

    return i;
}
