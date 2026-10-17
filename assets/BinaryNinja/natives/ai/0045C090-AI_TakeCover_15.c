// Original IGI.EXE function: AI_TakeCover_15 (VA 0x0045C090; static CFG gate PASS, CFG score 1.000).
#include "AI_TakeCover_15.h"
int32_t AI_TakeCover_15(void* a1, void* a2)

{
    *(a2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_45c0c0;
    return result;
}
