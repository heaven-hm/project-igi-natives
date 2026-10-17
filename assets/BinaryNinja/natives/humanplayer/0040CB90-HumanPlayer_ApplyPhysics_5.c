// Original IGI.EXE function: HumanPlayer_ApplyPhysics_5 (VA 0x0040CB90; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_ApplyPhysics_5.h"
void* HumanPlayer_ApplyPhysics_5(void* context, float param_2)

{
    float source_val = param_2;
    double item_58;
    float item_28;
    Menu_FormatScreen_23(AI_CombatTarget_21(source_val), &item_58, &item_28);
    float item_18;
    float item_14;
    double item_38 = item_18 * -2048.0 - item_14 * 1433.5999999999999;
    float item_c;
    float item_8;
    double item_30 = item_c * -2048.0 - item_8 * 1433.5999999999999;
    float item_24;
    float item_20;
    item_58 = item_58 + item_24 * -2048.0 - item_20 * 1433.5999999999999;
    double item_50;
    double item_50_1 = item_50 + item_38;
    double item_48;
    double item_48_1 = item_48 + item_30;
    AI_UpdateOrders_19(source_val, &item_58);
    float item_60;
    float item_5c;
    Sys_Atan2UndefinedInOrig(&item_28, &item_5c, &item_60, &param_2);
    AI_AlertAllies_19(source_val, param_2);
    HumanPlayer_CheckCollision_9(source_val, 0.0f);
    FX_DebrisSpawn_14(source_val, 0xbd, 0, 0.0f);
    Human_ViewCam(source_val, 3);
    AI_UpdateOrders_22(*(source_val + 0x4ec));
    AI_MoveToNode_22(*(source_val + 0x4ec));
    AI_TakeCover_20(source_val);
    AI_UpdatePatrol_20(source_val);
    AI_UpdateSensors_19(source_val);
    void* result = AI_CheckVisibility_20(source_val);
    *(context + 0x14) = HumanPlayer_PlayFootstep_5;
    return result;
}
