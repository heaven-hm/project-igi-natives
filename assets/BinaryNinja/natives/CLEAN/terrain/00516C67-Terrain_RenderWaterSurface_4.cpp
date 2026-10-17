// IGI native provenance: Terrain_RenderWaterSurface_4 - 0x00516C67 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00516C67-Terrain_RenderWaterSurface_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_RenderWaterSurface_4.h"
int32_t Terrain_RenderWaterSurface_4(PSTR context)

{
    enum WIN32_ERROR data_1;

    if (DeleteFileA(context))
        data_1 = NO_ERROR;
    else
        data_1 = GetLastError();

    if (!data_1)
        return 0;

    Camera_UpdateViewCone_22(data_1);
    return 0xffffffff;
}
