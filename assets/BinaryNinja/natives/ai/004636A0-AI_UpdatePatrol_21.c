// Original IGI.EXE function: AI_UpdatePatrol_21 (VA 0x004636A0; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdatePatrol_21.h"
int32_t* AI_UpdatePatrol_21(void* context, int32_t* param_2)

{
    int32_t* data_val = *(context + 0x7b4);

    if (data_val)
    {
        Qtask_UpdateList(data_val);
        *(context + 0x7b4) = 0;
    }

    int32_t* result = param_2;

    if (result)
    {
        result = QTask_LinkEventHandler_2(result);
        *(context + 0x7b4) = result;
    }

    return result;
}
