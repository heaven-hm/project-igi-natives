// IGI native provenance: GO_GfxPerformance - 0x004040F0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004040F0-GO_GfxPerformance.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GO_GfxPerformance.h"
int32_t GO_GfxPerformance(int32_t context, float param_2 )

// Sig: int GO_GfxPerformance(int flags)
// Note: Sets graphics performance/detail flags for the current profile. Param:
// flags = bitmask from the detail-level mapping (see
// Config_GraphicOptionsGetPerfFlagsFromLevel). Use in config scripts. Returns
// 1.
{
    int32_t data_1 = Script_GetArg(param_2, 0);
    int32_t temp_val = g_bc2380;
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    *(temp_val * 0x564 + &g_bc1e3c) = data_1;
    memcpy(context, &item_18, 0x18);
    return context;
}
