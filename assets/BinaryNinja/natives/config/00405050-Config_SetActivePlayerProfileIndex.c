// IGI native provenance: Config_SetActivePlayerProfileIndex - 0x00405050 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00405050-Config_SetActivePlayerProfileIndex.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_SetActivePlayerProfileIndex.h"
int32_t Config_SetActivePlayerProfileIndex(int32_t context, float param_2 )

// Sig: void Config_SetActivePlayerProfileIndex(int index)
// Note: Makes 'index' the active player profile. Param: index = 0-based profile
// index (must exist; see Config_GetNumberOfPlayerProfiles).
{
    g_bc2384 = Script_GetArg(param_2, 0);
    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
