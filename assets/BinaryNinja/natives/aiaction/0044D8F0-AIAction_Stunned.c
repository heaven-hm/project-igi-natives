#include "AIAction_Stunned.h"
int32_t AIAction_Stunned(long double a1 @ fp0, int32_t a2, float a3 @ 0xc)

// Sig: void AIAction_Stunned(int param1, int flags)
// Note: Stuns the AI (flashbang/knockout reaction). Params: param1 = stun
// duration/context value, flags = AIACTIONFLAG (NONE=0/PUSHABLE=1).
{
    int32_t* valA1 = AI_CheckVisibility_2(g_5bda58);
    Profile_ValueSet(a3, 0f);
    valA1[2] = a1;
    int32_t v_30 = 1;
    AI_SelectTarget(sub_48e130, valA1, Script_GetArg(a3, v_30));
    int32_t v_18 = 2;
    int32_t v_10 = 0;
    int32_t v_c = 0x40000000;
    char* v_8 = &g_567c74;
    memcpy(a2, &v_18, 0x18);
    return a2;
}
