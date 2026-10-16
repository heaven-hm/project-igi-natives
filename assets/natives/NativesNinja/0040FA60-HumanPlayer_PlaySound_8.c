#include "0040FA60-HumanPlayer_PlaySound_8.h"
/* 0x0040fa60 HumanPlayer_PlaySound_8 full linked: callers=0 callees=0 */
void* HumanPlayer_PlaySound_8(void* a1, void* a2)

{
    *(a2 + 0x4e8) = 0;
    *(a1 + 0x14) = HumanPlayer_UpdateAnimation_8;
    return a2;
}
