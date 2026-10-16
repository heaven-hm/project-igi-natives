#include "004E5550-DynCubeObj_OnTick.h"
/* 0x004e5550 DynCubeObj_OnTick full linked: callers=1 callees=0 */
int32_t sub_4e5550(void* a1, int32_t a2, int32_t a3)

{
    int32_t result = ((a3 << (*(a1 + 4) & 0x1f)) + (a2 & 0xfffffff8)) >> 3;
    *(result + a1 + 0xc) |= 1 << (a2 & 7);
    return result;
}
