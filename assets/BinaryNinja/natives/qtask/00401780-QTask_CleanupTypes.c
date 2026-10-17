// Original IGI.EXE function: QTask_CleanupTypes (VA 0x00401780; static CFG gate PASS, CFG score 1.000).
#include "QTask_CleanupTypes.h"
int32_t* QTask_CleanupTypes(void* context)

{
    int32_t* result = *(context + 8);

    if (*result && result)
    {
        int32_t* i;

        do
        {
            int32_t* entity_1 = *result;

            if (!entity_1)
                i = nullptr;
            else
            {
                int32_t source_1 = *entity_1;
                int32_t source_2 = -(source_1);
                i = (source_2 - source_2) & entity_1;
            }

            QTask_FindType(result);
            result = i;
        } while (i);
    }

    return result;
}
