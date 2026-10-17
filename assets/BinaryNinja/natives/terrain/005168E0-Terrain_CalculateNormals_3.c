// Original IGI.EXE function: Terrain_CalculateNormals_3 (VA 0x005168E0; static CFG gate PASS, CFG score 1.000).
#include "Terrain_CalculateNormals_3.h"
int32_t Terrain_CalculateNormals_3(long double context ) {
    int16_t fpu_control;
    return Terrain_BuildMipMaps_3(__checkTOS_withFB(context), fpu_control, context);
}
