// Original IGI.EXE function: HumanPlayer_HandleInput_5 (VA 0x0040C970; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_HandleInput_5.h"
void* HumanPlayer_HandleInput_5(void* context, float param_2)

{
    float source_val = param_2;
    double* data_val = AI_CombatTarget_21(source_val);
    double item_58;
    float item_28;
    Env_ActivateEntity_5(data_val, &item_58, &item_28);
    double item_50;
    double item_48;
    float item_24;
    float item_18;
    float item_c;
    long double fpu_val_4_3 = item_c * (*(source_val + 0x30) - item_48) + item_18 * (*(source_val + 0x28) - item_50)
        + item_24 * (*(source_val + 0x20) - item_58);
    long double f0 = 0.0;
    fpu_val_4_3 - f0;

    if (*(&((fpu_val_4_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_3, f0) ? 1 : 0) << 0xa
            | (fpu_val_4_3 == f0 ? 1 : 0) << 0xe) + 1) & 1)
        Sys_OpenFileStream_12(&item_28, &item_28, 3.14159274f);

    item_48 = *(source_val + 0x30);
    double item_38 = item_18 * 2867.1999999999998;
    *(&item_48 + 4) = *(source_val + 0x34);
    item_58 = item_24 * 2867.1999999999998 + item_58;
    double item_50_1 = item_38 + item_50;
    AI_UpdateOrders_19(source_val, &item_58);
    float item_60;
    float item_5c;
    Sys_Atan2UndefinedInOrig(&item_28, &item_5c, &item_60, &param_2);
    param_2 = param_2 + 3.14159274f;
    AI_AlertAllies_19(source_val, param_2);
    HumanPlayer_CheckCollision_9(source_val, 0.0f);
    HumanPlayer_UpdateAnimation_4(source_val);
    FX_DebrisSpawn_14(source_val, 0xc6, 0, 0.0f);
    AI_UpdateOrders_22(*(source_val + 0x4ec));
    AI_MoveToNode_22(*(source_val + 0x4ec));
    AI_TakeCover_20(source_val);
    Human_SetParent(source_val, data_val);
    void* result = AI_CheckVisibility_20(source_val);
    *(source_val + 0x4d0) = 0;
    *(context + 0x14) = sub_40cae0;
    return result;
}
