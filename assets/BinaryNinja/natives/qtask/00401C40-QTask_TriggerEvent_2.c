// Original IGI.EXE function: QTask_TriggerEvent_2 (VA 0x00401C40; static CFG gate PASS, CFG score 1.000).
#include "QTask_TriggerEvent_2.h"
int32_t* QTask_TriggerEvent_2(int32_t* context, int16_t param_2)

{
    int32_t* result = *context;

    if (result && *result)
    {
        if (!result)
            return result;

        while (true)
        {
            if (result[7] == param_2)
                return result;

            result = *result;

            if (!result)
                return nullptr;

            if (!*result)
                return nullptr;

            if (!result)
                return result;
        }
    }

    return nullptr;
}
