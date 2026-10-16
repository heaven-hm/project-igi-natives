#include "LevelFlow_LevelFailed.h"
int32_t LevelFlow_LevelFailed(int32_t a1)

// Sig: void LevelFlow_LevelFailed()
// Note: Signals that the level FAILED - triggers the retail failure flow (fail
// sound, restart/quit menu). Takes no args. Call when your scripted objective
// fails.
{
    int32_t valA1 = *(g_bc2360 + 0x61);
    int32_t v_18 = valA1;
    char* v_8 = &g_567c74;
    double v_10 = valA1;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
