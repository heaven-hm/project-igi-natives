// Original IGI.EXE function: Weapon_ComputeAccuracy_7 (VA 0x0047C4C0; static CFG gate FAIL, CFG score 0.667).
#include "Weapon_ComputeAccuracy_7.h"
void* Weapon_ComputeAccuracy_7(void* context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, int32_t param_7)

{
    int32_t result = 0;
    int32_t* temp_val = context + 0x548;

    while (*temp_val)
    {
        result += 1;
        temp_val = &temp_val[0x32];

        if (result >= 5)
            return result;
    }

    int32_t data_val = result * 5;
    *(context + (*(context + 0x9c) << 2) + 0x900) = context + data_val * 0x28 + 0x518;
    *(context + 0x9c) += 1;
    memcpy(context + data_val * 0x28 + 0x518, param_2, 0x18);
    memcpy(context + data_val * 0x28 + 0x530, param_3, 0x18);
    *(context + data_val * 0x28 + 0x550) = param_4;
    *(context + data_val * 0x28 + 0x54c) = param_7;
    *(context + data_val * 0x28 + 0x548) = 1;
    *(context + data_val * 0x28 + 0x554) = param_5;
    *(context + data_val * 0x28 + 0x558) = param_6;
    *(context + data_val * 0x28 + 0x5d8) = 0;
    return context + data_val * 0x28 + 0x518;
}
