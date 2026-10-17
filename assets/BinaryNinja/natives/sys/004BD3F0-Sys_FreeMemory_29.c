// Original IGI.EXE function: Sys_FreeMemory_29 (VA 0x004BD3F0; static CFG gate PASS, CFG score 1.000).
#include "Sys_FreeMemory_29.h"
int32_t Sys_FreeMemory_29(int32_t context, int32_t param_2, int32_t param_3, int32_t param_4)

{
    if (context >= 0 && context < 0x31 && param_2 >= 0 && param_2 < 4)
    {
        int32_t entity_3 = *(((param_2 + context * 6) << 2) + &g_a96108);

        if (entity_3)
            return entity_3(param_3, param_4, context, param_2);
    }

    return context;
}
