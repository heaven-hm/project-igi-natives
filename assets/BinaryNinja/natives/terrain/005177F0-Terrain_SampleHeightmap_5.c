// Original IGI.EXE function: Terrain_SampleHeightmap_5 (VA 0x005177F0; static CFG gate PASS, CFG score 1.000).
#include "Terrain_SampleHeightmap_5.h"
int32_t Terrain_SampleHeightmap_5(void* context)

{
    int32_t i = 0;
    int32_t* data_val = *(context + 8);
    int32_t* context_val = context + 0xc;

    if (data_val)
    {
        Sys_PopStack_21(data_val);
        Sys_ExecuteBytecode_2(*(context + 8));
        *(context + 8) = 0;
    }

    if (*(context + 4) > 0)
    {
        do
        {
            Struct_Clear36(context_val);
            i += 1;
            context_val = &context_val[9];
        } while (i < *(context + 4));
    }

    return Sys_ExecuteBytecode_2(context);
}
