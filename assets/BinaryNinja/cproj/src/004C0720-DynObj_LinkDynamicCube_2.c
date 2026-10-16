#include "gi_platform.h"
#include "004C0720-DynObj_LinkDynamicCube_2.h"
int32_t* DynObj_LinkDynamicCube_2(int32_t* a1, int32_t a2, int32_t a3)

{
    *a1 = a2;
    a1[1] = a3;
    a1[4] = &a1[2];
    a1[2] = &a1[3];
    a1[3] = 0;
    return a1;
}
