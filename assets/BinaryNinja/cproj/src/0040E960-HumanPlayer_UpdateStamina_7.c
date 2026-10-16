#include "gi_platform.h"
#include "0040E960-HumanPlayer_UpdateStamina_7.h"
void** HumanPlayer_UpdateStamina_7(void* a1, void* a2)

{
    void** result = HumanPlayer_CheckCollision_9(a2, 0.0f);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_40e980;
    return result;
}
