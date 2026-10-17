// Original IGI.EXE function: Vehicle_UpdateCockpit_2 (VA 0x00432550; static CFG gate PASS, CFG score 0.923).
#include "Vehicle_UpdateCockpit_2.h"
int32_t* Vehicle_UpdateCockpit_2(void* context)

{
    int32_t* source_val = nullptr;
    int32_t* item_324 = nullptr;
    int16_t data_val = Menu_LeaveMenus_18();
    void* dest_val = context;
    int32_t* result = QTask_DeleteTask_2(*(dest_val + 0xe8), data_val);
    int32_t* result_2 = result;
    int32_t i = 0;
    int32_t* result_1 = nullptr;
    int32_t item_310 = 0xffffffff;
    int32_t item_30c = 0xffefffff;
    *(dest_val + 0x1b8) = 0;

    if (result_2)
    {
        void item_2b4;
        result = &item_2b4;
        void item_2d8;
        double* item_320_1 = &item_2d8;
        float* item_318 = &item_2b4;
        double item_308;
        double item_2e8;

        while (i < 0x60)
        {
            int32_t saved_target;
            memcpy(&saved_target + i + 0x110, &result_2[8], 0x18);
            *(&saved_target + i + 0x120) = *(&saved_target + i + 0x120) + 8192.0;
            float* entity_1 = result_2[0x4e];
            item_308 = *entity_1;
            float* entity_2 = item_318;
            item_2e8 = entity_1[1];
            entity_2[-1] = *(result_2 + 0xf0);
            *entity_2 = *(result_2 + 0xf8);
            entity_2[1] = *(result_2 + 0x100);
            double* entity_3 = item_320_1;
            item_320_1 = &item_320_1[1];
            long double fpu_val_7_10 = -((item_308 + 8192.0));
            *entity_3 = fpu_val_7_10;
            memcpy(&saved_target + i + 0xb0, &saved_target + i + 0x110, 0x18);
            void item_290;
            *(&item_290 + i + 0x18) = fpu_val_7_10 + *(&item_290 + i + 0x18);
            source_val = item_324 + 1;
            item_324 = source_val;
            item_318 = &item_318[3];
            result = QTask_TriggerEvent_2(result_2, Menu_LeaveMenus_18());
            dest_val = context;
            result_2 = result;

            if (!result_2)
                break;

            i += 0x18;
            source_val = item_324;
        }

        if (source_val)
        {
            void* item_2dc_1 = dest_val;
            void item_2e0;
            double item_288[0xc];
            double item_228[0xc];
            void item_1c8;
            result = DynObj_FindSymbol_11(Level_StartMission_4(), &item_1c8, &item_228, &item_288, source_val, 0xc,
                &item_2e0, 0xffffffff);

            if (source_val > 0)
            {
                double* entity_6 = &item_2d8;
                void item_2b8;
                int32_t* item_320_2 = &item_2b8;
                void item_168;
                double* context_val = &item_168;
                double* item_324_1 = &item_2d8;
                int32_t* item_31c_2 = source_val;
                int32_t item_300;
                double item_2f0;
                bool flag_1_1;

                do
                {
                    if (context_val[-1])
                    {
                        long double fpu_val_7_12 = *entity_6;
                        long double f1_1 = 0.0;
                        fpu_val_7_12 - f1_1;
                        long double fpu_val_7_13 = *entity_6;

                        if (*(&((fpu_val_7_12 < f1_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_12, f1_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_12 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                            fpu_val_7_13 = -(fpu_val_7_13);

                        long double f2_1 = *context_val;
                        fpu_val_7_13 - f2_1;

                        if (!(*(&((fpu_val_7_13 < f2_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_13, f2_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_13 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
                        {
                            long double fpu_val_7_14 = *context_val;
                            long double f3_1 = 0.0;
                            fpu_val_7_14 - f3_1;
                            long double fpu_val_7_15 = *context_val;

                            if (*(&((fpu_val_7_14 < f3_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_14, f3_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_14 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                fpu_val_7_15 = -(fpu_val_7_15);

                            item_300 = 0;
                            int32_t item_2fc_1 = 0;
                            item_318 = item_308 - (fpu_val_7_15 - 8192.0);
                            long double fpu_val_7_19 = item_2e8 + 8192.0;
                            long double f4_1 = *context_val;
                            fpu_val_7_19 - f4_1;

                            if (*(&((fpu_val_7_19 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_19, f4_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_19 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                            {
                                result_1 = nullptr;
                                float item_2f8_2 =
                                    item_318 / item_308 * *(*(dest_val + 0x1b4) + 8) * 11.1502218f;
                            }
                            else
                            {
                                long double fpu_val_6_2 = *context_val;
                                long double f5_1 = 0.0;
                                fpu_val_6_2 - f5_1;
                                long double fpu_val_6_3 = *context_val;
                                result_1 = 1;

                                if (*(&((fpu_val_6_2 < f5_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_2, f5_1) ? 1 : 0) << 0xa
                                        | (fpu_val_6_2 == f5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                                    fpu_val_6_3 = -(fpu_val_6_3);

                                void* temp_1 = *(dest_val + 0x1b4);
                                item_318 = item_2e8 + 8192.0f;
                                float item_2f8_1 = ((item_318 - fpu_val_6_3) / item_318 + 1.0f) *
                                    *(temp_1 + 8) * 11.1502218f;
                                long double fpu_val_7_20 = fpu_val_7_19 - *context_val;
                                long double f6_1 = item_310;
                                fpu_val_7_20 - f6_1;

                                if (!(*(&((fpu_val_7_20 < f6_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_20, f6_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_20 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                                    item_310 = fpu_val_7_20;
                            }

                            int32_t item_2f4_1 = *item_320_2;
                            item_2f0 = item_320_2[1];
                            *(&item_2f0 + 4) = item_320_2[2];
                            ForceAccumulator_Add(dest_val + 0xf0, &item_300);
                            entity_6 = item_324_1;
                            *(dest_val + 0x1b8) += 1;
                            *(dest_val + 0x108) = *(dest_val + 0x108) * 0.949999988f;
                            *(dest_val + 0x10c) = *(dest_val + 0x10c) * 0.949999988f;
                            *(dest_val + 0x110) = *(dest_val + 0x110) * 0.970000029f;
                            *(dest_val + 0x120) = *(dest_val + 0x120) * 0.980000019f;
                            *(dest_val + 0x124) = *(dest_val + 0x124) * 0.980000019f;
                            *(dest_val + 0x128) = *(dest_val + 0x128) * 0.980000019f;
                        }
                    }

                    entity_6 = &entity_6[1];
                    context_val = &context_val[0xe];
                    flag_1_1 = item_31c_2 != 1;
                    item_324_1 = entity_6;
                    item_320_2 = &item_320_2[3];
                    item_31c_2 -= 1;
                } while (flag_1_1);
                result = result_1;

                if (result)
                {
                    memcpy(&item_300, dest_val + 0x20, 0x18);
                    double item_2f0_1 = item_2f0 + item_310;
                    long double fpu_val_7_41 = *(context + 0x9c);
                    long double fpu_val_6_9 = *(context + 0xa0);
                    fpu_val_6_9 - fpu_val_7_41;
                    long double fpu_val_7_42;

                    if (!(*(&((fpu_val_6_9 < fpu_val_7_41 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_9, fpu_val_7_41) ? 1 : 0) << 0xa
                            | (fpu_val_6_9 == fpu_val_7_41 ? 1 : 0) << 0xe) + 1) & 1))
                        fpu_val_7_42 = *(context + 0xa0);
                    else
                        fpu_val_7_42 = *(context + 0x9c);

                    long double fpu_val_6_10 = *(context + 0x98);
                    fpu_val_6_10 - fpu_val_7_42;
                    long double fpu_val_7_44;

                    if (*(&((fpu_val_6_10 < fpu_val_7_42 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_10, fpu_val_7_42) ? 1 : 0) << 0xa
                        | (fpu_val_6_10 == fpu_val_7_42 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    {
                        long double fpu_val_7_45 = *(context + 0x9c);
                        long double fpu_val_6_11 = *(context + 0xa0);
                        fpu_val_6_11 - fpu_val_7_45;

                        if (!(*(&((fpu_val_6_11 < fpu_val_7_45 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_6_11, fpu_val_7_45) ? 1 : 0) << 0xa
                                | (fpu_val_6_11 == fpu_val_7_45 ? 1 : 0) << 0xe) + 1) & 1))
                            fpu_val_7_44 = *(context + 0xa0);
                        else
                            fpu_val_7_44 = *(context + 0x9c);
                    }
                    else
                        fpu_val_7_44 = *(context + 0x98);

                    float item_33c_4 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_44;
                    return WorldObject_CommitTransform(Level_StartMission_4(), context, &item_300, item_33c_4);
                }
            }
        }
    }

    return result;
}
