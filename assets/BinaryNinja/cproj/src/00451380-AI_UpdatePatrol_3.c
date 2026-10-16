#include "gi_platform.h"
#include "00451380-AI_UpdatePatrol_3.h"
int32_t AI_UpdatePatrol_3(void* a1, void* a2)

{
    memcpy(a1, DynObj_UpdateDynTree_4(*(*(int32_t*)(uintptr_t)(*(a2 + 0x3aa8) + 0xc))), 0x18);
    char result = AI_MoveToNode_19(*(*(int32_t*)(uintptr_t)(*(a2 + 0x3aa8) + 0xc)));
    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0x10));

    if (!result)
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = fpu7 + 2048.0;
        return result;
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x10)) = fpu7 + 1024.0;
    return result;
}
