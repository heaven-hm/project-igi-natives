#include "gi_platform.h"
#include "0046B5C0-ComputerButtonItem_Process.h"
int32_t ComputerButtonItem_Process(void* a1)

{
    char valA = (*(int32_t*)(uintptr_t)(a1 + 0x4e));
    int32_t* valA1;

    if (!valA)
        valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x88));
    else if ((*(int32_t*)(uintptr_t)(a1 + 0x80)))
        valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x90));
    else if (!valA)
        valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x88));
    else
        valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x8c));

    Sys_AllocateMemory_15(valA1, (*(int32_t*)(uintptr_t)(a1 + 0x78)), (*(int32_t*)(uintptr_t)(a1 + 0x7c)), 128.0f, 128.0f, 128.0f, 0x3f800000, 0x44029eb8, 0,
        0x400c0000, 0xffffffff);
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0x84));

    if (!result)
        return result;

    *(result + 0x20) = 0xffffffff;
    return Sys_CloseFileStream_18((*(int32_t*)(uintptr_t)(a1 + 0x84)));
}
