// Original IGI.EXE function: Physics_ApplyImpulse_6 (VA 0x00507E90; static CFG gate FAIL, CFG score 0.667).
#include "Physics_ApplyImpulse_6.h"
int32_t Physics_ApplyImpulse_6(int32_t* context, int32_t param_2)

{
    *context = param_2;
    memset(&context[1], 0, 0x1c);
    memset(&context[8], 0, 0x40);
    return 0;
}
