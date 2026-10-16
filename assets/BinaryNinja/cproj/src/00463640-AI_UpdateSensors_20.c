#include "gi_platform.h"
#include "00463640-AI_UpdateSensors_20.h"
int32_t* AI_UpdateSensors_20(void* a1, int32_t* a2)

{
    int32_t* valA = (*(int32_t*)(uintptr_t)(a1 + 0x768));

    if (valA)
    {
        Qtask_UpdateList(valA);
        (*(int32_t*)(uintptr_t)(a1 + 0x768)) = 0;
    }

    int32_t* result = a2;

    if (result)
    {
        result = QTask_LinkEventHandler_2(result);
        (*(int32_t*)(uintptr_t)(a1 + 0x768)) = result;
    }

    return result;
}
