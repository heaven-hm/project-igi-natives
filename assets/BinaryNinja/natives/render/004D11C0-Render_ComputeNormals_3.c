// IGI native provenance: Render_ComputeNormals_3 - 0x004D11C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D11C0-Render_ComputeNormals_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_ComputeNormals_3.h"
int32_t Render_ComputeNormals_3()

{
    for (int32_t* i = &g_b04358; i < 0xb12358; i = &i[7])
    {
        i[-2] = 0xffffffff;
        *i = 0;
    }

    Sys_FreeMemory_2(&g_b12b60, 0x640, 0x2bc, 0x20);
    Sys_FreeMemory_2(&g_b12c40, 0xc80, 0x32, 0x20);
    return Sys_FreeMemory_2(&g_b16cc0, 0x1f40, 0, 0x20);
}
