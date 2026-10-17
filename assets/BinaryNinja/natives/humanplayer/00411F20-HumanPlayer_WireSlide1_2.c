// Original IGI.EXE function: HumanPlayer_WireSlide1_2 (VA 0x00411F20; static CFG gate PASS, CFG score 0.981).
#include "HumanPlayer_WireSlide1_2.h"
int32_t HumanPlayer_WireSlide1_2(float* context)

{
    double* data_val = AI_CombatTarget_21(context);
    float* item_d0;
    int32_t data_9;
    float item_98;
    float item_94;
    float item_88;
    float item_7c;
    void* item_58;
    float item_54;
    void* item_4c;
    float item_48;

    if (!context[0x368])
    {
        item_d0 = &item_98;
        char item_b9_1 = 0;
        Vehicle_DeployGear_10(item_d0, data_val);
        long double fpu_val_4_15 = item_7c * (*(context + 0x30) - data_val[6])
            + item_88 * (*(context + 0x28) - data_val[5]) + item_94 * (*(context + 0x20) - data_val[4]);
        double item_68_1 = fpu_val_4_15;
        WeaponType_RegisterType_2(&item_58, data_val, 0);
        WeaponType_RegisterType_2(&item_4c, data_val, 1);
        long double fpu_val_7_36 = item_54 + 3072.0f;
        long double f0_1 = item_68_1;
        fpu_val_7_36 - f0_1;
        long double fpu_val_7_38;
        long double f1_1;

        if (*(&((fpu_val_7_36 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_36, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_36 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            fpu_val_7_38 = item_48 - 3072.0f;
            f1_1 = item_68_1;
            fpu_val_7_38 - f1_1;
        }

        char entity_2;

        entity_2 = *(&((fpu_val_7_36 < f0_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_36, f0_1) ? 1 : 0) << 0xa | (fpu_val_7_36 == f0_1 ? 1 : 0) << 0xe)
            + 1) & 0x41 && !(*(&((fpu_val_7_38 < f1_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_38, f1_1) ? 1 : 0) << 0xa | (fpu_val_7_38 == f1_1 ? 1 : 0) << 0xe)
            + 1) & 1) ? item_b9_1 : 1;

        long double fpu_val_7_39 = context[0x75];
        long double f2_1 = 0.0f;
        fpu_val_7_39 - f2_1;
        int16_t result = (fpu_val_7_39 < f2_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_39, f2_1) ? 1 : 0) << 0xa | (fpu_val_7_39 == f2_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
        {
        label_412307:

            if (!entity_2 && !(context[0xbd] & 0x20000))
                return result;
        }
        else
        {
            long double fpu_val_7_40 = context[0x4d];
            long double f4_1 = 0.0f;
            fpu_val_7_40 - f4_1;
            result = (fpu_val_7_40 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_40, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_40 == f4_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
                goto label_412307;
        }

        *(context + 0xda1) = 0;
        AI_SelectTarget_20(context);
        item_d0 = context;
        AI_UpdateOrders_20(item_d0);
        AI_TakeCover_22(context[0x13b]);
        AI_CombatTarget_20(context);
        AI_CheckHearing_20(context);
        Human_ViewCam(context, 1);
        HumanPlayer_LoadParameters_6(context);
        void* data_10 = context[0x36d];

        if (data_10)
        {
            SoundSys_SetFrequency_7(data_10);
            context[0x36d] = 0;
        }

        AI_UpdateSensors_21(context);
        data_val[0x26] = 0;

        if (!(0x20000 & context[0xbd]))
        {
            void* temp_4 = context[0xbc];
            context[0xbe] = context[0xbf];
            context[0xbf] = 0x1d;
            data_9 = *(temp_4 + 0x74);
        }
        else
        {
            void* data_12 = context[0xbc];
            context[0xbe] = context[0xbf];
            context[0xbf] = 0x2f;
            data_9 = *(data_12 + 0xbc);
        }
    }
    else
    {
        item_d0 = &item_98;
        Vehicle_DeployGear_10(item_d0, data_val);
        long double fpu_val_7_1 = *(context + 0x20) - data_val[4];
        long double fpu_val_6_1 = *(context + 0x28) - data_val[5];
        double item_68 = fpu_val_6_1;
        long double fpu_val_5_1 = *(context + 0x30) - data_val[6];
        float item_8c;
        float item_80;
        double item_b8 = item_80 * fpu_val_5_1 + item_8c * fpu_val_6_1 + item_98 * fpu_val_7_1;
        double item_b0_1 = item_7c * fpu_val_5_1 + item_88 * fpu_val_6_1 + item_94 * fpu_val_7_1;
        float item_90;
        float item_84;
        float item_78;
        double item_a8_1 = item_78 * fpu_val_5_1 + item_84 * fpu_val_6_1 + item_90 * fpu_val_7_1;
        double item_70;
        memcpy(&item_70, &item_b8, 0x18);
        WeaponType_RegisterType_2(&item_58, data_val, 0);
        WeaponType_RegisterType_2(&item_4c, data_val, 1);
        long double fpu_val_7_4 = item_54 + 3072.0f;
        long double f3_1 = item_b0_1;
        fpu_val_7_4 - f3_1;

        if (*(&((fpu_val_7_4 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_7_4 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            fpu_val_7_4 = item_48 - 3072.0f;
            long double f5_1 = item_b0_1;
            fpu_val_7_4 - f5_1;

            if (!(*(&((fpu_val_7_4 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_4, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_4 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                fpu_val_7_4 = item_68;
        }

        double item_40;
        int64_t* item_cc_2 = &item_40;
        item_d0 = context;
        item_b8 = item_94 * fpu_val_7_4 - item_90 * 3686.4000000000001;
        double item_b0_2 = item_88 * fpu_val_7_4 - item_84 * 3686.4000000000001;
        double item_a8_2 = item_7c * fpu_val_7_4 - item_78 * 3686.4000000000001;
        memcpy(&item_40, &item_b8, 0x18);
        item_40 = item_b8 + data_val[4];
        double item_38;
        double item_38_1 = item_38 + data_val[5];
        double item_30;
        double item_30_1 = item_30 + data_val[6];
        AI_UpdateOrders_19(item_d0, item_cc_2);
        float item_a0;
        float item_28;
        float item_24;
        Sys_Atan2UndefinedInOrig(&item_98, &item_28, &item_24, &item_a0);
        WeaponType_UpdateAnim(&item_70, data_val, 0);
        double item_20;
        WeaponType_UpdateAnim(&item_20, data_val, 1);
        item_b8 = item_20 - item_70;
        double item_18;
        double item_b0_3 = item_18 - item_68;
        double item_60;
        double item_10;
        long double fpu_val_7_20 = item_10 - item_60;
        double item_a8_3 = fpu_val_7_20;
        long double f6_1 = 0.0;
        fpu_val_7_20 - f6_1;

        if (!(*(&((fpu_val_7_20 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_20, f6_1) ? 1 : 0) << 0xa
            | (fpu_val_7_20 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            item_b8 = -(item_b8);
            item_b0_3 = -(item_b0_3);
            item_a8_3 = -(item_a8_3);
            item_a0 = item_a0 + 3.14159274f;
        }

        Sys_FreeMemory_11(&item_b8);
        long double fpu_val_7_29 = item_b8;
        float temp_1 = item_a0;
        context[0x36c] = 0;
        context[0x369] = fpu_val_7_29;
        item_d0 = temp_1;
        context[0x36a] = item_b0_3;
        context[0x36b] = item_a8_3;
        AI_AlertAllies_19(context, item_d0);
        context[0x368] = 0;
        *(context + 0xda1) = 1;
        AI_AlertAllies_20(context);
        AI_TakeCover_20(context);
        AI_MoveToNode_22(context[0x13b]);
        AI_UpdateOrders_22(context[0x13b]);
        AI_UpdatePatrol_20(context);
        AI_CheckVisibility_20(context);
        AI_UpdateSensors_19(context);
        Human_ViewCam(context, 3);
        HumanPlayer_UpdateAnimation_4(context);
        context[0x36d] = SoundSys_SetMasterVolume_7(context, "wire_slide_1");
        AI_SelectTarget_21(context);
        void* data_8 = context[0xbc];
        context[0xbe] = context[0xbf];
        context[0xbf] = 0x2b;
        data_9 = *(data_8 + 0xac);
    }
    context[0xc0] = data_9;
    item_d0 = &context[0xbb];
    return data_9(item_d0, context);
}
