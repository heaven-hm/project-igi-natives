// Original IGI.EXE function: QTask_AllocateEvent_2 (VA 0x00401C80; static CFG gate PASS, CFG score 1.000).
#include "QTask_AllocateEvent_2.h"
void* const QTask_AllocateEvent_2(void* context, int16_t param_2)

{
    void* const result = *(context + 4);

    if (result && *(result + 4))
    {
        if (!result)
            return result;

        while (true)
        {
            if (*(result + 0x1c) == param_2)
                return result;

            result = *(result + 4);

            if (!result)
                return nullptr;

            if (!*(result + 4))
                return nullptr;

            if (!result)
                return result;
        }
    }

    return nullptr;
}
