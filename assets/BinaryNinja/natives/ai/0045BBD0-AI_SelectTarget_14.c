// Original IGI.EXE function: AI_SelectTarget_14 (VA 0x0045BBD0; static CFG gate PASS, CFG score 1.000).
#include "AI_SelectTarget_14.h"
int32_t AI_SelectTarget_14(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 1;
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = sub_458bf0;
    return result;
}
