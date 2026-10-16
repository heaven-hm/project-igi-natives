#include "0044D8F0-AIAction_Stunned.h"
/* 0x0044d8f0 AIAction_Stunned full linked: callers=0 callees=5 */
int32_t AIAction_Stunned(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: void AIAction_Stunned(int param1, int flags)
// Note: Stuns the AI (flashbang/knockout reaction). Params: param1 = stun
// duration/context value, flags = AIACTIONFLAG (NONE=0/PUSHABLE=1).
{
    int32_t* eax_1 = sub_451030(g_5bda58);
    Profile_ValueSet(a3, 0f);
    eax_1[2] = a1;
    int32_t var_30 = 1;
    sub_450e10(sub_48e130, eax_1, sub_4b8a20(a3, var_30));
    int32_t var_18 = 2;
    int32_t var_10 = 0;
    int32_t var_c = 0x40000000;
    char* var_8 = &g_567c74;
    memcpy(a2, &var_18, 0x18);
    return a2;
}
