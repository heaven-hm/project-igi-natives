// IGI native provenance: GO_GameDiff - 0x00403AC0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00403AC0-GO_GameDiff.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GO_GameDiff.h"
int32_t GO_GameDiff(int32_t context, float param_2 )

// Sig: int GO_GameDiff(int difficulty)
// Note: Sets game difficulty for the current profile. Param: difficulty = 0
// easy, 1 medium, 2 hard (retail order). Use in config scripts. Returns 1.
{
    int32_t data_1 = Script_GetArg(param_2, 0);
    int32_t temp_val = g_bc2380;
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    *(temp_val * 0x564 + &g_bc1e24) = data_1;
    memcpy(context, &item_18, 0x18);
    return context;
}
