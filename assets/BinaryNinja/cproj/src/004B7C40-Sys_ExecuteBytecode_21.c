#include "gi_platform.h"
#include "004B7C40-Sys_ExecuteBytecode_21.h"
int32_t Sys_ExecuteBytecode_21(void* a1)

{
    int32_t objC1 = (*(int32_t*)(uintptr_t)(a1 + 6)) << 1;
    __builtin_memset(__builtin_memset((*(int32_t*)(uintptr_t)(a1 + 0xc)), 0, objC1 & 0xfffffffc), 0, objC1 & 3);
    int32_t objC6 = (*(int32_t*)(uintptr_t)(a1 + 4)) * (*(int32_t*)(uintptr_t)(a1 + 6));
    __builtin_memset(__builtin_memset(a1 + 0x10, 0, objC6 & 0xfffffffc), 0, objC6 & 3);
    return 0;
}
