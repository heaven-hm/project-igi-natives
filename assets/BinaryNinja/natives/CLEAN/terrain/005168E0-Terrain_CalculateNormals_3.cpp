// IGI native provenance: Terrain_CalculateNormals_3 - 0x005168E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005168E0-Terrain_CalculateNormals_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_CalculateNormals_3.h"
int32_t Terrain_CalculateNormals_3(long double context ) {
    int16_t fpu_control;
    return Terrain_BuildMipMaps_3(__checkTOS_withFB(context), fpu_control, context);
}
