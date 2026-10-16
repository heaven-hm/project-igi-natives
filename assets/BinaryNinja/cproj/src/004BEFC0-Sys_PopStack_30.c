#include "gi_platform.h"
#include "004BEFC0-Sys_PopStack_30.h"
int32_t Sys_PopStack_30(void* a1)

{
    int32_t result = Sys_ExecuteBytecode_2((*(int32_t*)(uintptr_t)(a1 + 4)));
    (*(int32_t*)(uintptr_t)(a1 + 4)) = 0;
    return result;
}
