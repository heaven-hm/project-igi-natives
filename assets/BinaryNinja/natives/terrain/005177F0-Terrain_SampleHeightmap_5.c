// Original IGI.EXE function: Terrain_SampleHeightmap_5 (VA 0x005177F0; static CFG gate PASS, CFG score 1.000).
#include "Terrain_SampleHeightmap_5.h"
int32_t Terrain_SampleHeightmap_5(void* a1)

{
    int32_t i = 0;
    int32_t* valA = *(a1 + 8);
    int32_t* ctxB = a1 + 0xc;

    if (valA)
    {
        Sys_PopStack_21(valA);
        Sys_ExecuteBytecode_2(*(a1 + 8));
        *(a1 + 8) = 0;
    }

    if (*(a1 + 4) > 0)
    {
        do
        {
            Struct_Clear36(ctxB);
            i += 1;
            ctxB = &ctxB[9];
        } while (i < *(a1 + 4));
    }

    return Sys_ExecuteBytecode_2(a1);
}
