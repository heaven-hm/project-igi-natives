// IGI native provenance: Camera_ApplyWideScreen_7 - 0x004A5E39 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A5E39-Camera_ApplyWideScreen_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyWideScreen_7.h"
int32_t Camera_ApplyWideScreen_7(int32_t* context )

{
    int32_t* stack_ptr_4 = context[-6];
    context[-1] = 0xffffffff;
    TEB* fsbase;
    fsbase->NtTib.ExceptionList = context[-4];
    *stack_ptr_4;
    stack_ptr_4[1];
    stack_ptr_4[2];
    *context;
    return 0;
}
