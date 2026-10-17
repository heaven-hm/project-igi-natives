// Original IGI.EXE function: AIFunction_SetScriptIntegerValue (VA 0x0044E6D0; static CFG gate PASS, CFG score 0.889).
#include "AIFunction_SetScriptIntegerValue.h"
int32_t AIFunction_SetScriptIntegerValue(int32_t a1, float a2 @ 0xc)

// Sig: void AIFunction_SetScriptIntegerValue(int varId, int value)
// Note: Writes an AI-script integer variable. Params: varId = script variable
// index, value = new integer. Use for custom AI state communication between
// scripts.
{
    int32_t valA = Script_GetArg(a2, 0);
    int32_t v_2c = 1;
    float v_30 = a2;
    int32_t valA1 = Script_GetArg(v_30, v_2c);
    int32_t objC = g_5bda58;
    int32_t v_18 = 1;
    *(objC + (valA << 2) + 0x3ad4) = valA1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
