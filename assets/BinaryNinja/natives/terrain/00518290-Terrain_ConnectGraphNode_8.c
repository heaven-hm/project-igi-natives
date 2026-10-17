// IGI native provenance: Terrain_ConnectGraphNode_8 - 0x00518290 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00518290-Terrain_ConnectGraphNode_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_ConnectGraphNode_8.h"
int32_t Terrain_ConnectGraphNode_8()

{
    Terrain_RenderWaterSurface_2();
    Sys_OpenFileStream_2(0xa800d0);
    return Sys_OpenFileStream_2(&g_b015a0);
}
