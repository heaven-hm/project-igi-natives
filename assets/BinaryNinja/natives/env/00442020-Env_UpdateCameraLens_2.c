#include "Env_UpdateCameraLens_2.h"
int32_t Env_UpdateCameraLens_2(int32_t* a1, void* a2)

{
    int32_t valA = AI_UpdateOrders_17();
    int16_t saved_dst = valA;
    valA = *(a2 + 0x1c);
    char result = TaskType_IsDerivedFrom(valA, saved_dst);

    if (result)
        return AI_MoveToNode_23(a1, a2);

    if (*(a2 + 0x1c) == g_57c180)
        memcpy(a1, a2 + 0xf0, 0x18);

    return result;
}
