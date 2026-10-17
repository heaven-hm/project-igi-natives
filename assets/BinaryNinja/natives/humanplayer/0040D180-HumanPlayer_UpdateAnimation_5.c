// Original IGI.EXE function: HumanPlayer_UpdateAnimation_5 (VA 0x0040D180; static CFG gate PASS, CFG score 0.961).
#include "HumanPlayer_UpdateAnimation_5.h"
void* HumanPlayer_UpdateAnimation_5(void* a1, void* a2)

{
    double* valA = AI_CombatTarget_21(a2);
    *(a2 + 0x33d) = 0;
    HumanPlayer_CheckCollision_9(a2, 0f);
    FX_DebrisSpawn_14(a2, Env_ScanViewCone_10(valA), 1, 0f);
    Render_TransformVertices_5(a2 + 0x514, a2 + 0x520, a2 + 0x68);
    long double x87_r7_3 = *(a2 + 0x80) * *(a2 + 0x528) + *(a2 + 0x7c) * *(a2 + 0x524)
        + *(a2 + 0x78) * *(a2 + 0x520);
    float v_110 = x87_r7_3;
    long double x87_r7_7 = *(a2 + 0x8c) * *(a2 + 0x528) + *(a2 + 0x88) * *(a2 + 0x524)
        + *(a2 + 0x84) * *(a2 + 0x520);
    float v_10c = x87_r7_7;
    long double x87_r7_10 = *(a2 + 0x98) * *(a2 + 0x528) + *(a2 + 0x94) * *(a2 + 0x524);
    long double x87_r6_11 = *(a2 + 0x90) * *(a2 + 0x520);
    *(a2 + 0x520) = v_110;
    *(a2 + 0x524) = v_10c;
    *(a2 + 0x528) = x87_r7_10 + x87_r6_11;
    double v_104;
    void v_28;
    Env_UpdateCameraLens_10(valA, &v_104, &v_28);
    void* v_b8 = a2;
    double v_d4;
    AI_FireWeapon_23(&v_d4, *(a2 + 0x4ec));
    long double x87_r7_13 = v_104 - v_d4;
    double v_b0;
    memcpy(&v_b0, &v_104, 0x18);
    double v_ec = x87_r7_13;
    double v_fc;
    double v_cc;
    double v_e4 = v_fc - v_cc;
    memcpy(&v_104, &v_d4, 0x18);
    double v_f4;
    double v_c4;
    double v_dc = v_f4 - v_c4;
    float v_120 = x87_r7_13;
    float v_11c = v_e4;
    float v_118 = v_dc;
    char valA4 = Level_LoadObjects_4();
    void v_bc;
    void v_98;
    DynObj_FindSymbol_11(Level_StartMission_4(), &v_98, &v_d4, &v_b0, 1, valA4, &v_bc, 0xffffffff);
    float v_4c;
    float v_40;

    if (v_40 && v_4c)
    {
        float v_60;
        v_120 = v_60;
        void v_90;
        memcpy(&v_104, &v_90, 0x18);
        float v_5c;
        v_11c = v_5c;
        float v_58;
        v_118 = v_58;
    }

    long double x87_r7_16 = v_120;
    long double f0 = 0f;
    x87_r7_16 - f0;

    if (!(*(&((x87_r7_16 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_16, f0) ? 1 : 0) << 0xa
        | (x87_r7_16 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_40d39a:
        long double x87_r7_19 = v_118;
        long double x87_r6_16 = v_11c;
        long double x87_r5_1 = v_120;
        long double x87_r7_21 =
            1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_16 * x87_r6_16 + x87_r7_19 * x87_r7_19);
        v_120 = v_120 * x87_r7_21;
        v_11c = v_11c * x87_r7_21;
        float v_118_1 = v_118 * x87_r7_21;
    }
    else
    {
        long double x87_r7_17 = v_11c;
        long double f1_1 = 0f;
        x87_r7_17 - f1_1;

        if (!(*(&((x87_r7_17 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_17, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_17 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_40d39a;

        long double x87_r7_18 = v_118;
        long double f2_1 = 0f;
        x87_r7_18 - f2_1;

        if (!(*(&((x87_r7_18 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_18, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_18 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_40d39a;
    }

    float v_114;
    float v_b4;
    int32_t tmpD4 = Sys_ResolveSymbol_10(&v_120, &v_b4, &v_114);
    v_114 = v_114 + 1.57079637f;

    if (Vehicle_InitHeli_7(valA) >= 0)
    {
        float valA10 = Script_ExecuteLevelScript_4(Vehicle_InitHeli_7(valA));
        v_110 = valA10;

        if (valA10)
        {
            int16_t valA11 = Script_CallNativeHandler_13();
            tmpD4 = *(valA10 + 0x1c);

            if (TaskType_IsDerivedFrom(tmpD4, valA11))
            {
                memcpy(valA10 + 0xf0, &v_104, 0x18);
                Sys_ReadFileBlock_12(v_110 + 0x108, 1.57079637f, 0f, v_114);
                Sys_ReadFileBlock_12(v_110 + 0x70, 1.57079637f, 0f, v_114);
            }
        }
    }

    Sys_FreeMemory_11(&v_ec);
    long double x87_r7_26 = v_ec * 2048.0;
    v_ec = x87_r7_26;
    double v_e4_1 = v_e4 * 2048.0;
    double v_dc_1 = v_dc * 2048.0;
    v_104 = v_104 - x87_r7_26;
    double v_fc_1 = v_fc - v_e4_1;
    double v_f4_1 = v_f4 - v_dc_1;
    AI_UpdateOrders_19(a2, &v_104);
    AI_SelectTarget_19(a2);
    AI_AlertAllies_19(a2, v_114);
    HumanPlayer_UpdateAnimation_4(a2);
    long double x87_r7_33 = Env_CheckAmbientArea_10(valA) * 30f;
    *(a2 + 0xd64) = 0;
    v_110 = x87_r7_33;
    *(a2 + 0xd60) = v_110;
    Human_ViewCam(a2, 3);
    HumanPlayer_CheckCollision_4(a2);
    AI_CheckVisibility_20(a2);
    AI_UpdateOrders_22(*(a2 + 0x4ec));
    AI_MoveToNode_22(*(a2 + 0x4ec));
    AI_TakeCover_20(a2);
    *(a2 + 0xd70) = 0;
    *(a1 + 0x14) = sub_40d580;
    return a1;
}
