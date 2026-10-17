// Original IGI.EXE function: AI_UpdateSensors_23 (VA 0x00465920; static CFG gate FAIL, CFG score 0.667).
#include "AI_UpdateSensors_23.h"
void* AI_UpdateSensors_23(void* context, int32_t param_2, char param_3)

{
    *(context + 0x198) = param_3;

    if (!param_2)
    {
        memset(context + 0x180, 0, 0x18);
        return context;
    }

    memcpy(context + 0x180, param_2, 0x18);
    return context;
}
