#include "gi_platform.h"
#include "0044D6E0-AIAction_PlayAnimation.h"
int32_t AIAction_PlayAnimation(int32_t a1, float a2 )

// Sig: void AIAction_PlayAnimation(int animationId, int flags)
// Note: Plays an animation on the AI. Params: animationId = animation entry id
// (see AIFunction_AddAnimationEntry), flags = AIACTIONFLAG (NONE=0/PUSHABLE=1).
{
    int32_t* valA1 = AI_CheckVisibility_2(g_5bda58);
    int32_t valA2 = Script_GetArg(a2, 0);
    int32_t v_30 = 1;
    valA1[2] = valA2;
    AI_SelectTarget(sub_48dea0, valA1, Script_GetArg(a2, v_30));
    int32_t v_18 = 2;
    int32_t v_10 = 0;
    int32_t v_c = 0x40000000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
