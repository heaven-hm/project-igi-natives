#include "0040F930-HumanPlayer_HandleInput_8.h"
/* 0x0040f930 HumanPlayer_HandleInput_8 full linked: callers=0 callees=0 */
void* HumanPlayer_HandleInput_8(void* a1, void* a2)

{
    *(a2 + 0x4d1) = 1;
    *(a1 + 0x14) = HumanPlayer_ApplyPhysics_8;
    return a2;
}
