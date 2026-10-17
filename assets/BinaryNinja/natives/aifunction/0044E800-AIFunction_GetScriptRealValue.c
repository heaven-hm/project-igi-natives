// Original IGI.EXE function: AIFunction_GetScriptRealValue (VA 0x0044E800; static CFG gate FAIL, CFG score 0.833).
#include "AIFunction_GetScriptRealValue.h"
int32_t AIFunction_GetScriptRealValue(int32_t context, float param_2 )

// Sig: float AIFunction_GetScriptRealValue(int varId)
// Note: READS an AI-script real (float) variable. Param: varId = variable
// index. RETURNS the float.
{
    int32_t item_2c = 0;
    float item_30 = param_2;
    int32_t data_1 = Script_GetArg(item_30, item_2c);
    int32_t entity_val = g_5bda58;
    char* item_8 = &g_567c74;
    int32_t item_18 = *(entity_val + (data_1 << 3) + 0x3ae8);
    double item_10 = *(entity_val + (data_1 << 3) + 0x3ae8);
    memcpy(context, &item_18, 0x18);
    return context;
}
