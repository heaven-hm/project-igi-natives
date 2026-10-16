#include "gi_platform.h"
#include "0044E800-AIFunction_GetScriptRealValue.h"
int32_t AIFunction_GetScriptRealValue(int32_t a1, float a2 )

// Sig: float AIFunction_GetScriptRealValue(int varId)
// Note: READS an AI-script real (float) variable. Param: varId = variable
// index. RETURNS the float.
{
    int32_t v_2c = 0;
    float v_30 = a2;
    int32_t valA1 = Script_GetArg(v_30, v_2c);
    int32_t objC = g_5bda58;
    char* v_8 = &g_567c74;
    int32_t v_18 = *(objC + (valA1 << 3) + 0x3ae8);
    double v_10 = *(objC + (valA1 << 3) + 0x3ae8);
    memcpy(a1, &v_18, 0x18);
    return a1;
}
