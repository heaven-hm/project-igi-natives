// Original IGI.EXE function: DiscardTerrain_Process (VA 0x0052C5A0; static CFG gate PASS, CFG score 1.000).
#include "DiscardTerrain_Process.h"
int32_t DiscardTerrain_Process(int32_t* a1, void* a2)

{
    DynObj_LinkDynamicCube_8(a1[0x1a], a1, &a1[0x3c], 4096f, 4);
    return DynObj_UpdateDynTree_8(*(a2 + 4), a1, &a1[0x4e], &a1[0x42], &a1[0x48]);
}
