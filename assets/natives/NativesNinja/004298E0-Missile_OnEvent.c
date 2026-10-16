#include "004298E0-Missile_OnEvent.h"
/* 0x004298e0 Missile_OnEvent full linked: callers=0 callees=1 */
int32_t Missile_OnEvent(int32_t* a1 @ 0x8)

{
    sub_4b8a80(a1[1], a1[2], *a1, 0x10);
    int32_t result = a1[2] + 1;
    a1[2] = result;
    return result;
}
