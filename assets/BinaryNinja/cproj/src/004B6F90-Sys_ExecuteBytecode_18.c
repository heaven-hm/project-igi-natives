#include "gi_platform.h"
#include "004B6F90-Sys_ExecuteBytecode_18.h"
int32_t Sys_ExecuteBytecode_18(int32_t a1, float* a2)

{
    int32_t* srcS = a1;
    *a2 = srcS[1];
    a2[1] = srcS[2];
    a2[2] = Sys_CheckHeap_21(srcS);
    int32_t result = Sys_AllocateMemory_22(srcS);
    a2[3] = result;
    return result;
}
