// IGI native provenance: Config_GetNumberOfPlayerProfiles - 0x004054F0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004054F0-Config_GetNumberOfPlayerProfiles.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_GetNumberOfPlayerProfiles.h"
int32_t Config_GetNumberOfPlayerProfiles(int32_t context)

// Sig: int Config_GetNumberOfPlayerProfiles()
// Note: RETURNS how many player profiles exist. Use to bounds-check indexes and
// to size profile lists.
{
    long double fpu7 = g_bc2380;
    int32_t item_18 = g_bc2380;
    double item_10 = fpu7;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
