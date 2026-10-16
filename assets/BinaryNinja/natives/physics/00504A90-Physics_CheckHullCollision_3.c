#include "Physics_CheckHullCollision_3.h"
int32_t Physics_CheckHullCollision_3(int32_t a1)

{
    int32_t objC = a1;
    int32_t valA = 0;

    while (!(objC & 1))
    {
        objC s>>= 1;
        valA += 1;
    }

    int32_t valA2 = valA * 0xc;
    *(valA2 + &g_a7a640) = 0;
    return Sys_CloseFileStream_23(*(valA2 + 0xa7a644));
}
