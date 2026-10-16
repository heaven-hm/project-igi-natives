#include "004C0720-DynObj_LinkDynamicCube_2.h"
/* 0x004c0720 DynObj_LinkDynamicCube_2 full linked: callers=1 callees=0 */
int32_t* sub_4c0720(int32_t* a1, int32_t a2, int32_t a3)

{
    *a1 = a2;
    a1[1] = a3;
    a1[4] = &a1[2];
    a1[2] = &a1[3];
    a1[3] = 0;
    return a1;
}
