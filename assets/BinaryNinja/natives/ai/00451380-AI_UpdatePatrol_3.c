// Original IGI.EXE function: AI_UpdatePatrol_3 (VA 0x00451380; static CFG gate PASS, CFG score 0.889).
#include "AI_UpdatePatrol_3.h"
int32_t AI_UpdatePatrol_3(void* a1, void* a2)

{
    memcpy(a1, DynObj_UpdateDynTree_4(**(*(a2 + 0x3aa8) + 0xc)), 0x18);
    char result = AI_MoveToNode_19(**(*(a2 + 0x3aa8) + 0xc));
    long double fpu7 = *(a1 + 0x10);

    if (!result)
    {
        *(a1 + 0x10) = fpu7 + 2048.0;
        return result;
    }

    *(a1 + 0x10) = fpu7 + 1024.0;
    return result;
}
