// Original IGI.EXE function: AmbientArea_Process (VA 0x0044C740; static CFG gate PASS, CFG score 1.000).
#include "AmbientArea_Process.h"
int32_t AmbientArea_Process(void* context)

{
    char entity_val = 0;
    char* dest_val = context + 0x94;
    *(context + 0x1b4) = 0;
    char* flagP = dest_val;

    while (true)
    {
        char data_1 = *dest_val;

        if (data_1 != 0x20 && data_1 != 0x3b && data_1 != 0x2c && data_1)
        {
            if (!entity_val)
                flagP = dest_val;

            entity_val = 1;
        }
        else if (entity_val)
        {
            Camera_ApplyLineFilter_5((*(context + 0x1b4) << 5) + context + 0xb4, flagP, dest_val - flagP);
            *((*(context + 0x1b4) << 5) - flagP + dest_val + context + 0xb4) = 0;
            entity_val = 0;
            *(context + 0x1b4) += 1;
        }

        if (!*dest_val)
            break;

        dest_val = &dest_val[1];
    }

    *(context + 0x90) = (Sys_AllocateMemory_14(Level_SetMission_5()) * *(context + 0x88) + *(context + 0x80)) * 30.0;
    Script_Isexists(context + 0x1bc, context);
    return 0;
}
