// Original IGI.EXE function: QTask_RemoveEventCallback_2 (VA 0x00401BB0; static CFG gate PASS, CFG score 1.000).
#include "QTask_RemoveEventCallback_2.h"
void* QTask_RemoveEventCallback_2(int32_t* a1, void* a2)

{
    int32_t ctxB = *(a2 + 0x14);
    QTask_AllocateEvent(a1);
    void* result = Camera_ApplyWideScreen_33(a2, a1);
    a1[5] = ctxB;
    return result;
}
