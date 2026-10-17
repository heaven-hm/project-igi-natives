// Original IGI.EXE function: AI_CheckSector_26 (VA 0x0046A0A0; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckSector_26.h"
int32_t* AI_CheckSector_26(void* context)

{
    int32_t* result = *(context + 0x90);

    if (result)
    {
        result = Qtask_UpdateList(result);
        *(context + 0x90) = 0;
    }

    return result;
}
