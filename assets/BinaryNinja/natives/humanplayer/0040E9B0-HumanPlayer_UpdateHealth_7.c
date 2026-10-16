#include "HumanPlayer_UpdateHealth_7.h"
void* HumanPlayer_UpdateHealth_7(void* a1)

{
    *(a1 + 0x14) = HumanPlayer_HandleInput_7;
    return a1;
}
