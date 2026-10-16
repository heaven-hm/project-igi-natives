#include "gi_platform.h"
#include "004B8A20-Script_GetArg.h"
int32_t Script_GetArg(float a1, int32_t a2)

{
    if (!(*(int32_t*)(uintptr_t)(a1 + 4)))
        return Sys_ReadFileBlock_24((*(int32_t*)(uintptr_t)(*(a1 + 8) + (a2 << 2))));

    int32_t tmpD;
    return Sys_AllocateMemory_28(a1, tmpD, a2, a1, a2);
}
