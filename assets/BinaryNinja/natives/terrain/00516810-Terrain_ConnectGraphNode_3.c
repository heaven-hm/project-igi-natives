// Original IGI.EXE function: Terrain_ConnectGraphNode_3 (VA 0x00516810; static CFG gate PASS, CFG score 1.000).
#include "Terrain_ConnectGraphNode_3.h"
int32_t Terrain_ConnectGraphNode_3(long double context ) {
    int16_t fpu_control;
    return Terrain_SampleHeightmap_3(__checkTOS_withFB(context), fpu_control, context);
}
