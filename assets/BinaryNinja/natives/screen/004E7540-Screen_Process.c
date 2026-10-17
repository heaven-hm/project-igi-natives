// Original IGI.EXE function: Screen_Process (VA 0x004E7540; static CFG gate FAIL, CFG score 0.667).
#include "Screen_Process.h"
int32_t Screen_Process(int32_t context, char param_2)

{
    if (g_a5ea65)
        return 0;

    memcpy(0xa5e620, context, 0x11c);
    g_a5ea64 = param_2;
    g_a5ea65 = 1;
    return 1;
}
