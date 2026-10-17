// IGI native provenance: AIFunction_GetScriptIntegerValue - 0x0044E740 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0044E740-AIFunction_GetScriptIntegerValue.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIFunction_GetScriptIntegerValue.h"
int32_t AIFunction_GetScriptIntegerValue(int32_t context, int32_t param_2 )

// Sig: int AIFunction_GetScriptIntegerValue(int varId)
// Note: READS an AI-script integer variable written by
// AIFunction_SetScriptIntegerValue. Param: varId = variable index. RETURNS the
// integer.
{
    int32_t data_1 = Script_GetArg(param_2, 0);
    char* item_8 = &g_567c74;
    int32_t data_2 = *(g_5bda58 + (data_1 << 2) + 0x3ad4);
    int32_t item_18 = data_2;
    double item_10 = data_2;
    memcpy(context, &item_18, 0x18);
    return context;
}
