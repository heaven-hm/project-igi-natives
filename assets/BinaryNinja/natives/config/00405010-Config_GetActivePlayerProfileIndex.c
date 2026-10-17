// IGI native provenance: Config_GetActivePlayerProfileIndex - 0x00405010 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00405010-Config_GetActivePlayerProfileIndex.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_GetActivePlayerProfileIndex.h"
int32_t Config_GetActivePlayerProfileIndex(int32_t context)

// Sig: int Config_GetActivePlayerProfileIndex()
// Note: RETURNS the index of the currently-active player profile (0-based).
// Takes no arguments. Use whenever you need which profile is selected, e.g.
// before Config_DeletePlayerProfile.
{
    long double fpu7 = g_bc2384;
    int32_t item_18 = g_bc2384;
    double item_10 = fpu7;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
