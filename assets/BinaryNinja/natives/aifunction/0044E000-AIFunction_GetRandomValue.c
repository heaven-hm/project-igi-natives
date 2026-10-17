// IGI native provenance: AIFunction_GetRandomValue - 0x0044E000 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044E000-AIFunction_GetRandomValue.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIFunction_GetRandomValue.h"
int32_t AIFunction_GetRandomValue(long double context , int32_t param_2, float param_3 )

// Sig: float AIFunction_GetRandomValue(float max)
// Note: RETURNS a random value below 'max' (returns Real per retail table).
// Param: max = upper bound. Use for randomized behaviour delays/targets in AI
// scripts.
{
    float item_2c = 0.0f;
    float item_30 = param_3;
    Profile_ValueSet(item_30, item_2c);
    long double fpu_val_0_1 = Sys_AllocateMemory_14(Level_SetMission_5()) * context;
    char* item_8 = &g_567c74;
    int32_t item_18 = fpu_val_0_1;
    double item_10 = fpu_val_0_1;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}
