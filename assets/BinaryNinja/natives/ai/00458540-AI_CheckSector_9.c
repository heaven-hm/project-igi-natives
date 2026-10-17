// Original IGI.EXE function: AI_CheckSector_9 (VA 0x00458540; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckSector_9.h"
int32_t AI_CheckSector_9(void* a1, void* a2)

{
    *(a2 + 0x33d) = 1;
    *(a2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_458dd0;
    return result;
}
