// Original IGI.EXE function: AI_CheckVisibility_21 (VA 0x00463700; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckVisibility_21.h"
int32_t* AI_CheckVisibility_21(void* a1, int32_t* a2)

{
    int32_t* valA = *(a1 + 0x7b0);

    if (valA)
    {
        Qtask_UpdateList(valA);
        *(a1 + 0x7b0) = 0;
    }

    int32_t* result = a2;

    if (result)
    {
        result = QTask_LinkEventHandler_2(result);
        *(a1 + 0x7b0) = result;
    }

    return result;
}
