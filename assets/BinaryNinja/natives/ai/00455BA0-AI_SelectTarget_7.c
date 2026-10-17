// Original IGI.EXE function: AI_SelectTarget_7 (VA 0x00455BA0; static CFG gate PASS, CFG score 1.000).
#include "AI_SelectTarget_7.h"
int32_t AI_SelectTarget_7(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    *(a2 + 0x696) = 0;
    Render_TransformVertices_10(a2 + 0x68, 0f);
    int32_t result = Human_StateAnimation(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_455be0;
    return result;
}
