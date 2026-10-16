#include "gi_platform.h"
#include "0044E740-AIFunction_GetScriptIntegerValue.h"
int32_t AIFunction_GetScriptIntegerValue(int32_t a1, int32_t a2 )

// Sig: int AIFunction_GetScriptIntegerValue(int varId)
// Note: READS an AI-script integer variable written by
// AIFunction_SetScriptIntegerValue. Param: varId = variable index. RETURNS the
// integer.
{
    int32_t valA1 = Script_GetArg(a2, 0);
    char* v_8 = &g_567c74;
    int32_t valA2 = *(g_5bda58 + (valA1 << 2) + 0x3ad4);
    int32_t v_18 = valA2;
    double v_10 = valA2;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
