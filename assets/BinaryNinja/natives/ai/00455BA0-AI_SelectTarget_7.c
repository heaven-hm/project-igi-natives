// Original IGI.EXE function: AI_SelectTarget_7 (VA 0x00455BA0; static CFG gate PASS, CFG score 1.000).
#include "AI_SelectTarget_7.h"
int32_t AI_SelectTarget_7(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    *(param_2 + 0x696) = 0;
    Render_TransformVertices_10(param_2 + 0x68, 0.0f);
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = sub_455be0;
    return result;
}
