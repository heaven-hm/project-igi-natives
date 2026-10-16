#include "004054F0-Config_GetNumberOfPlayerProfiles.h"
/* 0x004054f0 Config_GetNumberOfPlayerProfiles full linked: callers=0 callees=1 */
int32_t Config_GetNumberOfPlayerProfiles(int32_t a1)

// Sig: int Config_GetNumberOfPlayerProfiles()
// Note: RETURNS how many player profiles exist. Use to bounds-check indexes and
// to size profile lists.
{
    long double x87_r7 = g_bc2380;
    int32_t var_18 = g_bc2380;
    double var_10 = x87_r7;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
