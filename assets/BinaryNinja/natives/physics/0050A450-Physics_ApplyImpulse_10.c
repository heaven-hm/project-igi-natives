// Original IGI.EXE function: Physics_ApplyImpulse_10 (VA 0x0050A450; static CFG gate PASS, CFG score 1.000).
#include "Physics_ApplyImpulse_10.h"
uint32_t Physics_ApplyImpulse_10(void* context , char* param_2, uint32_t param_3)

{
    uint32_t result = Terrain_ConnectGraphNode_4(param_2, 1, param_3, *(context + 0x98));

    if (result < param_3)
        *(context + 0x9c) = 1;

    return result;
}
