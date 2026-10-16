#include "gi_platform.h"
#include "00405010-Config_GetActivePlayerProfileIndex.h"
int32_t Config_GetActivePlayerProfileIndex(int32_t a1)

// Sig: int Config_GetActivePlayerProfileIndex()
// Note: RETURNS the index of the currently-active player profile (0-based).
// Takes no arguments. Use whenever you need which profile is selected, e.g.
// before Config_DeletePlayerProfile.
{
    long double fpu7 = g_bc2384;
    int32_t v_18 = g_bc2384;
    double v_10 = fpu7;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
