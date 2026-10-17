// Original IGI.EXE function: Physics_SolveConstraints_10 (VA 0x0050A510; static CFG gate PASS, CFG score 1.000).
#include "Physics_SolveConstraints_10.h"
void* Physics_SolveConstraints_10(void* context )

{
    int32_t* source_val = *(context + 0x98);
    void* data_val = Camera_UpdateTransform_10(source_val);
    Camera_ApplyLineFilter_4(source_val, nullptr, FILE_END);
    void* result = Camera_UpdateTransform_10(source_val);
    Camera_ApplyLineFilter_4(source_val, data_val, FILE_BEGIN);
    return result;
}
