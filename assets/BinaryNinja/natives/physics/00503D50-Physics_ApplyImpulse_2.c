// Original IGI.EXE function: Physics_ApplyImpulse_2 (VA 0x00503D50; static CFG gate PASS, CFG score 1.000).
#include "Physics_ApplyImpulse_2.h"
int32_t Physics_ApplyImpulse_2(void* context, char param_2)

{
    *(context + 0x60) = param_2;
    return param_2;
}
