// Original IGI.EXE function: QTask_RemoveEventCallback_2 (VA 0x00401BB0; static CFG gate PASS, CFG score 1.000).
#include "QTask_RemoveEventCallback_2.h"
void* QTask_RemoveEventCallback_2(int32_t* context, void* param_2)

{
    int32_t context_val = *(param_2 + 0x14);
    QTask_AllocateEvent(context);
    void* result = Camera_ApplyWideScreen_33(param_2, context);
    context[5] = context_val;
    return result;
}
