// Original IGI.EXE function: ProximityMine_Setup (VA 0x004755A0; static CFG gate PASS, CFG score 0.958).
#include "ProximityMine_Setup.h"
void* ProximityMine_Setup(void* context, char* param_2)

{
    void* temp_val = *(context + 0x128);
    int32_t source_val = *(param_2 + 4);
    float* item_d0 = *(temp_val + 0x6e4);

    if (source_val)
        memcpy(context + 0x150, source_val, 0x18);

    void* data_1 = *(param_2 + 8);
    void* result;
    int32_t entity_2;

    if (!data_1)
    {
        entity_2 = *(context + 0x80);
        *(context + 0x168) = *(context + 0x74);
        result = *(context + 0x8c);
        *(context + 0x16c) = entity_2;
        *(context + 0x170) = result;
    }
    else
    {
        *(context + 0x168) = *(data_1 + 4);
        *(context + 0x16c) = *(*(param_2 + 8) + 0x10);
        result = *(param_2 + 8);
        *(context + 0x170) = *(result + 0x1c);
    }

    if (*param_2)
    {
        result = *(context + 0x134);

        if (!result)
        {
            long double fpu_val_7_2 = *(temp_val + 0x650) * 4096.0f;
            float data_4 = *(context + 0x16c);
            float item_e8 = *(context + 0x168);
            float entity_4 = *(context + 0x170);
            int32_t temp_1 = *(context + 0x14);
            item_e8 = fpu_val_7_2 * item_e8;
            double item_58;
            memcpy(&item_58, context + 0x150, 0x18);
            float item_e4_2 = fpu_val_7_2 * data_4;
            double item_40 = item_e8 + item_58;
            void* item_e4_3 = context;
            int32_t item_e0_2 = temp_1;
            int32_t item_dc_1 = 0;
            int32_t item_d8_1 = 0x3f800000;
            double item_50;
            double item_38_1 = item_e4_2 + item_50;
            double item_48;
            double item_30_1 = fpu_val_7_2 * entity_4 + item_48;
            char data_5 = Level_StartMission_2();
            int32_t item_c8;
            int32_t temp_2 = DynObj_FindSymbol_11(Level_StartMission_4(), &item_c8, &item_58, &item_40, 1, data_5,
                &item_e8, 0xffffffff);
            void* result_1;
            result = result_1;

            if (result)
            {
                int32_t dest_2;

                if (!item_c8)
                    dest_2 = 0;
                else
                {
                    int16_t data_8 = AI_UpdateOrders_17();
                    temp_2 = *(item_c8 + 0x1c);

                    if (!TaskType_IsDerivedFrom(temp_2, data_8))
                        dest_2 = 0;
                    else
                        dest_2 = 1;
                }

                int32_t data_10 = item_c8;
                char data_13;

                if (data_10 && *(data_10 + 0x14))
                {
                    int16_t data_11 = AI_UpdateOrders_17();
                    temp_2 = *(*(item_c8 + 0x14) + 0x1c);
                    data_13 = TaskType_IsDerivedFrom(temp_2, data_11);
                }

                int32_t source_2;

                if (!data_10 || !*(data_10 + 0x14) || !data_13)
                    source_2 = 0;
                else
                    source_2 = 1;

                if (!item_c8)
                    result = nullptr;
                else
                {
                    int16_t data_15 = Env_CheckAmbientArea_11();
                    entity_2 = item_c8;

                    if (*(entity_2 + 0x1c) == data_15)
                        result = 1;
                    else
                    {
                        int16_t data_16 = Env_ScanViewCone_8();

                        if (*(item_c8 + 0x1c) == data_16)
                            result = 1;
                        else
                        {
                            int16_t data_17 = Script_ExecuteLevelScript_16();
                            entity_2 = *(item_c8 + 0x1c);

                            if (!TaskType_IsDerivedFrom(entity_2, data_17))
                                result = nullptr;
                            else
                                result = 1;
                        }
                    }
                }

                if (!dest_2 && !source_2 && !result)
                {
                    float item_90;
                    long double fpu_val_7_5 = item_90;
                    long double f0_1 = 0.0f;
                    fpu_val_7_5 - f0_1;
                    float item_8c;
                    float item_88;

                    if (!(*(&((fpu_val_7_5 < f0_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_5, f0_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_5 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_47581e:
                        long double fpu_val_7_8 = item_88;
                        long double fpu_val_6_9 = item_8c;
                        long double fpu_val_5_1 = item_90;
                        long double fpu_val_7_10 = 1.0 /
                            sqrtl(fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_9 * fpu_val_6_9 + fpu_val_7_8 * fpu_val_7_8);
                        item_90 = item_90 * fpu_val_7_10;
                        float item_8c_1 = item_8c * fpu_val_7_10;
                        float item_88_1 = item_88 * fpu_val_7_10;
                    }
                    else
                    {
                        long double fpu_val_7_6 = item_8c;
                        long double f1_1 = 0.0f;
                        fpu_val_7_6 - f1_1;

                        if (!(*(&((fpu_val_7_6 < f1_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_6, f1_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_6 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_47581e;

                        long double fpu_val_7_7 = item_88;
                        long double f2_1 = 0.0f;
                        fpu_val_7_7 - f2_1;

                        if (!(*(&((fpu_val_7_7 < f2_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_7, f2_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_7 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_47581e;
                    }
                    float item_28[0xa];
                    WeaponType_SetCategory(&item_28, &item_90);
                    int32_t temp_4 = item_d0[3];
                    int32_t entity_8 = item_d0[2];
                    int32_t temp_5 = item_d0[1];
                    item_d0 = *item_d0 * 30.0f;
                    void item_c0;
                    Mine_ProximityCreate(Script_FormatString(), &item_c0, &item_28, temp_val + 0x61c, item_d0,
                        temp_5, entity_8, temp_4, param_2[0x18]);
                    result = *(context + 0x144);

                    if (result > 0)
                    {
                        result -= 1;
                        *(context + 0x144) = result;
                    }

                    param_2[1] = 1;
                }
            }
        }
    }

    *(context + 0x134) = *param_2;
    return result;
}
