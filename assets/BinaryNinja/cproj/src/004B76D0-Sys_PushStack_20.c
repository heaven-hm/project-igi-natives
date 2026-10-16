#include "gi_platform.h"
#include "004B76D0-Sys_PushStack_20.h"
int32_t Sys_PushStack_20(void* a1)

{
    Sys_ExecuteBytecode_2((*(int32_t*)(uintptr_t)(a1 + 0xc)));
    (*(int32_t*)(uintptr_t)(a1 + 0xc)) = 0;
    return Sys_ExecuteBytecode_2(a1);
}
