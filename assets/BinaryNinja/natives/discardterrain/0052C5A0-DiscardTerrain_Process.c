// Original IGI.EXE function: DiscardTerrain_Process (VA 0x0052C5A0; static CFG gate PASS, CFG score 1.000).
#include "DiscardTerrain_Process.h"
int32_t DiscardTerrain_Process(int32_t* context, void* param_2)

{
    DynObj_LinkDynamicCube_8(context[0x1a], context, &context[0x3c], 4096.0f, 4);
    return DynObj_UpdateDynTree_8(*(param_2 + 4), context, &context[0x4e], &context[0x42], &context[0x48]);
}
