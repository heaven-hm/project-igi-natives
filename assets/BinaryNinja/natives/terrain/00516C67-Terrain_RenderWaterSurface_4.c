// Original IGI.EXE function: Terrain_RenderWaterSurface_4 (VA 0x00516C67; static CFG gate PASS, CFG score 1.000).
#include "Terrain_RenderWaterSurface_4.h"
int32_t Terrain_RenderWaterSurface_4(PSTR a1)

{
    enum WIN32_ERROR valA1;

    if (DeleteFileA(a1))
        valA1 = NO_ERROR;
    else
        valA1 = GetLastError();

    if (!valA1)
        return 0;

    Camera_UpdateViewCone_22(valA1);
    return 0xffffffff;
}
