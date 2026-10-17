// Original IGI.EXE function: Vehicle_CheckFlightDynamics_3 (VA 0x00434310; static CFG gate PASS, CFG score 0.949).
#include "Vehicle_CheckFlightDynamics_3.h"
int32_t* Vehicle_CheckFlightDynamics_3(double* context)

{
    int32_t* source_val = nullptr;
    int32_t* item_318 = nullptr;
    int16_t data_val = Vehicle_UpdateRudder_5();
    int32_t* i = QTask_DeleteTask_2(context[0x1d], data_val);
    int32_t* i_3 = i;
    int32_t* i_2 = nullptr;
    int32_t item_310 = 0xffffffff;
    int32_t item_30c = 0xffefffff;

    if (i_3)
    {
        void item_278;
        int32_t* item_328_1 = &item_278;
        void item_1f8;
        float* dest_1 = &item_1f8;
        i = nullptr;
        int32_t item_304;
        int32_t* item_320_1 = &item_304;
        float* item_324_1 = &item_1f8;
        int32_t* i_1 = nullptr;
        double* item_344;

        for (; i < 0x60; i = i_1)
        {
            int32_t item_33c_1 = 0;
            int32_t saved_target;
            item_344 = &saved_target + i + 0x60;
            WeaponType_UpdateAnim(item_344, i_3, item_33c_1);
            int32_t* i_4 = i_1;
            *dest_1 = *(&saved_target + i + 0x60);
            void item_2d0;
            dest_1[1] = *(&item_2d0 + i_4);
            void item_2c8;
            long double fpu_val_7_3 = *(&item_2c8 + i_4);
            dest_1[2] = fpu_val_7_3;
            float item_2e8_1 = fpu_val_7_3 * i_3[0x23] + i_3[0x20] * dest_1[1] + i_3[0x1d] * *dest_1;
            long double fpu_val_7_5 = fpu_val_7_3 * i_3[0x24] + i_3[0x21] * dest_1[1];
            long double fpu_val_6_12 = i_3[0x1e] * *dest_1;
            *dest_1 = fpu_val_7_3 * i_3[0x22] + i_3[0x1f] * dest_1[1] + i_3[0x1c] * *dest_1;
            dest_1[1] = item_2e8_1;
            long double fpu_val_7_7 = *(i_3 + 0xf0);
            dest_1[2] = fpu_val_7_5 + fpu_val_6_12;
            long double fpu_val_7_8 = fpu_val_7_7 + *dest_1;
            *item_328_1 = 0;
            item_328_1[1] = 0xc0c00000;
            *dest_1 = fpu_val_7_8;
            item_318 += 1;
            dest_1[1] = *(i_3 + 0xf8) + dest_1[1];
            dest_1[2] = *(i_3 + 0x100) + dest_1[2];
            *(&saved_target + i + 0x60) = *(i_3 + 0x20) + *(&saved_target + i + 0x60);
            *(&item_2d0 + i_4) = *(i_3 + 0x28) + *(&item_2d0 + i_4);
            *(&item_2c8 + i_4) = *(i_3 + 0x30) + *(&item_2c8 + i_4) + 8192.0;
            memcpy(&item_344 + i_4 + 0xec, &saved_target + i + 0x60, 0x18);
            void item_248;
            *(&item_248 + i_4) = *(&item_248 + i_4) - 8192.0;
            *item_320_1 = i_3;
            item_324_1 = &item_324_1[3];
            item_328_1 = &item_328_1[2];
            i_1 = &i_4[6];
            item_320_1 = &item_320_1[1];
            i = QTask_TriggerEvent_2(i_3, Vehicle_UpdateRudder_5());
            source_val = item_318;
            i_3 = i;

            if (!i_3)
                break;

            dest_1 = item_324_1;
        }

        if (source_val)
        {
            double* dest_5 = context;
            int32_t item_33c_2 = 0xffffffff;
            void item_2e0;
            double* item_340_2 = &item_2e0;
            item_344 = 0xc;
            double* item_2dc_1 = dest_5;
            double item_2d8;
            double item_258[0x2];
            void item_1c8;
            i = DynObj_FindSymbol_11(Level_StartMission_4(), &item_1c8, &item_2d8, &item_258, source_val, item_344,
                item_340_2, item_33c_2);

            if (source_val > 0)
            {
                void item_168;
                double* context_val = &item_168;
                int32_t* item_328_2 = &item_1f8;
                double* entity_5 = &item_278;
                double* item_320_2 = &item_278;
                int32_t* item_324_2 = source_val;
                double item_2f4;
                bool flag_1_1;

                do
                {
                    if (context_val[-1])
                    {
                        long double fpu_val_7_22 = *entity_5;
                        long double f1_1 = 0.0;
                        fpu_val_7_22 - f1_1;
                        long double fpu_val_7_23 = *entity_5;

                        if (*(&((fpu_val_7_22 < f1_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_22, f1_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_22 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                            fpu_val_7_23 = -(fpu_val_7_23);

                        long double f2_1 = *context_val;
                        fpu_val_7_23 - f2_1;

                        if (!(*(&((fpu_val_7_23 < f2_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_23, f2_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_23 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
                        {
                            long double fpu_val_7_25 = 8192.0 - *context_val;
                            long double fpu_val_6_13 = *context_val;
                            long double f3_1 = 7577.6000000000004;
                            fpu_val_6_13 - f3_1;
                            item_304 = 0;
                            int32_t item_300_1 = 0;
                            double* source_4;

                            if (!(*(&((fpu_val_6_13 < f3_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_6_13, f3_1) ? 1 : 0) << 0xa
                                | (fpu_val_6_13 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                            {
                                source_4 = context;
                                float item_2fc_2 = fpu_val_7_25 * 0.0016276041666666667 *
                                    *(*(context + 0x1b4) + 8) * 17.8403549f;
                            }
                            else
                            {
                                source_4 = context;
                                float item_2fc_1 = ((7577.6001f - *context_val) * 0.0001319679f + 1.0f) *
                                    *(*(source_4 + 0x1b4) + 8) * 17.8403549f;
                                long double fpu_val_7_34 = 7577.6000000000004 - *context_val;
                                long double fpu_val_6_14 = item_310;
                                fpu_val_6_14 - fpu_val_7_34;

                                if (!(*(&((fpu_val_6_14 < fpu_val_7_34 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_14, fpu_val_7_34) ? 1 : 0) << 0xa
                                        | (fpu_val_6_14 == fpu_val_7_34 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                    i_2 = 1;
                                else
                                {
                                    item_310 = fpu_val_7_34;
                                    i_2 = 1;
                                }
                            }

                            int32_t item_2f8_1 = *item_328_2;
                            item_2f4 = item_328_2[1];
                            *(&item_2f4 + 4) = item_328_2[2];
                            ForceAccumulator_Add(&dest_5[0x1e], &item_304);
                            entity_5 = item_320_2;
                            dest_5[0x21] = dest_5[0x21] * source_4[0xe4] * 0.800000012f;
                            *(dest_5 + 0x10c) = *(dest_5 + 0x10c) * source_4[0xe4] * 0.800000012f;
                            dest_5[0x24] = dest_5[0x24] * 0.980000019f;
                            *(dest_5 + 0x124) = *(dest_5 + 0x124) * 0.980000019f;
                            dest_5[0x25] = dest_5[0x25] * 0.980000019f;
                            dest_5 = context;
                        }
                    }

                    entity_5 = &entity_5[1];
                    context_val = &context_val[0xe];
                    flag_1_1 = item_324_2 != 1;
                    item_320_2 = entity_5;
                    item_328_2 = &item_328_2[3];
                    item_324_2 -= 1;
                } while (flag_1_1);
                i = i_2;

                if (i)
                {
                    memcpy(&item_304, &dest_5[4], 0x18);
                    double item_2f4_1 = item_2f4 + item_310;
                    long double fpu_val_7_53 = *(context + 0x9c);
                    long double fpu_val_6_15 = context[0x14];
                    fpu_val_6_15 - fpu_val_7_53;
                    long double fpu_val_7_54;

                    if (!(*(&((fpu_val_6_15 < fpu_val_7_53 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_15, fpu_val_7_53) ? 1 : 0) << 0xa
                            | (fpu_val_6_15 == fpu_val_7_53 ? 1 : 0) << 0xe) + 1) & 1))
                        fpu_val_7_54 = context[0x14];
                    else
                        fpu_val_7_54 = *(context + 0x9c);

                    long double fpu_val_6_16 = context[0x13];
                    fpu_val_6_16 - fpu_val_7_54;
                    long double fpu_val_7_56;

                    if (*(&((fpu_val_6_16 < fpu_val_7_54 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_16, fpu_val_7_54) ? 1 : 0) << 0xa
                        | (fpu_val_6_16 == fpu_val_7_54 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    {
                        long double fpu_val_7_57 = *(context + 0x9c);
                        long double fpu_val_6_17 = context[0x14];
                        fpu_val_6_17 - fpu_val_7_57;

                        if (!(*(&((fpu_val_6_17 < fpu_val_7_57 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_6_17, fpu_val_7_57) ? 1 : 0) << 0xa
                                | (fpu_val_6_17 == fpu_val_7_57 ? 1 : 0) << 0xe) + 1) & 1))
                            fpu_val_7_56 = context[0x14];
                        else
                            fpu_val_7_56 = *(context + 0x9c);
                    }
                    else
                        fpu_val_7_56 = context[0x13];

                    float item_33c_5 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_56;
                    double* item_340_4 = &item_304;
                    item_344 = context;
                    return WorldObject_CommitTransform(Level_StartMission_4(), item_344, item_340_4, item_33c_5);
                }
            }
        }
    }

    return i;
}
