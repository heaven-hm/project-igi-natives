// Original IGI.EXE function: LookForTarget (VA 0x0048CAB0; static CFG gate PASS, CFG score 1.000).
#include "LookForTarget.h"
int32_t* LookForTarget(void* context, int32_t* param_2)

{
    char* item_28 = "Combat - LookForTarget";
    int32_t item_2c = 0xffffffff;
    void* item_30 = context;
    void* dest_1 = param_2[0xa] + 8;
    *(context + 0x3cdc) = 0x3f800000;
    FX_SmokeEmit_17(context, dest_1);

    if (!*(context + 0x3de4))
        return AI_CombatTarget_2(context, param_2);

    void item_18;
    AI_UpdatePatrol_3(&item_18, context);
    AI_UpdateOrders_3(context, &item_18, 0.0349065848f, 0);
    return FX_FireBallUpdate_18(context, param_2, param_2[7], 0);
}
