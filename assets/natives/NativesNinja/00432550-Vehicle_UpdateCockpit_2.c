#include "00432550-Vehicle_UpdateCockpit_2.h"
/* 0x00432550 Vehicle_UpdateCockpit_2 full linked: callers=1 callees=13 */
int32_t* Vehicle_UpdateCockpit_2(void* a1)

{
    int32_t* esi = nullptr;
    int32_t* var_324 = nullptr;
    int16_t eax = Menu_LeaveMenus_18();
    void* edi = a1;
    int32_t* result = QTask_DeleteTask_2(*(edi + 0xe8), eax);
    int32_t* result_2 = result;
    int32_t i = 0;
    int32_t* result_1 = nullptr;
    int32_t var_310 = 0xffffffff;
    int32_t var_30c = 0xffefffff;
    *(edi + 0x1b8) = 0;

    if (result_2)
    {
        void var_2b4;
        result = &var_2b4;
        void var_2d8;
        double* var_320_1 = &var_2d8;
        float* var_318 = &var_2b4;
        double var_308;
        double var_2e8;

        while (i < 0x60)
        {
            int32_t __saved_edi;
            memcpy(&__saved_edi + i + 0x110, &result_2[8], 0x18);
            *(&__saved_edi + i + 0x120) = *(&__saved_edi + i + 0x120) + 8192.0;
            float* ecx_1 = result_2[0x4e];
            var_308 = *ecx_1;
            float* ecx_2 = var_318;
            var_2e8 = ecx_1[1];
            ecx_2[-1] = *(result_2 + 0xf0);
            *ecx_2 = *(result_2 + 0xf8);
            ecx_2[1] = *(result_2 + 0x100);
            double* ecx_3 = var_320_1;
            var_320_1 = &var_320_1[1];
            long double x87_r7_10 = -((var_308 + 8192.0));
            *ecx_3 = x87_r7_10;
            memcpy(&__saved_edi + i + 0xb0, &__saved_edi + i + 0x110, 0x18);
            void var_290;
            *(&var_290 + i + 0x18) = x87_r7_10 + *(&var_290 + i + 0x18);
            esi = var_324 + 1;
            var_324 = esi;
            var_318 = &var_318[3];
            result = QTask_TriggerEvent_2(result_2, Menu_LeaveMenus_18());
            edi = a1;
            result_2 = result;

            if (!result_2)
                break;

            i += 0x18;
            esi = var_324;
        }

        if (esi)
        {
            void* var_2dc_1 = edi;
            void var_2e0;
            double var_288[0xc];
            double var_228[0xc];
            void var_1c8;
            result = sub_4cc2a0(Level_StartMission_4(), &var_1c8, &var_228, &var_288, esi, 0xc,
                &var_2e0, 0xffffffff);

            if (esi > 0)
            {
                double* ecx_6 = &var_2d8;
                void var_2b8;
                int32_t* var_320_2 = &var_2b8;
                void var_168;
                double* ebx = &var_168;
                double* var_324_1 = &var_2d8;
                int32_t* var_31c_2 = esi;
                int32_t var_300;
                double var_2f0;
                bool cond:1_1;

                do
                {
                    if (ebx[-1])
                    {
                        long double x87_r7_12 = *ecx_6;
                        long double temp1_1 = 0.0;
                        x87_r7_12 - temp1_1;
                        long double x87_r7_13 = *ecx_6;

                        if (*(&((x87_r7_12 < temp1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_12, temp1_1) ? 1 : 0) << 0xa
                                | (x87_r7_12 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                            x87_r7_13 = -(x87_r7_13);

                        long double temp2_1 = *ebx;
                        x87_r7_13 - temp2_1;

                        if (!(*(&((x87_r7_13 < temp2_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_13, temp2_1) ? 1 : 0) << 0xa
                            | (x87_r7_13 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1))
                        {
                            long double x87_r7_14 = *ebx;
                            long double temp3_1 = 0.0;
                            x87_r7_14 - temp3_1;
                            long double x87_r7_15 = *ebx;

                            if (*(&((x87_r7_14 < temp3_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_14, temp3_1) ? 1 : 0) << 0xa
                                    | (x87_r7_14 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                x87_r7_15 = -(x87_r7_15);

                            var_300 = 0;
                            int32_t var_2fc_1 = 0;
                            var_318 = var_308 - (x87_r7_15 - 8192.0);
                            long double x87_r7_19 = var_2e8 + 8192.0;
                            long double temp4_1 = *ebx;
                            x87_r7_19 - temp4_1;

                            if (*(&((x87_r7_19 < temp4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_19, temp4_1) ? 1 : 0) << 0xa
                                | (x87_r7_19 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                            {
                                result_1 = nullptr;
                                float var_2f8_2 =
                                    var_318 / var_308 * *(*(edi + 0x1b4) + 8) * 11.1502218f;
                            }
                            else
                            {
                                long double x87_r6_2 = *ebx;
                                long double temp5_1 = 0.0;
                                x87_r6_2 - temp5_1;
                                long double x87_r6_3 = *ebx;
                                result_1 = 1;

                                if (*(&((x87_r6_2 < temp5_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_2, temp5_1) ? 1 : 0) << 0xa
                                        | (x87_r6_2 == temp5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                                    x87_r6_3 = -(x87_r6_3);

                                void* edx_1 = *(edi + 0x1b4);
                                var_318 = var_2e8 + 8192f;
                                float var_2f8_1 = ((var_318 - x87_r6_3) / var_318 + 1f) *
                                    *(edx_1 + 8) * 11.1502218f;
                                long double x87_r7_20 = x87_r7_19 - *ebx;
                                long double temp6_1 = var_310;
                                x87_r7_20 - temp6_1;

                                if (!(*(&((x87_r7_20 < temp6_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_20, temp6_1) ? 1 : 0) << 0xa
                                        | (x87_r7_20 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                                    var_310 = x87_r7_20;
                            }

                            int32_t var_2f4_1 = *var_320_2;
                            var_2f0 = var_320_2[1];
                            *(&var_2f0 + 4) = var_320_2[2];
                            sub_4ecf50(edi + 0xf0, &var_300);
                            ecx_6 = var_324_1;
                            *(edi + 0x1b8) += 1;
                            *(edi + 0x108) = *(edi + 0x108) * 0.949999988f;
                            *(edi + 0x10c) = *(edi + 0x10c) * 0.949999988f;
                            *(edi + 0x110) = *(edi + 0x110) * 0.970000029f;
                            *(edi + 0x120) = *(edi + 0x120) * 0.980000019f;
                            *(edi + 0x124) = *(edi + 0x124) * 0.980000019f;
                            *(edi + 0x128) = *(edi + 0x128) * 0.980000019f;
                        }
                    }

                    ecx_6 = &ecx_6[1];
                    ebx = &ebx[0xe];
                    cond:1_1 = var_31c_2 != 1;
                    var_324_1 = ecx_6;
                    var_320_2 = &var_320_2[3];
                    var_31c_2 -= 1;
                } while (cond:1_1);
                result = result_1;

                if (result)
                {
                    memcpy(&var_300, edi + 0x20, 0x18);
                    double var_2f0_1 = var_2f0 + var_310;
                    long double x87_r7_41 = *(a1 + 0x9c);
                    long double x87_r6_9 = *(a1 + 0xa0);
                    x87_r6_9 - x87_r7_41;
                    long double x87_r7_42;

                    if (!(*(&((x87_r6_9 < x87_r7_41 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_9, x87_r7_41) ? 1 : 0) << 0xa
                            | (x87_r6_9 == x87_r7_41 ? 1 : 0) << 0xe) + 1) & 1))
                        x87_r7_42 = *(a1 + 0xa0);
                    else
                        x87_r7_42 = *(a1 + 0x9c);

                    long double x87_r6_10 = *(a1 + 0x98);
                    x87_r6_10 - x87_r7_42;
                    long double x87_r7_44;

                    if (*(&((x87_r6_10 < x87_r7_42 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_10, x87_r7_42) ? 1 : 0) << 0xa
                        | (x87_r6_10 == x87_r7_42 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    {
                        long double x87_r7_45 = *(a1 + 0x9c);
                        long double x87_r6_11 = *(a1 + 0xa0);
                        x87_r6_11 - x87_r7_45;

                        if (!(*(&((x87_r6_11 < x87_r7_45 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_11, x87_r7_45) ? 1 : 0) << 0xa
                                | (x87_r6_11 == x87_r7_45 ? 1 : 0) << 0xe) + 1) & 1))
                            x87_r7_44 = *(a1 + 0xa0);
                        else
                            x87_r7_44 = *(a1 + 0x9c);
                    }
                    else
                        x87_r7_44 = *(a1 + 0x98);

                    float var_33c_4 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_44;
                    return sub_4c6940(Level_StartMission_4(), a1, &var_300, var_33c_4);
                }
            }
        }
    }

    return result;
}
