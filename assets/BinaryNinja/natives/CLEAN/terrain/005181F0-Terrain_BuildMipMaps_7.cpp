// IGI native provenance: Terrain_BuildMipMaps_7 - 0x005181F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005181F0-Terrain_BuildMipMaps_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_BuildMipMaps_7.h"
void* Terrain_BuildMipMaps_7(void** context)

{
    void* result = nullptr;

    if (!g_a800c0)
    {
        g_a800c0 = 1;
        *context = nullptr;
        return 0;
    }

    char i;

    do
    {
        i = *(result + 0xa800c1);
        result += 1;
    } while (i);
    *(result + &g_a800c0) = 1;
    *context = result;
    return result;
}
