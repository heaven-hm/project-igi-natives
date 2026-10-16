#include "004ADAD7-Camera_SetFieldOfView_29.h"
/* 0x004adad7 Camera_SetFieldOfView_29 full linked: callers=9 callees=0 */
int32_t* sub_4adad7(int32_t* a1)

{
    int32_t esi = *a1;
    int32_t edi = a1[1];
    *a1 = esi * 2;
    int32_t ecx_2 = a1[2];
    a1[1] = (edi * 2) | esi >> 0x1f;
    a1[2] = ecx_2 << 1 | edi >> 0x1f;
    return a1;
}
