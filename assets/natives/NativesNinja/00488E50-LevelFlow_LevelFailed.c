#include "00488E50-LevelFlow_LevelFailed.h"
/* 0x00488e50 LevelFlow_LevelFailed full linked: callers=0 callees=1 */
int32_t LevelFlow_LevelFailed(int32_t a1)

// Sig: void LevelFlow_LevelFailed()
// Note: Signals that the level FAILED - triggers the retail failure flow (fail
// sound, restart/quit menu). Takes no args. Call when your scripted objective
// fails.
{
    int32_t eax_1 = *(g_bc2360 + 0x61);
    int32_t var_18 = eax_1;
    char* var_8 = &g_567c74;
    double var_10 = eax_1;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
