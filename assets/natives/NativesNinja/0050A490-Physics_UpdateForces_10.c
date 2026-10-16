#include "0050A490-Physics_UpdateForces_10.h"
/* 0x0050a490 Physics_UpdateForces_10 full linked: callers=0 callees=1 */
uint32_t sub_50a490(void* a1 @ 0x8, char* a2, uint32_t a3)

{
    uint32_t result = sub_516d79(a2, 1, a3, *(a1 + 0x98));

    if (result < a3)
        *(a1 + 0x9c) = 1;

    return result;
}
