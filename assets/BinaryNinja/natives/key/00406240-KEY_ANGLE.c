// Original IGI.EXE function: KEY_ANGLE (VA 0x00406240; static CFG gate PASS, CFG score 1.000).
#include "KEY_ANGLE.h"
int32_t KEY_ANGLE(int32_t context, int32_t* param_2, void** param_3)

{
    int32_t result = context;

    if (param_3)
        *param_3 = &g_536998[result * 0x24];

    if (param_2)
    {
        result *= 9;
        *param_2 = *((result << 2) + &g_5369b8);
    }

    return result;
}
