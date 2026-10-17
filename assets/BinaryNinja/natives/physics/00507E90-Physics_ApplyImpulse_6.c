// Original IGI.EXE function: Physics_ApplyImpulse_6 (VA 0x00507E90; static CFG gate FAIL, CFG score 0.667).
#include "Physics_ApplyImpulse_6.h"
int32_t Physics_ApplyImpulse_6(int32_t* a1, int32_t a2)

{
    *a1 = a2;
    __builtin_memset(&a1[1], 0, 0x1c);
    __builtin_memset(&a1[8], 0, 0x40);
    return 0;
}
