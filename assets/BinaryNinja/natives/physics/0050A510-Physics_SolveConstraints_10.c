// Original IGI.EXE function: Physics_SolveConstraints_10 (VA 0x0050A510; static CFG gate PASS, CFG score 1.000).
#include "Physics_SolveConstraints_10.h"
void* Physics_SolveConstraints_10(void* a1 @ 0x8)

{
    int32_t* srcS = *(a1 + 0x98);
    void* valA = Camera_UpdateTransform_10(srcS);
    Camera_ApplyLineFilter_4(srcS, nullptr, FILE_END);
    void* result = Camera_UpdateTransform_10(srcS);
    Camera_ApplyLineFilter_4(srcS, valA, FILE_BEGIN);
    return result;
}
