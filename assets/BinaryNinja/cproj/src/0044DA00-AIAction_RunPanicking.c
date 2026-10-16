#include "gi_platform.h"
#include "0044DA00-AIAction_RunPanicking.h"
int32_t AIAction_RunPanicking(long double a1 , int32_t a2, float a3 )

// Sig: void AIAction_RunPanicking(int param1, int flags)
// Note: Sends the AI into PANIC running (civilians under fire). Params: param1
// = panic target/context, flags = AIACTIONFLAG (NONE=0/PUSHABLE=1).
{
    int32_t* valA1 = AI_CheckVisibility_2(g_5bda58);
    Profile_ValueSet(a3, 0.0f);
    *(valA1 + 0x20) = a1;
    int32_t v_30 = 1;
    int32_t valA2 = Script_GetArg(a3, v_30);
    Env_ScanViewCone_12(&valA1[2]);
    AI_SelectTarget(sub_48e270, valA1, valA2);
    int32_t v_18 = 2;
    int32_t v_10 = 0;
    int32_t v_c = 0x40000000;
    char* v_8 = &g_567c74;
    memcpy(a2, &v_18, 0x18);
    return a2;
}
