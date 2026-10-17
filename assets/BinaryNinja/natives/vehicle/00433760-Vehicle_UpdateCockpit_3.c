// Original IGI.EXE function: Vehicle_UpdateCockpit_3 (VA 0x00433760; static CFG gate PASS, CFG score 1.000).
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
