// Original IGI.EXE function: AIFunction_SetDeathAnimation (VA 0x0044E210; static CFG gate FAIL, CFG score 0.833).
#include "AIFunction_SetDeathAnimation.h"
int32_t AIFunction_SetDeathAnimation(int32_t a1, float a2 @ 0xc)

// Sig: void AIFunction_SetDeathAnimation(int animId)
// Note: Overrides the death animation played when this AI dies. Param: animId =
// animation entry id. Use in AI init for custom deaths.
{
    int32_t valA1 = Script_GetArg(a2, 0);
    void* objC = g_5bda58;
    int32_t v_18 = 1;
    *(objC + 0x3ad0) = valA1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
