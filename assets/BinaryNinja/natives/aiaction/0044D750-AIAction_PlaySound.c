#include "AIAction_PlaySound.h"
int32_t AIAction_PlaySound(int32_t a1, float a2 @ 0xc)

// Sig: void AIAction_PlaySound(int soundId, int param2, int flags)
// Note: Plays a sound from the AI (voice barks etc.). Params: soundId =
// sound/event id, param2 = observed 0 in retail, flags = AIACTIONFLAG
// (NONE=0/PUSHABLE=1).
{
    int32_t* valA1 = AI_CheckVisibility_2(g_5bda58);
    char* v_28 = 0x20;
    int32_t v_30 = 0;
    Sys_ResolveSymbol_23(a2, v_30, &valA1[2], v_28);
    valA1[0xa] = Script_GetArg(a2, 1);
    AI_SelectTarget(sub_48df70, valA1, Script_GetArg(a2, 2));
    int32_t v_18 = 3;
    int32_t v_10 = 0;
    int32_t v_c = 0x40080000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
