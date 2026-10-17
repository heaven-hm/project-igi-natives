// IGI native provenance: Terrain_ConnectGraphNode_3 - 0x00516810 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00516810-Terrain_ConnectGraphNode_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_ConnectGraphNode_3.h"
int32_t Terrain_ConnectGraphNode_3(long double context ) {
    int16_t fpu_control;
    return Terrain_SampleHeightmap_3(__checkTOS_withFB(context), fpu_control, context);
}
