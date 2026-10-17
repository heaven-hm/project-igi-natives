// Original IGI.EXE function: Sys_ReadFileBlock_4 (VA 0x004B1690; static CFG gate FAIL, CFG score 0.667).
#include "Sys_ReadFileBlock_4.h"
void Sys_ReadFileBlock_4(int32_t* context)

{
    if (context == 0x943980)
    {
        g_943988 = 0;
        return;
    }

    int32_t entity_val = *context;
    (*(entity_val * 0x8c + &g_9436bc))(entity_val, context);
}
