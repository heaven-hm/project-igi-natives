#include "0040E960-HumanPlayer_UpdateStamina_7.h"
/* 0x0040e960 HumanPlayer_UpdateStamina_7 full linked: callers=0 callees=1 */
void* HumanPlayer_UpdateStamina_7(void* a1, struct human_player* a2)

{
    void* result = HumanPlayer_CheckCollision_9(a2, 0f);
    *(a1 + 0x14) = sub_40e980;
    return result;
}
