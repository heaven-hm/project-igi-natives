#include "004A528A-Camera_SetFieldOfView_4.h"
/* 0x004a528a Camera_SetFieldOfView_4 full linked: callers=5 callees=1 */
uint32_t sub_4a528a(int32_t* a1)

{
    int32_t temp0 = a1[1];
    a1[1] -= 1;

    if (temp0 - 1 < 0)
        return sub_4a6ca4(a1);

    char* ecx = *a1;
    uint32_t result = *ecx;
    *a1 = &ecx[1];
    return result;
}
