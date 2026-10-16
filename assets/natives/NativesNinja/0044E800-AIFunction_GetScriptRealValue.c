#include "0044E800-AIFunction_GetScriptRealValue.h"
/* 0x0044e800 AIFunction_GetScriptRealValue full linked: callers=0 callees=2 */
int32_t AIFunction_GetScriptRealValue(int32_t a1, float a2 @ 0xc)

// Sig: float AIFunction_GetScriptRealValue(int varId)
// Note: READS an AI-script real (float) variable. Param: varId = variable
// index. RETURNS the float.
{
    int32_t var_2c = 0;
    float var_30 = a2;
    int32_t eax_1 = sub_4b8a20(var_30, var_2c);
    struct ai_ctx* ecx = g_5bda58;
    char* var_8 = &g_567c74;
    int32_t var_18 = *(&ecx->pad[0x3ae8] + (eax_1 << 3));
    double var_10 = *(&ecx->pad[0x3ae8] + (eax_1 << 3));
    memcpy(a1, &var_18, 0x18);
    return a1;
}
