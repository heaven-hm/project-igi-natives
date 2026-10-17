// Original IGI.EXE function: Env_UpdateCameraLens_12 (VA 0x0044C860; static CFG gate FAIL, CFG score 0.667).
#include "Env_UpdateCameraLens_12.h"
int32_t Env_UpdateCameraLens_12(int32_t context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5)

{
    memcpy(context + 0x20, param_2, 0x18);
    memcpy(context + 0x38, param_4, 0x18);
    memcpy(context + 0x50, param_3, 0x28);
    int32_t dest_3 = param_5;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_3;
        dest_3 += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t result = ~i;
    int32_t source_4;
    int32_t dest_6;
    dest_6 = memcpy(context + 0x94, dest_3 - result, result & 0xfffffffc);
    memcpy(dest_6, source_4, result & 3);
    return result;
}
