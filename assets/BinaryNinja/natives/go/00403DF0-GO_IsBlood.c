// IGI native provenance: GO_IsBlood - 0x00403DF0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00403DF0-GO_IsBlood.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GO_IsBlood.h"
int32_t GO_IsBlood(int32_t context, float param_2 )

// Sig: int GO_IsBlood(int blood)
// Note: Toggles blood effects for the current profile. Param: blood = 1 on, 0
// off. Use in config scripts. Returns 1.
{
    char data_1 = Script_GetArg(param_2, 0);
    int32_t temp_val = g_bc2380;
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    *(temp_val * 0x564 + &g_bc1e2c) = data_1;
    memcpy(context, &item_18, 0x18);
    return context;
}
