// Original IGI.EXE function: AI_CheckVisibility_21 (VA 0x00463700; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckVisibility_21.h"
int32_t* AI_CheckVisibility_21(void* context, int32_t* param_2)

{
    int32_t* data_val = *(context + 0x7b0);

    if (data_val)
    {
        Qtask_UpdateList(data_val);
        *(context + 0x7b0) = 0;
    }

    int32_t* result = param_2;

    if (result)
    {
        result = QTask_LinkEventHandler_2(result);
        *(context + 0x7b0) = result;
    }

    return result;
}
