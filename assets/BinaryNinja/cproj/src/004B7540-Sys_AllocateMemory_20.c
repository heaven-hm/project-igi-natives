#include "gi_platform.h"
#include "004B7540-Sys_AllocateMemory_20.h"
void Sys_AllocateMemory_20(int32_t* a1, int32_t* a2, void* a3)

{
    if (!a3)
        return;

    if (a1)
        *a1 = (*(int32_t*)(uintptr_t)(a3 + 4));

    if (a2)
        *a2 = (*(int32_t*)(uintptr_t)(a3 + 8));
}
