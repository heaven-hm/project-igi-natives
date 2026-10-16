#include "gi_platform.h"
#include "0040E9B0-HumanPlayer_UpdateHealth_7.h"
void* HumanPlayer_UpdateHealth_7(void* a1)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = HumanPlayer_HandleInput_7;
    return a1;
}
