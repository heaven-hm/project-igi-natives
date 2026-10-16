#include "0050A450-Physics_ApplyImpulse_10.h"
/* 0x0050a450 Physics_ApplyImpulse_10 full linked: callers=0 callees=1 */
uint32_t sub_50a450(void* a1 @ 0x8, char* a2, uint32_t a3)

{
    uint32_t result = sub_516c91(a2, 1, a3, *(a1 + 0x98));

    if (result < a3)
        *(a1 + 0x9c) = 1;

    return result;
}
