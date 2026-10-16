#include "gi_platform.h"
#include "0048CAB0-LookForTarget.h"
int32_t* LookForTarget(void* a1, int32_t* a2)

{
    char* v_28 = "Combat - LookForTarget";
    int32_t v_2c = 0xffffffff;
    void* v_30 = a1;
    void* dstD1 = a2[0xa] + 8;
    (*(int32_t*)(uintptr_t)(a1 + 0x3cdc)) = 0x3f800000;
    FX_SmokeEmit_17(a1, dstD1);

    if (!(*(int32_t*)(uintptr_t)(a1 + 0x3de4)))
        return AI_CombatTarget_2(a1, a2);

    char v_18;
    AI_UpdatePatrol_3(&v_18, a1);
    AI_UpdateOrders_3(a1, &v_18, 0.0349065848.0f, 0);
    return FX_FireBallUpdate_18(a1, a2, a2[7], 0);
}
