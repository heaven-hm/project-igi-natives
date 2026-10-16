#include "Sys_CheckHeap_17.h"
int32_t Sys_CheckHeap_17(int32_t* a1)

{
    int32_t* srcS = *(*a1 + 8);
    Sys_ReadFileBlock_17(srcS);
    Sys_ExecuteBytecode_2(srcS);
    return Sys_ExecuteBytecode_2(a1);
}
