// Original IGI.EXE function: Terrain_CalculateNormals_3 (VA 0x005168E0; static CFG gate PASS, CFG score 1.000).
#include "Terrain_CalculateNormals_3.h"
int32_t Terrain_CalculateNormals_3(long double a1 @ fp0) __location("fp0")

{
    int16_t x87control;
    return Terrain_BuildMipMaps_3(__checkTOS_withFB(a1), x87control, a1);
}
