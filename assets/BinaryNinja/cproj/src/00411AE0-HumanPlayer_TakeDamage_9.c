#include "gi_platform.h"
#include "00411AE0-HumanPlayer_TakeDamage_9.h"
int32_t HumanPlayer_TakeDamage_9(void* a1)

{
    double* valA = AI_CombatTarget_21(a1);
    float v_80;
    float v_7c;
    float v_70;
    float v_64;
    void* v_58;
    float v_54;
    void* v_4c;
    float v_48;

    if (!(*(int32_t*)(uintptr_t)(a1 + 0xd93)))
    {
        Vehicle_DeployGear_10(&v_80, valA);
        long double x87_r4_15 = v_64 * ((*(int32_t*)(uintptr_t)(a1 + 0x30)) - valA[6])
            + v_70 * ((*(int32_t*)(uintptr_t)(a1 + 0x28)) - valA[5]) + v_7c * ((*(int32_t*)(uintptr_t)(a1 + 0x20)) - valA[4]);
        double v_90_2 = x87_r4_15;
        WeaponType_RegisterType_2(&v_58, valA, 0);
        WeaponType_RegisterType_2(&v_4c, valA, 1);
        long double x87_r7_31 = v_54 + 3072.0f;
        long double f0 = v_90_2;
        x87_r7_31 - f0;
        long double x87_r7_33;
        long double f1_1;

        if (*(&((x87_r7_31 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_31, f0) ? 1 : 0) << 0xa
            | (x87_r7_31 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            x87_r7_33 = v_48 - 3072.0f;
            f1_1 = v_90_2;
            x87_r7_33 - f1_1;
        }

        char objC2;

        objC2 = *(&((x87_r7_31 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_31, f0) ? 1 : 0) << 0xa
            | (x87_r7_31 == f0 ? 1 : 0) << 0xe) + 1) & 0x41 && !(*(&(
            (x87_r7_33 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_33, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_33 == f1_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

        long double x87_r7_34 = (*(int32_t*)(uintptr_t)(a1 + 0x1d4));
        long double f2 = 0.0f;
        x87_r7_34 - f2;
        int16_t result = (x87_r7_34 < f2 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_34, f2) ? 1 : 0) << 0xa | (x87_r7_34 == f2 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
        {
    label_411e52: ;
            if (!objC2 && !((*(int32_t*)(uintptr_t)(a1 + 0x2f4)) & 0x20000))
                return result;
        }
        else
        {
            long double x87_r7_35 = (*(int32_t*)(uintptr_t)(a1 + 0x134));
            long double f4_1 = 0.0f;
            x87_r7_35 - f4_1;
            result = (x87_r7_35 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_35, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_35 == f4_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
                goto label_411e52;
        }

        (*(int32_t*)(uintptr_t)(a1 + 0xd94)) = 0;
        AI_SelectTarget_20(a1);
        AI_UpdateOrders_20(a1);
        AI_TakeCover_22((*(int32_t*)(uintptr_t)(a1 + 0x4ec)));
        AI_CombatTarget_20(a1);
        AI_CheckHearing_20(a1);
        Human_ViewCam(a1, 1);
        HumanPlayer_LoadParameters_6(a1);
        AI_UpdateSensors_21(a1);
        valA[0x26] = 0;
        int32_t valA13;

        if (!(0x20000 & (*(int32_t*)(uintptr_t)(a1 + 0x2f4))))
        {
            void* tmpD4 = (*(int32_t*)(uintptr_t)(a1 + 0x2f0));
            (*(int32_t*)(uintptr_t)(a1 + 0x2f8)) = (*(int32_t*)(uintptr_t)(a1 + 0x2fc));
            (*(int32_t*)(uintptr_t)(a1 + 0x2fc)) = 0x1d;
            valA13 = *(tmpD4 + 0x74);
        }
        else
        {
            void* valA12 = (*(int32_t*)(uintptr_t)(a1 + 0x2f0));
            (*(int32_t*)(uintptr_t)(a1 + 0x2f8)) = (*(int32_t*)(uintptr_t)(a1 + 0x2fc));
            (*(int32_t*)(uintptr_t)(a1 + 0x2fc)) = 0x2f;
            valA13 = *(valA12 + 0xbc);
        }

        (*(int32_t*)(uintptr_t)(a1 + 0x300)) = valA13;
        return valA13(a1 + 0x2ec, a1);
    }

    Vehicle_DeployGear_10(&v_80, valA);
    long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x20)) - valA[4];
    long double x87_r6_1 = (*(int32_t*)(uintptr_t)(a1 + 0x28)) - valA[5];
    double v_38 = x87_r6_1;
    long double x87_r5_1 = (*(int32_t*)(uintptr_t)(a1 + 0x30)) - valA[6];
    float v_74;
    float v_68;
    double v_98 = v_68 * x87_r5_1 + v_74 * x87_r6_1 + v_80 * x87_r7_1;
    double v_90 = v_64 * x87_r5_1 + v_70 * x87_r6_1 + v_7c * x87_r7_1;
    float v_78;
    float v_6c;
    float v_60;
    double v_88 = v_60 * x87_r5_1 + v_6c * x87_r6_1 + v_78 * x87_r7_1;
    char v_40;
    memcpy(&v_40, &v_98, 0x18);
    WeaponType_RegisterType_2(&v_58, valA, 0);
    WeaponType_RegisterType_2(&v_4c, valA, 1);
    long double x87_r7_4 = v_54 + 3072.0f;
    long double f3 = v_90;
    x87_r7_4 - f3;

    if (*(&((x87_r7_4 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f3) ? 1 : 0) << 0xa
        | (x87_r7_4 == f3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_7 = v_48 - 3072.0f;
        long double f5_1 = v_90;
        x87_r7_7 - f5_1;

        if (*(&((x87_r7_7 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f5_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            v_38 = x87_r7_7;
    }
    else
        v_38 = x87_r7_4;

    v_98 = v_7c * v_38 - v_78 * 2150.4000000000001;
    double v_90_1 = v_70 * v_38 - v_6c * 2150.4000000000001;
    double v_88_1 = v_64 * v_38 - v_60 * 2150.4000000000001;
    long double x87_r7_18 = v_98;
    double v_28;
    memcpy(&v_28, &v_98, 0x18);
    v_28 = x87_r7_18 + valA[4];
    double v_20;
    double v_20_1 = v_20 + valA[5];
    double v_18;
    double v_18_1 = v_18 + valA[6];
    AI_UpdateOrders_19(a1, &v_28);
    __builtin_memset(a1 + 0x664, 0, 0x18);
    float v_a0;
    float v_10;
    float v_c;
    Sys_Atan2UndefinedInOrig(&v_80, &v_10, &v_c, &v_a0);
    long double x87_r7_24 = v_38;
    long double f6 = 0.0;
    x87_r7_24 - f6;

    if (!(*(&((x87_r7_24 < f6 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_24, f6) ? 1 : 0) << 0xa
            | (x87_r7_24 == f6 ? 1 : 0) << 0xe) + 1) & 0x41))
        v_a0 = v_a0 + 3.14159274.0f;

    AI_AlertAllies_19(a1, v_a0);
    (*(int32_t*)(uintptr_t)(a1 + 0xd93)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xd94)) = 1;
    AI_AlertAllies_20(a1);
    AI_TakeCover_20(a1);
    AI_MoveToNode_22((*(int32_t*)(uintptr_t)(a1 + 0x4ec)));
    AI_UpdatePatrol_20(a1);
    AI_UpdateSensors_19(a1);
    AI_UpdateOrders_22((*(int32_t*)(uintptr_t)(a1 + 0x4ec)));
    AI_CheckVisibility_20(a1);
    Human_ViewCam(a1, 3);
    HumanPlayer_UpdateAnimation_4(a1);
    AI_SelectTarget_21(a1);
    void* valA8 = (*(int32_t*)(uintptr_t)(a1 + 0x2f0));
    (*(int32_t*)(uintptr_t)(a1 + 0x2f8)) = (*(int32_t*)(uintptr_t)(a1 + 0x2fc));
    (*(int32_t*)(uintptr_t)(a1 + 0x2fc)) = 0x2a;
    int32_t valA9 = *(valA8 + 0xa8);
    (*(int32_t*)(uintptr_t)(a1 + 0x300)) = valA9;
    return valA9(a1 + 0x2ec, a1);
}
