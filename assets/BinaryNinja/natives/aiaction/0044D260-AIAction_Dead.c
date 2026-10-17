// Original IGI.EXE function: AIAction_Dead (VA 0x0044D260; static CFG gate PASS, CFG score 0.889).
#include "AIAction_Dead.h"
int32_t AIAction_Dead(int32_t a1, float a2 @ 0xc)

// Sig: void AIAction_Dead(int param)
// Note: Runs the DEATH handling action for the AI (plays death, releases
// tasks). Param: param = death context value passed by retail scripts. Use in
// AIEVENT_DEAD handler.
{
    int32_t valA1 = Script_GetArg(a2, 0);
    int32_t v_30 = 0;
    AI_SelectTarget(sub_48ab70, v_30, valA1);
    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
