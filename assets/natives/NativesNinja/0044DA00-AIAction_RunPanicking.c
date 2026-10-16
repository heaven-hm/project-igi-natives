#include "0044DA00-AIAction_RunPanicking.h"
/* 0x0044da00 AIAction_RunPanicking full linked: callers=0 callees=6 */
int32_t AIAction_RunPanicking(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: void AIAction_RunPanicking(int param1, int flags)
// Note: Sends the AI into PANIC running (civilians under fire). Params: param1
// = panic target/context, flags = AIACTIONFLAG (NONE=0/PUSHABLE=1).
{
    int32_t* eax_1 = sub_451030(g_5bda58);
    Profile_ValueSet(a3, 0f);
    *(eax_1 + 0x20) = a1;
    int32_t var_30 = 1;
    int32_t eax_2 = sub_4b8a20(a3, var_30);
    void* var_38 = &eax_1[2];
    AIFunction_GetEventData();
    sub_450e10(sub_48e270, eax_1, eax_2);
    int32_t var_18 = 2;
    int32_t var_10 = 0;
    int32_t var_c = 0x40000000;
    char* var_8 = &g_567c74;
    memcpy(a2, &var_18, 0x18);
    return a2;
}
