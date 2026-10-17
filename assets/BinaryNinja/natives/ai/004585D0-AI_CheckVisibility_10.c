// Original IGI.EXE function: AI_CheckVisibility_10 (VA 0x004585D0; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckVisibility_10.h"
int32_t AI_CheckVisibility_10(void* context, void* param_2)

{
    *(param_2 + 0xd18) = 0;
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = AI_CheckSector_13;
    return result;
}
