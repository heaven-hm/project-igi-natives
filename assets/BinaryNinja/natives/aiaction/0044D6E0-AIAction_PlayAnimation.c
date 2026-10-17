// Original IGI.EXE function: AIAction_PlayAnimation (VA 0x0044D6E0; static CFG gate PASS, CFG score 0.933).
#include "AIAction_PlayAnimation.h"
int32_t AIAction_PlayAnimation(int32_t context, float param_2 )

// Sig: void AIAction_PlayAnimation(int animationId, int flags)
// Note: Plays an animation on the AI. Params: animationId = animation entry id
// (see AIFunction_AddAnimationEntry), flags = AIACTIONFLAG (NONE=0/PUSHABLE=1).
{
    int32_t* data_1 = AI_CheckVisibility_2(g_5bda58);
    int32_t data_2 = Script_GetArg(param_2, 0);
    int32_t item_30 = 1;
    data_1[2] = data_2;
    AI_SelectTarget(sub_48dea0, data_1, Script_GetArg(param_2, item_30));
    int32_t item_18 = 2;
    int32_t item_10 = 0;
    int32_t item_c = 0x40000000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
