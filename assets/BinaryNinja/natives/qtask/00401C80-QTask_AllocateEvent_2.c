// Original IGI.EXE function: QTask_AllocateEvent_2 (VA 0x00401C80; static CFG gate PASS, CFG score 1.000).
#include "QTask_AllocateEvent_2.h"
void* const QTask_AllocateEvent_2(void* a1, int16_t a2)

{
    void* const result = *(a1 + 4);

    if (result && *(result + 4))
    {
        if (!result)
            return result;

        while (true)
        {
            if (*(result + 0x1c) == a2)
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
