#include "004D95A0-BoneDynCubeObj_OnEvent.h"
/* 0x004d95a0 BoneDynCubeObj_OnEvent full linked: callers=0 callees=2 */
int32_t sub_4d95a0(void* a1, double* a2)

{
    int32_t result = sub_4c6940(g_a44344, a1, a2, *(a1 + 0xa0));
    memcpy(a1 + 0x78, &a2[3], 0x28);
    return result;
}
