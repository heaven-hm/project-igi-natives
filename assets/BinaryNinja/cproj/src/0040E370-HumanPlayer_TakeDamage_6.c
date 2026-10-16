#include "gi_platform.h"
#include "0040E370-HumanPlayer_TakeDamage_6.h"
struct status_msg* HumanPlayer_TakeDamage_6(void* a1, void* a2)

{
    (*(int32_t*)(uintptr_t)(a2 + 0x33d)) = 1;
    Human_StateAnimation(a2, (*(int32_t*)(uintptr_t)(a1 + 0x10)), 0.200000003.0f);
    HumanPlayer_ApplyRecoil_9(a2, 4);
    AI_MoveToNode_22((*(int32_t*)(uintptr_t)(a2 + 0x4ec)));
    AI_TakeCover_20(a2);
    struct status_msg* result = AI_CheckSector_28(a2);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = HumanPlayer_UpdateAnimation_6;
    return result;
}
