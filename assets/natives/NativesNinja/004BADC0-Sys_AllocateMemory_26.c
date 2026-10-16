#include "004BADC0-Sys_AllocateMemory_26.h"
/* 0x004badc0 Sys_AllocateMemory_26 full linked: callers=1 callees=2 */
int32_t* sub_4badc0(void* a1, int32_t a2)

{
    int32_t* result = Mem_Alloc(0x10, 4);
    result[2] = a2;
    result[1] = 0;
    *result = 0;
    sub_4af8f0(a1 + 0x44, result);
    return result;
}
