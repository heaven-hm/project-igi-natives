// Original IGI.EXE function: AIFunction_SetScriptRealValue (VA 0x0044E790; static CFG gate PASS, CFG score 0.889).
#include "AIFunction_SetScriptRealValue.h"
int32_t AIFunction_SetScriptRealValue(int80_t a1 @ fp0, int32_t a2, float a3 @ 0xc)

// Sig: void AIFunction_SetScriptRealValue(int varId, float value)
// Note: Writes an AI-script real (float) variable. Params: varId = script
// variable index, value = float. Pairs with AIFunction_GetScriptRealValue.
{
    int32_t valA = Script_GetArg(a3, 0);
    float v_2c = 1.40129846e-45f;
    float v_30 = a3;
    Profile_ValueSet(v_30, v_2c);
    *(g_5bda58 + (valA << 3) + 0x3ae8) = a1;
    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a2, &v_18, 0x18);
    return a2;
}
