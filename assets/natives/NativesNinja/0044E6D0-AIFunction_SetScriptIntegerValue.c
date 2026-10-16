#include "0044E6D0-AIFunction_SetScriptIntegerValue.h"
/* 0x0044e6d0 AIFunction_SetScriptIntegerValue full linked: callers=0 callees=3 */
int32_t AIFunction_SetScriptIntegerValue(int32_t a1, float a2 @ 0xc)

// Sig: void AIFunction_SetScriptIntegerValue(int varId, int value)
// Note: Writes an AI-script integer variable. Params: varId = script variable
// index, value = new integer. Use for custom AI state communication between
// scripts.
{
    int32_t eax = sub_4b8a20(a2, 0);
    int32_t var_2c = 1;
    float var_30 = a2;
    int32_t eax_1 = sub_4b8a20(var_30, var_2c);
    struct ai_ctx* ecx = g_5bda58;
    int32_t var_18 = 1;
    *(&ecx->pad[0x3ad4] + (eax << 2)) = eax_1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
