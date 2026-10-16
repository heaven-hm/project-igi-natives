#include "Config_GetNumberOfPlayerProfiles.h"
int32_t Config_GetNumberOfPlayerProfiles(int32_t a1)

// Sig: int Config_GetNumberOfPlayerProfiles()
// Note: RETURNS how many player profiles exist. Use to bounds-check indexes and
// to size profile lists.
{
    long double fpu7 = g_bc2380;
    int32_t v_18 = g_bc2380;
    double v_10 = fpu7;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
