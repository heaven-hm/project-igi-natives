#include "0044E740-AIFunction_GetScriptIntegerValue.h"
/* 0x0044e740 AIFunction_GetScriptIntegerValue full linked: callers=0 callees=2 */
int32_t AIFunction_GetScriptIntegerValue(int32_t a1, int32_t a2 @ 0xc)

// Sig: int AIFunction_GetScriptIntegerValue(int varId)
// Note: READS an AI-script integer variable written by
// AIFunction_SetScriptIntegerValue. Param: varId = variable index. RETURNS the
// integer.
{
    int32_t eax_1 = sub_4b8a20(a2, 0);
    char* var_8 = &g_567c74;
    int32_t eax_2 = *(&g_5bda58->pad[0x3ad4] + (eax_1 << 2));
    int32_t var_18 = eax_2;
    double var_10 = eax_2;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
