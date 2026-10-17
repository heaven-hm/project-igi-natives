// IGI native provenance: HumanPlayer_UpdateAnimation_5 - 0x0040D180 - CFG score 96.1% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040D180-HumanPlayer_UpdateAnimation_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_UpdateAnimation_5.h"
void* HumanPlayer_UpdateAnimation_5(void* context, void* param_2)

{
    double* data_val = AI_CombatTarget_21(param_2);
    *(param_2 + 0x33d) = 0;
    HumanPlayer_CheckCollision_9(param_2, 0.0f);
    FX_DebrisSpawn_14(param_2, Env_ScanViewCone_10(data_val), 1, 0.0f);
    Render_TransformVertices_5(param_2 + 0x514, param_2 + 0x520, param_2 + 0x68);
    long double fpu_val_7_3 = *(param_2 + 0x80) * *(param_2 + 0x528) + *(param_2 + 0x7c) * *(param_2 + 0x524)
        + *(param_2 + 0x78) * *(param_2 + 0x520);
    float item_110 = fpu_val_7_3;
    long double fpu_val_7_7 = *(param_2 + 0x8c) * *(param_2 + 0x528) + *(param_2 + 0x88) * *(param_2 + 0x524)
        + *(param_2 + 0x84) * *(param_2 + 0x520);
    float item_10c = fpu_val_7_7;
    long double fpu_val_7_10 = *(param_2 + 0x98) * *(param_2 + 0x528) + *(param_2 + 0x94) * *(param_2 + 0x524);
    long double fpu_val_6_11 = *(param_2 + 0x90) * *(param_2 + 0x520);
    *(param_2 + 0x520) = item_110;
    *(param_2 + 0x524) = item_10c;
    *(param_2 + 0x528) = fpu_val_7_10 + fpu_val_6_11;
    double item_104;
    void item_28;
    Env_UpdateCameraLens_10(data_val, &item_104, &item_28);
    void* item_b8 = param_2;
    double item_d4;
    AI_FireWeapon_23(&item_d4, *(param_2 + 0x4ec));
    long double fpu_val_7_13 = item_104 - item_d4;
    double item_b0;
    memcpy(&item_b0, &item_104, 0x18);
    double item_ec = fpu_val_7_13;
    double item_fc;
    double item_cc;
    double item_e4 = item_fc - item_cc;
    memcpy(&item_104, &item_d4, 0x18);
    double item_f4;
    double item_c4;
    double item_dc = item_f4 - item_c4;
    float item_120 = fpu_val_7_13;
    float item_11c = item_e4;
    float item_118 = item_dc;
    char data_4 = Level_LoadObjects_4();
    void item_bc;
    void item_98;
    DynObj_FindSymbol_11(Level_StartMission_4(), &item_98, &item_d4, &item_b0, 1, data_4, &item_bc, 0xffffffff);
    float item_4c;
    float item_40;

    if (item_40 && item_4c)
    {
        float item_60;
        item_120 = item_60;
        void item_90;
        memcpy(&item_104, &item_90, 0x18);
        float item_5c;
        item_11c = item_5c;
        float item_58;
        item_118 = item_58;
    }

    long double fpu_val_7_16 = item_120;
    long double f0 = 0.0f;
    fpu_val_7_16 - f0;

    if (!(*(&((fpu_val_7_16 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_16, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_16 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_40d39a:
        long double fpu_val_7_19 = item_118;
        long double fpu_val_6_16 = item_11c;
        long double fpu_val_5_1 = item_120;
        long double fpu_val_7_21 =
            1.0 / sqrtl(fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_16 * fpu_val_6_16 + fpu_val_7_19 * fpu_val_7_19);
        item_120 = item_120 * fpu_val_7_21;
        item_11c = item_11c * fpu_val_7_21;
        float item_118_1 = item_118 * fpu_val_7_21;
    }
    else
    {
        long double fpu_val_7_17 = item_11c;
        long double f1_1 = 0.0f;
        fpu_val_7_17 - f1_1;

        if (!(*(&((fpu_val_7_17 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_17, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_17 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_40d39a;

        long double fpu_val_7_18 = item_118;
        long double f2_1 = 0.0f;
        fpu_val_7_18 - f2_1;

        if (!(*(&((fpu_val_7_18 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_18, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_18 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_40d39a;
    }

    float item_114;
    float item_b4;
    int32_t temp_4 = Sys_ResolveSymbol_10(&item_120, &item_b4, &item_114);
    item_114 = item_114 + 1.57079637f;

    if (Vehicle_InitHeli_7(data_val) >= 0)
    {
        float data_10 = Script_ExecuteLevelScript_4(Vehicle_InitHeli_7(data_val));
        item_110 = data_10;

        if (data_10)
        {
            int16_t data_11 = Script_CallNativeHandler_13();
            temp_4 = *(data_10 + 0x1c);

            if (TaskType_IsDerivedFrom(temp_4, data_11))
            {
                memcpy(data_10 + 0xf0, &item_104, 0x18);
                Sys_ReadFileBlock_12(item_110 + 0x108, 1.57079637f, 0.0f, item_114);
                Sys_ReadFileBlock_12(item_110 + 0x70, 1.57079637f, 0.0f, item_114);
            }
        }
    }

    Sys_FreeMemory_11(&item_ec);
    long double fpu_val_7_26 = item_ec * 2048.0;
    item_ec = fpu_val_7_26;
    double item_e4_1 = item_e4 * 2048.0;
    double item_dc_1 = item_dc * 2048.0;
    item_104 = item_104 - fpu_val_7_26;
    double item_fc_1 = item_fc - item_e4_1;
    double item_f4_1 = item_f4 - item_dc_1;
    AI_UpdateOrders_19(param_2, &item_104);
    AI_SelectTarget_19(param_2);
    AI_AlertAllies_19(param_2, item_114);
    HumanPlayer_UpdateAnimation_4(param_2);
    long double fpu_val_7_33 = Env_CheckAmbientArea_10(data_val) * 30.0f;
    *(param_2 + 0xd64) = 0;
    item_110 = fpu_val_7_33;
    *(param_2 + 0xd60) = item_110;
    Human_ViewCam(param_2, 3);
    HumanPlayer_CheckCollision_4(param_2);
    AI_CheckVisibility_20(param_2);
    AI_UpdateOrders_22(*(param_2 + 0x4ec));
    AI_MoveToNode_22(*(param_2 + 0x4ec));
    AI_TakeCover_20(param_2);
    *(param_2 + 0xd70) = 0;
    *(context + 0x14) = sub_40d580;
    return context;
}
