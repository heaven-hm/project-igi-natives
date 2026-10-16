#include "HumanPlayer_ApplyRecoil_9.h"
int32_t HumanPlayer_ApplyRecoil_9(void* a1, int32_t a2)

{
    *(a1 + 0xd5c) = a2;
    return a2;
}
