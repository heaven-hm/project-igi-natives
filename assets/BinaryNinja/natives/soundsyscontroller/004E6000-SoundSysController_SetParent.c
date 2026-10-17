// Original IGI.EXE function: SoundSysController_SetParent (VA 0x004E6000; static CFG gate PASS, CFG score 1.000).
#include "SoundSysController_SetParent.h"

int32_t SoundSysController_SetParent(int32_t pThis, int32_t param)

{
    int32_t param_1 = param;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *param_1;
        param_1 += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t result = ~i;
    int32_t source_ptr_1;
    int32_t dest_ptr_2;
    dest_ptr_2 = memcpy(pThis + 0x20, param_1 - result, result & 0xfffffffc);
    memcpy(dest_ptr_2, source_ptr_1, result & 3);
    return result;
}
