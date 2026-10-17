// Original IGI.EXE function: QTask_TriggerEvent_2 (VA 0x00401C40; static CFG gate PASS, CFG score 1.000).
#include "QTask_TriggerEvent_2.h"
int32_t* QTask_TriggerEvent_2(int32_t* a1, int16_t a2)

{
    int32_t* result = *a1;

    if (result && *result)
    {
        if (!result)
            return result;

        while (true)
        {
            if (result[7] == a2)
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
