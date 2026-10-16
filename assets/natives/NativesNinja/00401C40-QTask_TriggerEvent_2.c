#include "00401C40-QTask_TriggerEvent_2.h"
/* 0x00401c40 QTask_TriggerEvent_2 full linked: callers=36 callees=0 */
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
