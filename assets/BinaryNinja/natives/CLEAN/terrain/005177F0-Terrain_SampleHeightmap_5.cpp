// IGI native provenance: Terrain_SampleHeightmap_5 - 0x005177F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005177F0-Terrain_SampleHeightmap_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
