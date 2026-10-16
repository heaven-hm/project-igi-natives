#include "0044E790-AIFunction_SetScriptRealValue.h"
/* 0x0044e790 AIFunction_SetScriptRealValue full linked: callers=0 callees=3 */
int32_t AIFunction_SetScriptRealValue(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: void AIFunction_SetScriptRealValue(int varId, float value)
// Note: Writes an AI-script real (float) variable. Params: varId = script
// variable index, value = float. Pairs with AIFunction_GetScriptRealValue.
{
    int32_t eax = sub_4b8a20(a3, 0);
    float var_2c = 1.40129846e-45f;
    float var_30 = a3;
    Profile_ValueSet(var_30, var_2c);
    *(&g_5bda58->pad[0x3ae8] + (eax << 3)) = a1;
    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a2, &var_18, 0x18);
    return a2;
}
