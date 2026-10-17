// Original IGI.EXE function: AI_UpdatePatrol_3 (VA 0x00451380; static CFG gate PASS, CFG score 0.889).
#include "AI_UpdatePatrol_3.h"
int32_t AI_UpdatePatrol_3(void* context, void* param_2)

{
    memcpy(context, DynObj_UpdateDynTree_4(**(*(param_2 + 0x3aa8) + 0xc)), 0x18);
    char result = AI_MoveToNode_19(**(*(param_2 + 0x3aa8) + 0xc));
    long double fpu7 = *(context + 0x10);

    if (!result)
    {
        *(context + 0x10) = fpu7 + 2048.0;
        return result;
    }

    *(context + 0x10) = fpu7 + 1024.0;
    return result;
}
