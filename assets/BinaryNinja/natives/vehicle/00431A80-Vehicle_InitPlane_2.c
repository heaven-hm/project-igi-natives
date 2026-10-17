// Original IGI.EXE function: Vehicle_InitPlane_2 (VA 0x00431A80; static CFG gate PASS, CFG score 1.000).
#include "Vehicle_InitPlane_2.h"
int32_t* Vehicle_InitPlane_2(void* context)

{
    int32_t* result = *(context + 0x74c);

    if (result)
    {
        void* data_val = *result;

        if (data_val)
            SoundSys_SetFrequency_7(data_val);

        result = Qtask_UpdateList(*(context + 0x74c));
        *(context + 0x74c) = 0;
    }

    return result;
}
