#include "gi_platform.h"
#include "004B6E30-Sys_CheckHeap_17.h"
int32_t Sys_CheckHeap_17(int32_t* a1)

{
    int32_t* srcS = (*(int32_t*)(uintptr_t)(*a1 + 8));
    Sys_ReadFileBlock_17(srcS);
    Sys_ExecuteBytecode_2(srcS);
    return Sys_ExecuteBytecode_2(a1);
}
