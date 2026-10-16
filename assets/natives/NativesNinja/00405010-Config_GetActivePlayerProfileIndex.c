#include "00405010-Config_GetActivePlayerProfileIndex.h"
/* 0x00405010 Config_GetActivePlayerProfileIndex full linked: callers=0 callees=1 */
int32_t Config_GetActivePlayerProfileIndex(int32_t a1)

// Sig: int Config_GetActivePlayerProfileIndex()
// Note: RETURNS the index of the currently-active player profile (0-based).
// Takes no arguments. Use whenever you need which profile is selected, e.g.
// before Config_DeletePlayerProfile.
{
    long double x87_r7 = g_bc2384;
    int32_t var_18 = g_bc2384;
    double var_10 = x87_r7;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
