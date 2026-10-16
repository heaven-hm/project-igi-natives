#include "Vehicle_UpdateCockpit_3.h"
int32_t* Vehicle_UpdateCockpit_3(void* a1)

{
    int32_t* result = *(a1 + 0x834);

    if (!result)
        return result;

    void* valA = *result;

    if (valA)
        SoundSys_SetFrequency_7(valA);

    return Qtask_UpdateList(*(a1 + 0x834));
}
