// Original IGI.EXE function: GO_InMouSens (VA 0x004038E0; static CFG gate FAIL, CFG score 0.833).
#include "GO_InMouSens.h"
int32_t GO_InMouSens(long double context , int32_t param_2, float param_3 )

// Sig: float GO_InMouSens(float sensitivity)
// Note: Sets mouse sensitivity for the current profile. Param: sensitivity =
// float multiplier as saved by the options screen. Use in config scripts.
// Returns 1.
{
    Profile_ValueSet(param_3, 0.0f);
    int32_t entity_val = g_bc2380;
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    (&g_bc2360)[entity_val * 0x159] = context;
    memcpy(param_2, &item_18, 0x18);
    return param_2;
}
