// Original IGI.EXE function: AI_UpdatePatrol_9 (VA 0x00456770; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdatePatrol_9.h"
int32_t AI_UpdatePatrol_9(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    *(param_2 + 0x696) = 1;
    int32_t result =
        Bones_PlayAnimation(param_2 + 0x68, 0, *(FX_FragmentSimulate_14(param_2 + 0x254, *(param_2 + 0x2e8)) + 4), 0, 0.0f);
    *(context + 0x14) = sub_4561a0;
    return result;
}
