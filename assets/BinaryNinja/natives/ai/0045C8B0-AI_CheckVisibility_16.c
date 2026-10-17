// Original IGI.EXE function: AI_CheckVisibility_16 (VA 0x0045C8B0; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckVisibility_16.h"
void* AI_CheckVisibility_16(void* context, float param_2)

{
    float source_val = param_2;
    double* data_val = AI_CombatTarget_21(source_val);
    *(source_val + 0x696) = 0;
    double item_58;
    float item_28;
    Env_ActivateEntity_5(data_val, &item_58, &item_28);
    int32_t item_48 = *(source_val + 0x30);
    float item_18;
    double item_38 = item_18 * 2867.1999999999998;
    int32_t item_44 = *(source_val + 0x34);
    float item_24;
    item_58 = item_24 * 2867.1999999999998 + item_58;
    double item_50;
    double item_50_1 = item_38 + item_50;
    AI_UpdateOrders_19(source_val, &item_58);
    float item_60;
    float item_5c;
    Sys_Atan2UndefinedInOrig(&item_28, &item_5c, &item_60, &param_2);
    param_2 = param_2 + 3.14159274f;
    AI_AlertAllies_19(source_val, param_2);
    FX_DebrisSpawn_14(source_val, 0x1f, 0, 0.0f);
    AI_UpdateOrders_22(*(source_val + 0x4ec));
    AI_MoveToNode_22(*(source_val + 0x4ec));
    AI_TakeCover_20(source_val);
    Human_SetParent(source_val, data_val);
    *(context + 0x14) = sub_45c9b0;
    return context;
}
