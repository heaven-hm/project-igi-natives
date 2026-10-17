// Original IGI.EXE function: CloseCombat (VA 0x0048DBB0; static CFG gate PASS, CFG score 1.000).
#include "CloseCombat.h"
bool CloseCombat(void* a1)

{
    char* v_8 = "Stand - CloseCombat Trigger";
    int32_t v_c = 0xffffffff;
    void* v_10 = a1;
    AI_WriteChannel(a1, 9, 1f);
    return !Locomotion_GetState(a1, 0);
}
