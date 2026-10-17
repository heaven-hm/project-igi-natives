// Original IGI.EXE function: AI_UpdatePatrol_9 (VA 0x00456770; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdatePatrol_9.h"
int32_t AI_UpdatePatrol_9(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    *(a2 + 0x696) = 1;
    int32_t result =
        Bones_PlayAnimation(a2 + 0x68, 0, *(FX_FragmentSimulate_14(a2 + 0x254, *(a2 + 0x2e8)) + 4), 0, 0f);
    *(a1 + 0x14) = sub_4561a0;
    return result;
}
