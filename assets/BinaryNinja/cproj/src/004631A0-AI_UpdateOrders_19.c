#include "gi_platform.h"
#include "004631A0-AI_UpdateOrders_19.h"
int32_t AI_UpdateOrders_19(void* a1, int32_t* a2)

{
    WorldObject_CommitTransform(Level_StartMission_4(), a1, a2, (*(int32_t*)(uintptr_t)(a1 + 0xa0)));
    void* v_1c = a1;
    AI_CheckHearing_23((*(int32_t*)(uintptr_t)(a1 + 0x4ec)));
    (*(int32_t*)(uintptr_t)(a1 + 0x7d0)) = *a2;
    (*(int32_t*)(uintptr_t)(a1 + 0x7d4)) = a2[1];
    (*(int32_t*)(uintptr_t)(a1 + 0x7d8)) = a2[2];
    (*(int32_t*)(uintptr_t)(a1 + 0x7dc)) = a2[3];
    __builtin_memset(a1 + 0x670, 0, 0x18);
    return 0;
}
