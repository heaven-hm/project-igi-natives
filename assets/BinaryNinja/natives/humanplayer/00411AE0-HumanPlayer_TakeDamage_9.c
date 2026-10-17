// Original IGI.EXE function: HumanPlayer_TakeDamage_9 (VA 0x00411AE0; static CFG gate PASS, CFG score 0.968).
#include "HumanPlayer_TakeDamage_9.h"
int32_t HumanPlayer_TakeDamage_9(void* context)

{
    double* data_val = AI_CombatTarget_21(context);
    float item_80;
    float item_7c;
    float item_70;
    float item_64;
    void* item_58;
    float item_54;
    void* item_4c;
    float item_48;

    if (!*(context + 0xd93))
    {
        Vehicle_DeployGear_10(&item_80, data_val);
        long double fpu_val_4_15 = item_64 * (*(context + 0x30) - data_val[6])
            + item_70 * (*(context + 0x28) - data_val[5]) + item_7c * (*(context + 0x20) - data_val[4]);
        double item_90_2 = fpu_val_4_15;
        WeaponType_RegisterType_2(&item_58, data_val, 0);
        WeaponType_RegisterType_2(&item_4c, data_val, 1);
        long double fpu_val_7_31 = item_54 + 3072.0f;
        long double f0 = item_90_2;
        fpu_val_7_31 - f0;
        long double fpu_val_7_33;
        long double f1_1;

        if (*(&((fpu_val_7_31 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_31, f0) ? 1 : 0) << 0xa
            | (fpu_val_7_31 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            fpu_val_7_33 = item_48 - 3072.0f;
            f1_1 = item_90_2;
            fpu_val_7_33 - f1_1;
        }

        char entity_2;

        entity_2 = *(&((fpu_val_7_31 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_31, f0) ? 1 : 0) << 0xa
            | (fpu_val_7_31 == f0 ? 1 : 0) << 0xe) + 1) & 0x41 && !(*(&(
            (fpu_val_7_33 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_33, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_33 == f1_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

        long double fpu_val_7_34 = *(context + 0x1d4);
        long double f2 = 0.0f;
        fpu_val_7_34 - f2;
        int16_t result = (fpu_val_7_34 < f2 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_34, f2) ? 1 : 0) << 0xa | (fpu_val_7_34 == f2 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
        {
        label_411e52:

            if (!entity_2 && !(*(context + 0x2f4) & 0x20000))
                return result;
        }
        else
        {
            long double fpu_val_7_35 = *(context + 0x134);
            long double f4_1 = 0.0f;
            fpu_val_7_35 - f4_1;
            result = (fpu_val_7_35 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_35, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_35 == f4_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
                goto label_411e52;
        }

        *(context + 0xd94) = 0;
        AI_SelectTarget_20(context);
        AI_UpdateOrders_20(context);
        AI_TakeCover_22(*(context + 0x4ec));
        AI_CombatTarget_20(context);
        AI_CheckHearing_20(context);
        Human_ViewCam(context, 1);
        HumanPlayer_LoadParameters_6(context);
        AI_UpdateSensors_21(context);
        data_val[0x26] = 0;
        int32_t data_13;

        if (!(0x20000 & *(context + 0x2f4)))
        {
            void* temp_4 = *(context + 0x2f0);
            *(context + 0x2f8) = *(context + 0x2fc);
            *(context + 0x2fc) = 0x1d;
            data_13 = *(temp_4 + 0x74);
        }
        else
        {
            void* data_12 = *(context + 0x2f0);
            *(context + 0x2f8) = *(context + 0x2fc);
            *(context + 0x2fc) = 0x2f;
            data_13 = *(data_12 + 0xbc);
        }

        *(context + 0x300) = data_13;
        return data_13(context + 0x2ec, context);
    }

    Vehicle_DeployGear_10(&item_80, data_val);
    long double fpu_val_7_1 = *(context + 0x20) - data_val[4];
    long double fpu_val_6_1 = *(context + 0x28) - data_val[5];
    double item_38 = fpu_val_6_1;
    long double fpu_val_5_1 = *(context + 0x30) - data_val[6];
    float item_74;
    float item_68;
    double item_98 = item_68 * fpu_val_5_1 + item_74 * fpu_val_6_1 + item_80 * fpu_val_7_1;
    double item_90 = item_64 * fpu_val_5_1 + item_70 * fpu_val_6_1 + item_7c * fpu_val_7_1;
    float item_78;
    float item_6c;
    float item_60;
    double item_88 = item_60 * fpu_val_5_1 + item_6c * fpu_val_6_1 + item_78 * fpu_val_7_1;
    void item_40;
    memcpy(&item_40, &item_98, 0x18);
    WeaponType_RegisterType_2(&item_58, data_val, 0);
    WeaponType_RegisterType_2(&item_4c, data_val, 1);
    long double fpu_val_7_4 = item_54 + 3072.0f;
    long double f3 = item_90;
    fpu_val_7_4 - f3;

    if (*(&((fpu_val_7_4 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f3) ? 1 : 0) << 0xa
        | (fpu_val_7_4 == f3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_7 = item_48 - 3072.0f;
        long double f5_1 = item_90;
        fpu_val_7_7 - f5_1;

        if (*(&((fpu_val_7_7 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_7_7 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            item_38 = fpu_val_7_7;
    }
    else
        item_38 = fpu_val_7_4;

    item_98 = item_7c * item_38 - item_78 * 2150.4000000000001;
    double item_90_1 = item_70 * item_38 - item_6c * 2150.4000000000001;
    double item_88_1 = item_64 * item_38 - item_60 * 2150.4000000000001;
    long double fpu_val_7_18 = item_98;
    double item_28;
    memcpy(&item_28, &item_98, 0x18);
    item_28 = fpu_val_7_18 + data_val[4];
    double item_20;
    double item_20_1 = item_20 + data_val[5];
    double item_18;
    double item_18_1 = item_18 + data_val[6];
    AI_UpdateOrders_19(context, &item_28);
    memset(context + 0x664, 0, 0x18);
    float item_a0;
    float item_10;
    float item_c;
    Sys_Atan2UndefinedInOrig(&item_80, &item_10, &item_c, &item_a0);
    long double fpu_val_7_24 = item_38;
    long double f6 = 0.0;
    fpu_val_7_24 - f6;

    if (!(*(&((fpu_val_7_24 < f6 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_24, f6) ? 1 : 0) << 0xa
            | (fpu_val_7_24 == f6 ? 1 : 0) << 0xe) + 1) & 0x41))
        item_a0 = item_a0 + 3.14159274f;

    AI_AlertAllies_19(context, item_a0);
    *(context + 0xd93) = 0;
    *(context + 0xd94) = 1;
    AI_AlertAllies_20(context);
    AI_TakeCover_20(context);
    AI_MoveToNode_22(*(context + 0x4ec));
    AI_UpdatePatrol_20(context);
    AI_UpdateSensors_19(context);
    AI_UpdateOrders_22(*(context + 0x4ec));
    AI_CheckVisibility_20(context);
    Human_ViewCam(context, 3);
    HumanPlayer_UpdateAnimation_4(context);
    AI_SelectTarget_21(context);
    void* data_8 = *(context + 0x2f0);
    *(context + 0x2f8) = *(context + 0x2fc);
    *(context + 0x2fc) = 0x2a;
    int32_t data_9 = *(data_8 + 0xa8);
    *(context + 0x300) = data_9;
    return data_9(context + 0x2ec, context);
}
