#include "gi_platform.h"
#include "0050A510-Physics_SolveConstraints_10.h"
void* Physics_SolveConstraints_10(void* a1 )

{
    int32_t* srcS = (*(int32_t*)(uintptr_t)(a1 + 0x98));
    void* valA = Camera_UpdateTransform_10(srcS);
    Camera_ApplyLineFilter_4(srcS, nullptr, FILE_END);
    void* result = Camera_UpdateTransform_10(srcS);
    Camera_ApplyLineFilter_4(srcS, valA, FILE_BEGIN);
    return result;
}
