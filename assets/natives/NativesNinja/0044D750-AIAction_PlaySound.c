#include "0044D750-AIAction_PlaySound.h"
/* 0x0044d750 AIAction_PlaySound full linked: callers=0 callees=6 */
int32_t AIAction_PlaySound(int32_t a1, float a2 @ 0xc)

// Sig: void AIAction_PlaySound(int soundId, int param2, int flags)
// Note: Plays a sound from the AI (voice barks etc.). Params: soundId =
// sound/event id, param2 = observed 0 in retail, flags = AIACTIONFLAG
// (NONE=0/PUSHABLE=1).
{
    int32_t* eax_1 = sub_451030(g_5bda58);
    char* var_28 = 0x20;
    int32_t var_30 = 0;
    sub_4b8a80(a2, var_30, &eax_1[2], var_28);
    eax_1[0xa] = sub_4b8a20(a2, 1);
    sub_450e10(sub_48df70, eax_1, sub_4b8a20(a2, 2));
    int32_t var_18 = 3;
    int32_t var_10 = 0;
    int32_t var_c = 0x40080000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
