#include "gi_platform.h"
#include "00411F20-HumanPlayer_WireSlide1_2.h"
int32_t HumanPlayer_WireSlide1_2(float* a1)

{
    double* valA = AI_CombatTarget_21(a1);
    float* v_d0;
    int32_t valA9;
    float v_98;
    float v_94;
    float v_88;
    float v_7c;
    void* v_58;
    float v_54;
    void* v_4c;
    float v_48;

    if (!a1[0x368])
    {
        v_d0 = &v_98;
        char v_b9_1 = 0;
        Vehicle_DeployGear_10(v_d0, valA);
        long double x87_r4_15 = v_7c * ((*(int32_t*)(uintptr_t)(a1 + 0x30)) - valA[6])
            + v_88 * ((*(int32_t*)(uintptr_t)(a1 + 0x28)) - valA[5]) + v_94 * ((*(int32_t*)(uintptr_t)(a1 + 0x20)) - valA[4]);
        double v_68_1 = x87_r4_15;
        WeaponType_RegisterType_2(&v_58, valA, 0);
        WeaponType_RegisterType_2(&v_4c, valA, 1);
        long double x87_r7_36 = v_54 + 3072.0f;
        long double f0_1 = v_68_1;
        x87_r7_36 - f0_1;
        long double x87_r7_38;
        long double f1_1;

        if (*(&((x87_r7_36 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_36, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_36 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            x87_r7_38 = v_48 - 3072.0f;
            f1_1 = v_68_1;
            x87_r7_38 - f1_1;
        }

        char objC2;

        objC2 = *(&((x87_r7_36 < f0_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_36, f0_1) ? 1 : 0) << 0xa | (x87_r7_36 == f0_1 ? 1 : 0) << 0xe)
            + 1) & 0x41 && !(*(&((x87_r7_38 < f1_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_38, f1_1) ? 1 : 0) << 0xa | (x87_r7_38 == f1_1 ? 1 : 0) << 0xe)
            + 1) & 1) ? v_b9_1 : 1;

        long double x87_r7_39 = a1[0x75];
        long double f2_1 = 0.0f;
        x87_r7_39 - f2_1;
        int16_t result = (x87_r7_39 < f2_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_39, f2_1) ? 1 : 0) << 0xa | (x87_r7_39 == f2_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
        {
    label_412307: ;
            if (!objC2 && !(a1[0xbd] & 0x20000))
                return result;
        }
        else
        {
            long double x87_r7_40 = a1[0x4d];
            long double f4_1 = 0.0f;
            x87_r7_40 - f4_1;
            result = (x87_r7_40 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_40, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_40 == f4_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
                goto label_412307;
        }

        (*(int32_t*)(uintptr_t)(a1 + 0xda1)) = 0;
        AI_SelectTarget_20(a1);
        v_d0 = a1;
        AI_UpdateOrders_20(v_d0);
        AI_TakeCover_22(a1[0x13b]);
        AI_CombatTarget_20(a1);
        AI_CheckHearing_20(a1);
        Human_ViewCam(a1, 1);
        HumanPlayer_LoadParameters_6(a1);
        void* valA10 = a1[0x36d];

        if (valA10)
        {
            SoundSys_SetFrequency_7(valA10);
            a1[0x36d] = 0;
        }

        AI_UpdateSensors_21(a1);
        valA[0x26] = 0;

        if (!(0x20000 & a1[0xbd]))
        {
            void* tmpD4 = a1[0xbc];
            a1[0xbe] = a1[0xbf];
            a1[0xbf] = 0x1d;
            valA9 = *(tmpD4 + 0x74);
        }
        else
        {
            void* valA12 = a1[0xbc];
            a1[0xbe] = a1[0xbf];
            a1[0xbf] = 0x2f;
            valA9 = *(valA12 + 0xbc);
        }
    }
    else
    {
        v_d0 = &v_98;
        Vehicle_DeployGear_10(v_d0, valA);
        long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x20)) - valA[4];
        long double x87_r6_1 = (*(int32_t*)(uintptr_t)(a1 + 0x28)) - valA[5];
        double v_68 = x87_r6_1;
        long double x87_r5_1 = (*(int32_t*)(uintptr_t)(a1 + 0x30)) - valA[6];
        float v_8c;
        float v_80;
        double v_b8 = v_80 * x87_r5_1 + v_8c * x87_r6_1 + v_98 * x87_r7_1;
        double v_b0_1 = v_7c * x87_r5_1 + v_88 * x87_r6_1 + v_94 * x87_r7_1;
        float v_90;
        float v_84;
        float v_78;
        double v_a8_1 = v_78 * x87_r5_1 + v_84 * x87_r6_1 + v_90 * x87_r7_1;
        double v_70;
        memcpy(&v_70, &v_b8, 0x18);
        WeaponType_RegisterType_2(&v_58, valA, 0);
        WeaponType_RegisterType_2(&v_4c, valA, 1);
        long double x87_r7_4 = v_54 + 3072.0f;
        long double f3_1 = v_b0_1;
        x87_r7_4 - f3_1;

        if (*(&((x87_r7_4 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            x87_r7_4 = v_48 - 3072.0f;
            long double f5_1 = v_b0_1;
            x87_r7_4 - f5_1;

            if (!(*(&((x87_r7_4 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                x87_r7_4 = v_68;
        }

        double v_40;
        int64_t* v_cc_2 = &v_40;
        v_d0 = a1;
        v_b8 = v_94 * x87_r7_4 - v_90 * 3686.4000000000001;
        double v_b0_2 = v_88 * x87_r7_4 - v_84 * 3686.4000000000001;
        double v_a8_2 = v_7c * x87_r7_4 - v_78 * 3686.4000000000001;
        memcpy(&v_40, &v_b8, 0x18);
        v_40 = v_b8 + valA[4];
        double v_38;
        double v_38_1 = v_38 + valA[5];
        double v_30;
        double v_30_1 = v_30 + valA[6];
        AI_UpdateOrders_19(v_d0, v_cc_2);
        float v_a0;
        float v_28;
        float v_24;
        Sys_Atan2UndefinedInOrig(&v_98, &v_28, &v_24, &v_a0);
        WeaponType_UpdateAnim(&v_70, valA, 0);
        double v_20;
        WeaponType_UpdateAnim(&v_20, valA, 1);
        v_b8 = v_20 - v_70;
        double v_18;
        double v_b0_3 = v_18 - v_68;
        double v_60;
        double v_10;
        long double x87_r7_20 = v_10 - v_60;
        double v_a8_3 = x87_r7_20;
        long double f6_1 = 0.0;
        x87_r7_20 - f6_1;

        if (!(*(&((x87_r7_20 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_20, f6_1) ? 1 : 0) << 0xa
            | (x87_r7_20 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            v_b8 = -(v_b8);
            v_b0_3 = -(v_b0_3);
            v_a8_3 = -(v_a8_3);
            v_a0 = v_a0 + 3.14159274.0f;
        }

        Sys_FreeMemory_11(&v_b8);
        long double x87_r7_29 = v_b8;
        float tmpD1 = v_a0;
        a1[0x36c] = 0;
        a1[0x369] = x87_r7_29;
        v_d0 = tmpD1;
        a1[0x36a] = v_b0_3;
        a1[0x36b] = v_a8_3;
        AI_AlertAllies_19(a1, v_d0);
        a1[0x368] = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0xda1)) = 1;
        AI_AlertAllies_20(a1);
        AI_TakeCover_20(a1);
        AI_MoveToNode_22(a1[0x13b]);
        AI_UpdateOrders_22(a1[0x13b]);
        AI_UpdatePatrol_20(a1);
        AI_CheckVisibility_20(a1);
        AI_UpdateSensors_19(a1);
        Human_ViewCam(a1, 3);
        HumanPlayer_UpdateAnimation_4(a1);
        a1[0x36d] = SoundSys_SetMasterVolume_7(a1, "wire_slide_1");
        AI_SelectTarget_21(a1);
        void* valA8 = a1[0xbc];
        a1[0xbe] = a1[0xbf];
        a1[0xbf] = 0x2b;
        valA9 = *(valA8 + 0xac);
    }
    a1[0xc0] = valA9;
    v_d0 = &a1[0xbb];
    return valA9(v_d0, a1);
}
