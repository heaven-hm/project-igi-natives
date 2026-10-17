// Original IGI.EXE function: QTask_AllocateEvent (VA 0x004015D0; static CFG gate PASS, CFG score 1.000).
#include "QTask_AllocateEvent.h"
int32_t* QTask_AllocateEvent(int32_t* context)

{
    int32_t* result = context;

    if (result[5])
        result = Camera_ApplyHandiCam_33(result);

    return result;
}
