#include "ConditionalSound_Stop.h"
int32_t* ConditionalSound_Stop(void* a1)

{
    int32_t* result = *(a1 + 0x120);

    if (result)
    {
        int32_t* valA = *result;

        if (valA)
            QTask_FindType(valA);

        result = Qtask_UpdateList(*(a1 + 0x120));
        *(a1 + 0x120) = 0;
        *(a1 + 0xb2) = 0;
    }

    return result;
}
