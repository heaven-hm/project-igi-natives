// Original IGI.EXE function: AIFunction_SetScriptIntegerValue (VA 0x0044E6D0; static CFG gate PASS, CFG score 0.889).
#include "AIFunction_SetScriptIntegerValue.h"
int32_t AIFunction_SetScriptIntegerValue(int32_t context, float param_2 )

// Sig: void AIFunction_SetScriptIntegerValue(int varId, int value)
// Note: Writes an AI-script integer variable. Params: varId = script variable
// index, value = new integer. Use for custom AI state communication between
// scripts.
{
    int32_t data_val = Script_GetArg(param_2, 0);
    int32_t item_2c = 1;
    float item_30 = param_2;
    int32_t data_1 = Script_GetArg(item_30, item_2c);
    int32_t entity_val = g_5bda58;
    int32_t item_18 = 1;
    *(entity_val + (data_val << 2) + 0x3ad4) = data_1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
