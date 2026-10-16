#include "0040E9B0-HumanPlayer_UpdateHealth_7.h"
/* 0x0040e9b0 HumanPlayer_UpdateHealth_7 full linked: callers=0 callees=0 */
void* HumanPlayer_UpdateHealth_7(void* a1)

{
    *(a1 + 0x14) = HumanPlayer_HandleInput_7;
    return a1;
}
