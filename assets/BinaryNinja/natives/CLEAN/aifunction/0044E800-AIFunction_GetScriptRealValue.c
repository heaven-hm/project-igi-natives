// IGI native provenance: AIFunction_GetScriptRealValue - 0x0044E800 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0044E800-AIFunction_GetScriptRealValue.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
