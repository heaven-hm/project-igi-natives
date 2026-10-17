// Original IGI.EXE function: AI_CheckVisibility_12 (VA 0x00459380; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckVisibility_12.h"
void* AI_CheckVisibility_12(void* context, void* param_2)

{
    *(param_2 + 0x696) = 1;
    *(param_2 + 0x33d) = 0;
    *(param_2 + 0xd14) = 0;
    Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    void* result = FX_TrailUpdate_15(param_2);
    *(context + 0x14) = AI_UpdatePatrol_16;
    return result;
}
