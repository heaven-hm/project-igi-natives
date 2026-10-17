// Original IGI.EXE function: AIFunction_SetScriptRealValue (VA 0x0044E790; static CFG gate PASS, CFG score 0.889).
#include "AIFunction_SetScriptRealValue.h"
int32_t AIFunction_SetScriptRealValue(long double context , int32_t param_2, float param_3 )

// Sig: void AIFunction_SetScriptRealValue(int varId, float value)
// Note: Writes an AI-script real (float) variable. Params: varId = script
// variable index, value = float. Pairs with AIFunction_GetScriptRealValue.
{
    int32_t data_val = Script_GetArg(param_3, 0);
    float item_2c = 1.40129846e-45.0f;
    float item_30 = param_3;
    Profile_ValueSet(item_30, item_2c);
    *(g_5bda58 + (data_val << 3) + 0x3ae8) = context;
    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}
