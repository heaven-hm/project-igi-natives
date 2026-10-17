// Original IGI.EXE function: Binocular_Process (VA 0x00470800; static CFG gate PASS, CFG score 1.000).
#include "Binocular_Process.h"
int32_t* Binocular_Process(void* context)

{
    int32_t* result = *(context + 0x1c4);

    if (result)
    {
        void* data_val = *result;

        if (data_val)
            SoundSys_SetFrequency_7(data_val);

        result = Qtask_UpdateList(*(context + 0x1c4));
        *(context + 0x1c4) = 0;
    }

    return result;
}
