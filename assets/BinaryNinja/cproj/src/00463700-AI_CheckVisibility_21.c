#include "gi_platform.h"
#include "00463700-AI_CheckVisibility_21.h"
int32_t* AI_CheckVisibility_21(void* a1, int32_t* a2)

{
    int32_t* valA = (*(int32_t*)(uintptr_t)(a1 + 0x7b0));

    if (valA)
    {
        Qtask_UpdateList(valA);
        (*(int32_t*)(uintptr_t)(a1 + 0x7b0)) = 0;
    }

    int32_t* result = a2;

    if (result)
    {
        result = QTask_LinkEventHandler_2(result);
        (*(int32_t*)(uintptr_t)(a1 + 0x7b0)) = result;
    }

    return result;
}
