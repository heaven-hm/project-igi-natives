// IGI native provenance: HumanPlayer_CheckGround_5 - 0x0040C2F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040C2F0-HumanPlayer_CheckGround_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_CheckGround_5.h"
void* HumanPlayer_CheckGround_5(void* context, float param_2)

{
    float source_val = param_2;
    double* data_val = AI_CombatTarget_21(source_val);
    HumanPlayer_CheckCollision_9(source_val, 0.0f);
    FX_DebrisSpawn_14(source_val, 0x54, 0, 0.0f);
    *(source_val + 0xd74) = 0;
    Render_TransformVertices_5(source_val + 0x514, source_val + 0x520, source_val + 0x68);
    long double fpu_val_7_3 = *(source_val + 0x80) * *(source_val + 0x528) + *(source_val + 0x7c) * *(source_val + 0x524)
        + *(source_val + 0x78) * *(source_val + 0x520);
    float item_58 = fpu_val_7_3;
    long double fpu_val_7_7 = *(source_val + 0x8c) * *(source_val + 0x528) + *(source_val + 0x88) * *(source_val + 0x524)
        + *(source_val + 0x84) * *(source_val + 0x520);
    float item_54 = fpu_val_7_7;
    long double fpu_val_7_10 = *(source_val + 0x98) * *(source_val + 0x528) + *(source_val + 0x94) * *(source_val + 0x524);
    long double fpu_val_6_11 = *(source_val + 0x90) * *(source_val + 0x520);
    *(source_val + 0x520) = item_58;
    *(source_val + 0x524) = item_54;
    float item_50 = fpu_val_7_10 + fpu_val_6_11;
    *(source_val + 0x528) = item_50;
    double item_40;
    float item_28;
    Env_ActivateEntity_5(data_val, &item_40, &item_28);
    float item_1c;
    float item_18;
    item_50 = item_1c * 778.24000000000001 + item_18 * 2457.5999999999999;
    float item_10;
    float item_c;
    double item_48 = item_10 * 778.24000000000001 + item_c * 2457.5999999999999;
    float item_24;
    item_40 = item_40 + item_28 * 778.24000000000001 + item_24 * 2457.5999999999999;
    double item_38;
    double item_38_1 = item_38 + item_50;
    double item_30;
    double item_30_1 = item_30 + item_48;
    AI_UpdateOrders_19(source_val, &item_40);
    AI_SelectTarget_19(source_val);
    float item_60;
    float item_5c;
    Sys_Atan2UndefinedInOrig(&item_28, &item_5c, &item_60, &param_2);
    param_2 = param_2 + 3.14159274f;
    AI_AlertAllies_19(source_val, param_2);
    HumanPlayer_UpdateAnimation_4(source_val);
    long double fpu_val_7_23 = Env_InitLadder_6(data_val) * 30.0f;
    *(source_val + 0xd64) = 0;
    item_58 = fpu_val_7_23;
    *(source_val + 0xd60) = item_58;
    Human_ViewCam(source_val, 3);
    HumanPlayer_CheckCollision_4(source_val);
    AI_CheckVisibility_20(source_val);
    AI_UpdateOrders_22(*(source_val + 0x4ec));
    AI_MoveToNode_22(*(source_val + 0x4ec));
    void* result = AI_TakeCover_20(source_val);
    *(context + 0x14) = HumanPlayer_UpdateStamina_5;
    return result;
}
