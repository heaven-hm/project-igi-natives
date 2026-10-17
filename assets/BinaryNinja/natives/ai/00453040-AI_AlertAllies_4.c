// Original IGI.EXE function: AI_AlertAllies_4 (VA 0x00453040; static CFG gate PASS, CFG score 1.000).
#include "AI_AlertAllies_4.h"
int32_t AI_AlertAllies_4(int32_t* a1, int32_t* a2, void* a3, int32_t a4)

{
    *a1 = 0;
    *a2 = 0;
    void* valA1 = Script_ExecuteLevelScript_23(a3, a4);
    *a1 = *(valA1 + 0x28) * 0.5f;
    int32_t result = *(valA1 + 0x28) * 0.5f;
    *a2 = result;
    return result;
}
