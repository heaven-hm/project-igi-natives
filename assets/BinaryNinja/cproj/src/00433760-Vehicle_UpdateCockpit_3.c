#include "gi_platform.h"
#include "00433760-Vehicle_UpdateCockpit_3.h"
int32_t* Vehicle_UpdateCockpit_3(void* a1)

{
    int32_t* result = (*(int32_t*)(uintptr_t)(a1 + 0x834));

    if (!result)
        return result;

    void* valA = *result;

    if (valA)
        SoundSys_SetFrequency_7(valA);

    return Qtask_UpdateList((*(int32_t*)(uintptr_t)(a1 + 0x834)));
}
