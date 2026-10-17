// Original IGI.EXE function: Vehicle_UpdateCockpit_3 (VA 0x00433760; static CFG gate PASS, CFG score 1.000).
#include "Vehicle_UpdateCockpit_3.h"
int32_t* Vehicle_UpdateCockpit_3(void* context)

{
    int32_t* result = *(context + 0x834);

    if (!result)
        return result;

    void* data_val = *result;

    if (data_val)
        SoundSys_SetFrequency_7(data_val);

    return Qtask_UpdateList(*(context + 0x834));
}
