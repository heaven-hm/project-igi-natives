#include "00401C80-QTask_AllocateEvent_2.h"
/* 0x00401c80 QTask_AllocateEvent_2 full linked: callers=9 callees=0 */
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
