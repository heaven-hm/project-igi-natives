#include "HumanPlayer_HandleInput_8.h"
void* HumanPlayer_HandleInput_8(void* a1, void* a2)

{
    *(a2 + 0x4d1) = 1;
    *(a1 + 0x14) = HumanPlayer_ApplyPhysics_8;
    return a2;
}
