// Original IGI.EXE function: Config_Moveleft (VA 0x00406280; static CFG gate PASS, CFG score 1.000).
#include "Config_Moveleft.h"
int32_t Config_Moveleft(int32_t context, int32_t* param_2, void** param_3)

{
    int32_t result = context;

    if (param_3)
        *param_3 = &"MoveLeft"[result * 4];

    if (param_2)
    {
        result *= 9;
        *param_2 = *((result << 2) + &g_536578);
    }

    return result;
}
