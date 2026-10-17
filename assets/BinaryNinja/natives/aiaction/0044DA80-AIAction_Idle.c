// Original IGI.EXE function: AIAction_Idle (VA 0x0044DA80; static CFG gate PASS, CFG score 0.889).
#include "AIAction_Idle.h"
int32_t AIAction_Idle(int32_t a1, float a2 @ 0xc)

// Sig: void AIAction_Idle(int param)
// Note: Puts the AI into IDLE (stands, resumes idle animation countdown).
// Param: idle context value (retail scripts pass their idle value). Use in
// AIEVENT_IDLE handler instead of Patrol for stationary guards.
{
    int32_t valA1 = Script_GetArg(a2, 0);
    int32_t v_30 = 0;
    AI_SelectTarget(sub_48e510, v_30, valA1);
    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
