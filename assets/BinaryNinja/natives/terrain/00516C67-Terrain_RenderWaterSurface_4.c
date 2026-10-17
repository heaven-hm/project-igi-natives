// Original IGI.EXE function: Terrain_RenderWaterSurface_4 (VA 0x00516C67; static CFG gate PASS, CFG score 1.000).
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
