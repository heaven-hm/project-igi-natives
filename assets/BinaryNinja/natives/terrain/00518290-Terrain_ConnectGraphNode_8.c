// Original IGI.EXE function: Terrain_ConnectGraphNode_8 (VA 0x00518290; static CFG gate PASS, CFG score 1.000).
#include "Terrain_ConnectGraphNode_8.h"
int32_t Terrain_ConnectGraphNode_8()

{
    Terrain_RenderWaterSurface_2();
    Sys_OpenFileStream_2(0xa800d0);
    return Sys_OpenFileStream_2(&g_b015a0);
}
