// Original IGI.EXE function: AIAction_PlaySound (VA 0x0044D750; static CFG gate PASS, CFG score 0.944).
#include "AIAction_PlaySound.h"
int32_t AIAction_PlaySound(int32_t context, float param_2 )

// Sig: void AIAction_PlaySound(int soundId, int param2, int flags)
// Note: Plays a sound from the AI (voice barks etc.). Params: soundId =
// sound/event id, param2 = observed 0 in retail, flags = AIACTIONFLAG
// (NONE=0/PUSHABLE=1).
{
    int32_t* data_1 = AI_CheckVisibility_2(g_5bda58);
    char* item_28 = 0x20;
    int32_t item_30 = 0;
    Sys_ResolveSymbol_23(param_2, item_30, &data_1[2], item_28);
    data_1[0xa] = Script_GetArg(param_2, 1);
    AI_SelectTarget(sub_48df70, data_1, Script_GetArg(param_2, 2));
    int32_t item_18 = 3;
    int32_t item_10 = 0;
    int32_t item_c = 0x40080000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
