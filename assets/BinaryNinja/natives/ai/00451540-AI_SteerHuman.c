// Original IGI.EXE function: AI_SteerHuman (VA 0x00451540; static CFG gate PASS, CFG score 0.985).
#include "AI_SteerHuman.h"
int32_t AI_SteerHuman(long double context , long double param_2 , void* param_3)

{
    int32_t* source_val = *(param_3 + 0xe0);
    int32_t* item_34 = source_val;

    if (!*source_val || !source_val)
        return 2;

    void* item_60;
    double* item_58;
    void* item_54;
    void* item_50;
    double item_30;

    if (source_val[8] == 1)
    {
        if (!*(param_3 + 0x3e4a))
        {
            item_50 = *(param_3 + 0x3b6c);
            item_54 = Script_ExecuteLevelScript_23(item_50, *(param_3 + 0x3e2c));
            item_58 = &item_30;
            Script_CallNativeHandler_23(item_58, item_54);
            int32_t item_18_1 = 0;
            int32_t item_14_1 = 0xbff00000;
            void* item_10_1 = nullptr;
            int32_t i_1 = 0;

            if (*Level_StartMission_3() > 0)
            {
                int32_t dest_1 = 8;
                int32_t* data_12;
                int32_t i;

                do
                {
                    int32_t entity_2 = 0;
                    entity_2 = *(*(Level_StartMission_3() + dest_1) + 0x1c);
                    int32_t source_3 = *(((entity_2 + AI_FireWeapon() * 0x180) << 2) + &g_a96ae0);

                    if (source_3)
                    {
                        double* item_4c_2 = &item_30;
                        item_50 = *(Level_StartMission_3() + dest_1);
                        source_3(item_50, item_4c_2);
                    }

                    dest_1 += 4;
                    i = i_1 + 1;
                    i_1 = i;
                    data_12 = Level_StartMission_3();
                } while (i < *data_12);
                source_val = item_34;
            }

            int32_t* data_13 = *(param_3 + 0x3e4c);

            if (data_13)
            {
                Qtask_UpdateList(data_13);
                *(param_3 + 0x3e4c) = 0;
            }

            if (item_10_1)
                *(param_3 + 0x3e4c) = QTask_LinkEventHandler_2(item_10_1);

            *(param_3 + 0x3e4a) = 1;
        }

        int32_t* data_16 = *(param_3 + 0x3e4c);

        if (data_16)
        {
            void* dest_2 = *data_16;

            if (dest_2)
            {
                int32_t data_17 = Env_CheckAmbientArea_9(dest_2);

                if (data_17 == 1)
                {
                label_451683:
                    Env_ScanViewCone_9(dest_2);
                    AI_UpdateOrders_3(param_3, &source_val[2], 0.0349065848f, 1);
                    return 1;
                }

                if (data_17 == 2)
                {
                    char* item_4c_7 = "Waiting for door to open";
                    int32_t item_50_2 = 0xffffffff;
                    void* item_54_2 = param_3;
                    char item_58_2 = 1;
                    float item_5c_1 = 0.0349065848f;
                    item_60 = &source_val[2];
                    AI_UpdateOrders_3(param_3, item_60, item_5c_1, item_58_2);
                    return 1;
                }

                if (data_17 == 3)
                    goto label_451683;
            }
        }
    }

    long double fpu_val_7_1 = *(source_val + 8) - *(param_3 + 0x20);
    long double fpu_val_6_1 = *(source_val + 0x10) - *(param_3 + 0x28);
    long double fpu_val_5_1 = *(source_val + 0x18) - *(param_3 + 0x30);
    item_30 = *(param_3 + 0x68) * fpu_val_5_1 + *(param_3 + 0x5c) * fpu_val_6_1 + *(param_3 + 0x50) * fpu_val_7_1;
    double item_28 =
        *(param_3 + 0x6c) * fpu_val_5_1 + *(param_3 + 0x60) * fpu_val_6_1 + *(param_3 + 0x54) * fpu_val_7_1;
    double item_20 =
        *(param_3 + 0x70) * fpu_val_5_1 + *(param_3 + 0x64) * fpu_val_6_1 + *(param_3 + 0x58) * fpu_val_7_1;
    memcpy(&item_60, &item_30, 0x18);
    WeaponType_GetConfig(item_58, item_54);
    float item_3c = -(context);
    AI_CheckVisibility_3(param_3 + 0x20);
    float item_38_1 = param_2;
    item_50 = item_3c;
    item_58 = item_38_1;
    char* item_5c_2 = "A:  %f, G:  %f";
    item_60 = 0xffffffff;
    void* item_64_2 = param_3;
    long double fpu_val_1_3 = -(*(param_3 + 0x3ec8));
    long double fpu_val_0_1 = item_38_1;
    fpu_val_0_1 - fpu_val_1_3;

    if (*(&((fpu_val_0_1 < fpu_val_1_3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_0_1, fpu_val_1_3) ? 1 : 0) << 0xa
            | (fpu_val_0_1 == fpu_val_1_3 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
        item_38_1 = fpu_val_1_3;
    else
    {
        long double fpu_val_1_5 = *(param_3 + 0x3ec8);
        long double f1_1 = item_38_1;
        fpu_val_1_5 - f1_1;

        if (*(&((fpu_val_1_5 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_1_5, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_1_5 == f1_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
            item_38_1 = *(param_3 + 0x3ec8);
    }

    long double fpu_val_1_7 = -(*(param_3 + 0x3ecc));
    long double fpu_val_0_2 = item_3c;
    fpu_val_0_2 - fpu_val_1_7;

    if (*(&((fpu_val_0_2 < fpu_val_1_7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_0_2, fpu_val_1_7) ? 1 : 0) << 0xa
            | (fpu_val_0_2 == fpu_val_1_7 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
        item_3c = fpu_val_1_7;
    else
    {
        long double fpu_val_1_9 = *(param_3 + 0x3ecc);
        long double f4_1 = item_3c;
        fpu_val_1_9 - f4_1;

        if (*(&((fpu_val_1_9 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_1_9, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_1_9 == f4_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
            item_3c = *(param_3 + 0x3ecc);
    }

    item_50 = item_3c;
    item_58 = item_38_1;
    char* item_5c_3 = "CA: %f, CG: %f";
    item_60 = 0xffffffff;
    void* item_64_3 = param_3;
    long double fpu_val_1_12 = item_30;
    long double f6 = 0.0;
    fpu_val_1_12 - f6;

    if (*(&((fpu_val_1_12 < f6 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_1_12, f6) ? 1 : 0) << 0xa
            | (fpu_val_1_12 == f6 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
        fpu_val_1_12 = -(fpu_val_1_12);

    long double f7 = 1228.8;
    fpu_val_1_12 - f7;

    if (*(&((fpu_val_1_12 < f7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_1_12, f7) ? 1 : 0) << 0xa
        | (fpu_val_1_12 == f7 ? 1 : 0) << 0xe | 0x1000) + 1) & 0x41)
    {
        long double fpu_val_1_13 = item_28;
        long double f8_1 = 0.0;
        fpu_val_1_13 - f8_1;

        if (*(&((fpu_val_1_13 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_1_13, f8_1) ? 1 : 0) << 0xa
                | (fpu_val_1_13 == f8_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
            fpu_val_1_13 = -(fpu_val_1_13);

        long double f9_1 = 1228.8;
        fpu_val_1_13 - f9_1;

        if (*(&((fpu_val_1_13 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_1_13, f9_1) ? 1 : 0) << 0xa
            | (fpu_val_1_13 == f9_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 0x41)
        {
            *(param_3 + 0x3e2c) = item_34[9];
            Camera_ApplyHandiCam_33(item_34);
            int32_t* item_54_3 = &g_58a9c8;
            item_34[1] = 0;
            *item_34 = 0;
            Camera_SetFieldOfView_33(item_54_3, item_34);

            if (*(param_3 + 0x3e4a))
            {
                int32_t* data_28 = *(param_3 + 0x3e4c);

                if (data_28)
                {
                    Qtask_UpdateList(data_28);
                    *(param_3 + 0x3e4c) = 0;
                }

                *(param_3 + 0x3e4a) = 0;
            }

            return 0;
        }
    }

    *(param_3 + 0x3c84) = 0x3f800000;
    *(param_3 + 0x3c74) = item_3c * 0.318309873f;
    *(param_3 + 0x3c78) = item_38_1 * 0.318309873f;
    return 1;
}
