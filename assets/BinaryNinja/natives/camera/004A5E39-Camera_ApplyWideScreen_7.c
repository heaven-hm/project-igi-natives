// Original IGI.EXE function: Camera_ApplyWideScreen_7 (VA 0x004A5E39; static CFG gate PASS, CFG score 1.000).
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
