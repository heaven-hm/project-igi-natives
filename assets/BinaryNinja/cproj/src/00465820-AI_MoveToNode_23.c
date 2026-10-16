#include "gi_platform.h"
#include "00465820-AI_MoveToNode_23.h"
int32_t AI_MoveToNode_23(int32_t* a1, void* a2)

{
    a1[4] = 0xe147ae14;
    a1[5] = 0x40a6147a;

    if (AI_MoveToNode_19(a2))
    {
        __builtin_strncpy(&a1[4], "ffff", 4);
        a1[5] = 0x40966666;
    }

    *a1 = (*(int32_t*)(uintptr_t)(a2 + 0x20));
    a1[1] = (*(int32_t*)(uintptr_t)(a2 + 0x24));
    a1[2] = (*(int32_t*)(uintptr_t)(a2 + 0x28));
    int32_t result = (*(int32_t*)(uintptr_t)(a2 + 0x2c));
    a1[3] = result;
    (*(int32_t*)(uintptr_t)(a1 + 0x10)) = (*(int32_t*)(uintptr_t)(a2 + 0x30)) + (*(int32_t*)(uintptr_t)(a1 + 0x10));
    return result;
}
