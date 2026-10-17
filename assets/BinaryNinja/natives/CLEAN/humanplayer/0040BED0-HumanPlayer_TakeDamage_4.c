// IGI native provenance: HumanPlayer_TakeDamage_4 - 0x0040BED0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040BED0-HumanPlayer_TakeDamage_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_TakeDamage_4.h"
void* HumanPlayer_TakeDamage_4(void* context, float param_2)

{
    float source_val = param_2;
    double* data_val = AI_CombatTarget_21(source_val);
    HumanPlayer_CheckCollision_9(source_val, 0.0f);
    FX_DebrisSpawn_14(source_val, 0x59, 1, 0.0f);
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
    double item_38;
    double item_30;
    float item_24;
    float item_18;
    float item_c;
    long double fpu_val_4_3 = item_c * (*(source_val + 0x30) - item_30) + item_18 * (*(source_val + 0x28) - item_38)
        + item_24 * (*(source_val + 0x20) - item_40);
    long double f0 = 0.0;
    fpu_val_4_3 - f0;
    long double fpu_val_7_15;

    if (!(*(&((fpu_val_4_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_3, f0) ? 1 : 0) << 0xa
            | (fpu_val_4_3 == f0 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_15 = -409.60000000000002;
    else
    {
        Sys_OpenFileStream_12(&item_28, &item_28, 3.14159274f);
        fpu_val_7_15 = 409.60000000000002;
    }

    item_58 = item_28 * fpu_val_7_15 + item_24 * 2949.1199999999999;
    float item_1c;
    item_50 = item_1c * fpu_val_7_15 + item_18 * 2949.1199999999999;
    item_40 = item_58 + item_40;
    double item_38_1 = item_50 + item_38;
    float item_10;
    double item_30_1 = fpu_val_7_15 * item_10 + item_c * 2949.1199999999999 + item_30;
    AI_UpdateOrders_19(source_val, &item_40);
    AI_SelectTarget_19(source_val);
    float item_60;
    float item_5c;
    Sys_Atan2UndefinedInOrig(&item_28, &item_5c, &item_60, &param_2);
    param_2 = param_2 + 3.14159274f;
    AI_AlertAllies_19(source_val, param_2);
    long double fpu_val_7_22 = Env_ActivateEntity_8(data_val) * 30.0f;
    *(source_val + 0xd64) = 0;
    item_58 = fpu_val_7_22;
    *(source_val + 0xd60) = item_58;
    Human_ViewCam(source_val, 3);
    HumanPlayer_CheckCollision_4(source_val);
    AI_CheckVisibility_20(source_val);
    AI_UpdateOrders_22(*(source_val + 0x4ec));
    AI_MoveToNode_22(*(source_val + 0x4ec));
    AI_TakeCover_20(source_val);
    HumanPlayer_UpdateAnimation_4(source_val);
    *(source_val + 0xd70) = SoundSys_SetMasterVolume_7(source_val, "picklock_loop");
    *(context + 0x14) = sub_40c160;
    return context;
}
