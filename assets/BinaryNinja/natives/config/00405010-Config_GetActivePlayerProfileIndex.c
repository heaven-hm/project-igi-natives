// Original IGI.EXE function: Config_GetActivePlayerProfileIndex (VA 0x00405010; static CFG gate FAIL, CFG score 0.667).
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
