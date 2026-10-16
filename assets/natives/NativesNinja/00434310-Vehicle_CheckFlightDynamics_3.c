#include "00434310-Vehicle_CheckFlightDynamics_3.h"
/* 0x00434310 Vehicle_CheckFlightDynamics_3 full linked: callers=1 callees=13 */
int32_t* Vehicle_CheckFlightDynamics_3(double* a1)

{
    int32_t* esi = nullptr;
    int32_t* var_318 = nullptr;
    int16_t eax = Vehicle_UpdateRudder_5();
    int32_t* i = QTask_DeleteTask_2(a1[0x1d], eax);
    int32_t* i_3 = i;
    int32_t* i_2 = nullptr;
    int32_t var_310 = 0xffffffff;
    int32_t var_30c = 0xffefffff;

    if (i_3)
    {
        void var_278;
        int32_t* var_328_1 = &var_278;
        void var_1f8;
        float* edi_1 = &var_1f8;
        i = nullptr;
        int32_t var_304;
        int32_t* var_320_1 = &var_304;
        float* var_324_1 = &var_1f8;
        int32_t* i_1 = nullptr;
        double* var_344;

        for (; i < 0x60; i = i_1)
        {
            int32_t var_33c_1 = 0;
            int32_t __saved_edi;
            var_344 = &__saved_edi + i + 0x60;
            WeaponType_UpdateAnim(var_344, i_3, var_33c_1);
            int32_t* i_4 = i_1;
            *edi_1 = *(&__saved_edi + i + 0x60);
            void var_2d0;
            edi_1[1] = *(&var_2d0 + i_4);
            void var_2c8;
            long double x87_r7_3 = *(&var_2c8 + i_4);
            edi_1[2] = x87_r7_3;
            float var_2e8_1 = x87_r7_3 * i_3[0x23] + i_3[0x20] * edi_1[1] + i_3[0x1d] * *edi_1;
            long double x87_r7_5 = x87_r7_3 * i_3[0x24] + i_3[0x21] * edi_1[1];
            long double x87_r6_12 = i_3[0x1e] * *edi_1;
            *edi_1 = x87_r7_3 * i_3[0x22] + i_3[0x1f] * edi_1[1] + i_3[0x1c] * *edi_1;
            edi_1[1] = var_2e8_1;
            long double x87_r7_7 = *(i_3 + 0xf0);
            edi_1[2] = x87_r7_5 + x87_r6_12;
            long double x87_r7_8 = x87_r7_7 + *edi_1;
            *var_328_1 = 0;
            var_328_1[1] = 0xc0c00000;
            *edi_1 = x87_r7_8;
            var_318 += 1;
            edi_1[1] = *(i_3 + 0xf8) + edi_1[1];
            edi_1[2] = *(i_3 + 0x100) + edi_1[2];
            *(&__saved_edi + i + 0x60) = *(i_3 + 0x20) + *(&__saved_edi + i + 0x60);
            *(&var_2d0 + i_4) = *(i_3 + 0x28) + *(&var_2d0 + i_4);
            *(&var_2c8 + i_4) = *(i_3 + 0x30) + *(&var_2c8 + i_4) + 8192.0;
            memcpy(&var_344 + i_4 + 0xec, &__saved_edi + i + 0x60, 0x18);
            void var_248;
            *(&var_248 + i_4) = *(&var_248 + i_4) - 8192.0;
            *var_320_1 = i_3;
            var_324_1 = &var_324_1[3];
            var_328_1 = &var_328_1[2];
            i_1 = &i_4[6];
            var_320_1 = &var_320_1[1];
            i = QTask_TriggerEvent_2(i_3, Vehicle_UpdateRudder_5());
            esi = var_318;
            i_3 = i;

            if (!i_3)
                break;

            edi_1 = var_324_1;
        }

        if (esi)
        {
            double* edi_5 = a1;
            int32_t var_33c_2 = 0xffffffff;
            void var_2e0;
            double* var_340_2 = &var_2e0;
            var_344 = 0xc;
            double* var_2dc_1 = edi_5;
            double var_2d8;
            double var_258[0x2];
            void var_1c8;
            i = sub_4cc2a0(Level_StartMission_4(), &var_1c8, &var_2d8, &var_258, esi, var_344,
                var_340_2, var_33c_2);

            if (esi > 0)
            {
                void var_168;
                double* ebx = &var_168;
                int32_t* var_328_2 = &var_1f8;
                double* ecx_5 = &var_278;
                double* var_320_2 = &var_278;
                int32_t* var_324_2 = esi;
                double var_2f4;
                bool cond:1_1;

                do
                {
                    if (ebx[-1])
                    {
                        long double x87_r7_22 = *ecx_5;
                        long double temp1_1 = 0.0;
                        x87_r7_22 - temp1_1;
                        long double x87_r7_23 = *ecx_5;

                        if (*(&((x87_r7_22 < temp1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_22, temp1_1) ? 1 : 0) << 0xa
                                | (x87_r7_22 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                            x87_r7_23 = -(x87_r7_23);

                        long double temp2_1 = *ebx;
                        x87_r7_23 - temp2_1;

                        if (!(*(&((x87_r7_23 < temp2_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_23, temp2_1) ? 1 : 0) << 0xa
                            | (x87_r7_23 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1))
                        {
                            long double x87_r7_25 = 8192.0 - *ebx;
                            long double x87_r6_13 = *ebx;
                            long double temp3_1 = 7577.6000000000004;
                            x87_r6_13 - temp3_1;
                            var_304 = 0;
                            int32_t var_300_1 = 0;
                            double* esi_4;

                            if (!(*(&((x87_r6_13 < temp3_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_13, temp3_1) ? 1 : 0) << 0xa
                                | (x87_r6_13 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                            {
                                esi_4 = a1;
                                float var_2fc_2 = x87_r7_25 * 0.0016276041666666667 *
                                    *(*(a1 + 0x1b4) + 8) * 17.8403549f;
                            }
                            else
                            {
                                esi_4 = a1;
                                float var_2fc_1 = ((7577.6001f - *ebx) * 0.0001319679f + 1f) *
                                    *(*(esi_4 + 0x1b4) + 8) * 17.8403549f;
                                long double x87_r7_34 = 7577.6000000000004 - *ebx;
                                long double x87_r6_14 = var_310;
                                x87_r6_14 - x87_r7_34;

                                if (!(*(&((x87_r6_14 < x87_r7_34 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_14, x87_r7_34) ? 1 : 0) << 0xa
                                        | (x87_r6_14 == x87_r7_34 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                    i_2 = 1;
                                else
                                {
                                    var_310 = x87_r7_34;
                                    i_2 = 1;
                                }
                            }

                            int32_t var_2f8_1 = *var_328_2;
                            var_2f4 = var_328_2[1];
                            *(&var_2f4 + 4) = var_328_2[2];
                            sub_4ecf50(&edi_5[0x1e], &var_304);
                            ecx_5 = var_320_2;
                            edi_5[0x21] = edi_5[0x21] * esi_4[0xe4] * 0.800000012f;
                            *(edi_5 + 0x10c) = *(edi_5 + 0x10c) * esi_4[0xe4] * 0.800000012f;
                            edi_5[0x24] = edi_5[0x24] * 0.980000019f;
                            *(edi_5 + 0x124) = *(edi_5 + 0x124) * 0.980000019f;
                            edi_5[0x25] = edi_5[0x25] * 0.980000019f;
                            edi_5 = a1;
                        }
                    }

                    ecx_5 = &ecx_5[1];
                    ebx = &ebx[0xe];
                    cond:1_1 = var_324_2 != 1;
                    var_320_2 = ecx_5;
                    var_328_2 = &var_328_2[3];
                    var_324_2 -= 1;
                } while (cond:1_1);
                i = i_2;

                if (i)
                {
                    memcpy(&var_304, &edi_5[4], 0x18);
                    double var_2f4_1 = var_2f4 + var_310;
                    long double x87_r7_53 = *(a1 + 0x9c);
                    long double x87_r6_15 = a1[0x14];
                    x87_r6_15 - x87_r7_53;
                    long double x87_r7_54;

                    if (!(*(&((x87_r6_15 < x87_r7_53 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_15, x87_r7_53) ? 1 : 0) << 0xa
                            | (x87_r6_15 == x87_r7_53 ? 1 : 0) << 0xe) + 1) & 1))
                        x87_r7_54 = a1[0x14];
                    else
                        x87_r7_54 = *(a1 + 0x9c);

                    long double x87_r6_16 = a1[0x13];
                    x87_r6_16 - x87_r7_54;
                    long double x87_r7_56;

                    if (*(&((x87_r6_16 < x87_r7_54 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_16, x87_r7_54) ? 1 : 0) << 0xa
                        | (x87_r6_16 == x87_r7_54 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    {
                        long double x87_r7_57 = *(a1 + 0x9c);
                        long double x87_r6_17 = a1[0x14];
                        x87_r6_17 - x87_r7_57;

                        if (!(*(&((x87_r6_17 < x87_r7_57 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_17, x87_r7_57) ? 1 : 0) << 0xa
                                | (x87_r6_17 == x87_r7_57 ? 1 : 0) << 0xe) + 1) & 1))
                            x87_r7_56 = a1[0x14];
                        else
                            x87_r7_56 = *(a1 + 0x9c);
                    }
                    else
                        x87_r7_56 = a1[0x13];

                    float var_33c_5 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_56;
                    double* var_340_4 = &var_304;
                    var_344 = a1;
                    return sub_4c6940(Level_StartMission_4(), var_344, var_340_4, var_33c_5);
                }
            }
        }
    }

    return i;
}
