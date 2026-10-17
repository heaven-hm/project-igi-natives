// Original IGI.EXE function: Sys_DispatchOpcode_30 (VA 0x004BEC40; static CFG gate PASS, CFG score 1.000).
#include "Sys_DispatchOpcode_30.h"
int32_t Sys_DispatchOpcode_30(void* context, int32_t param_2)

{
    if (param_2 < *(context + 8))
    {
        int32_t entity_2 = *(*(context + 0x10) + (param_2 << 2));

        if (entity_2 < *(context + 0xc))
            return *(context + 0x14) + entity_2;
    }

    return 0;
}
