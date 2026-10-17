// Original IGI.EXE function: Script_ExecuteLevelScript_4 (VA 0x004F1030; static CFG gate PASS, CFG score 1.000).
#include "Script_ExecuteLevelScript_4.h"
int32_t Script_ExecuteLevelScript_4(int32_t context)

{
    if (context >= 0 && context < 0x1000)
    {
        int32_t* data_val = *((context << 2) + &g_a71890);

        if (data_val)
            return *data_val;
    }

    return 0;
}
