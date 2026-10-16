#include "Physics_UpdateForces_12.h"
void* Physics_UpdateForces_12(int32_t* a1)

{
    void* flagP = *a1;
    void* result = Mem_Alloc(a1[3] * a1[7], 4);
    *(flagP + 0xc) = result;
    int32_t objC1 = a1[3] * a1[7];
    int32_t srcS1;
    int32_t dstD1;
    dstD1 = memcpy(result, a1[0xb], objC1 & 0xfffffffc);
    memcpy(dstD1, srcS1, objC1 & 3);
    result = a1[6];
    *(flagP + 4) = result;
    *(flagP + 6) = a1[7];
    *(flagP + 8) = a1[3];
    result = a1[8];
    *(flagP + 0xa) = result;
    return result;
}
