// Original IGI.EXE function: AI_UpdatePatrol_11 (VA 0x00458BC0; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdatePatrol_11.h"
int32_t AI_UpdatePatrol_11(void* a1, void* a2)

{
    *(a2 + 0x33d) = 1;
    *(a2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_458bf0;
    return result;
}
