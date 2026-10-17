// Original IGI.EXE function: GO_GfxDisp (VA 0x00403950; static CFG gate PASS, CFG score 0.917).
#include "GO_GfxDisp.h"
int32_t GO_GfxDisp(int32_t a1, float a2 @ 0xc)

// Sig: int GO_GfxDisp(int displayMode)
// Note: Sets display-mode selection for the current profile. Param: displayMode
// = mode index from the retail display list (see Display_GetActiveMode/display
// table). Use in config scripts. igi.exe registers it with argc=3 at its site;
// the extra args go unused by the setter itself.
{
    int32_t valA = Script_GetArg(a2, 0);
    int32_t tmpD = g_bc2380;
    int32_t v_2c = 1;
    float v_30 = a2;
    *(tmpD * 0x564 + &g_bc1e30) = valA;
    *(g_bc2380 * 0x564 + &g_bc1e34) = Script_GetArg(v_30, v_2c);
    int32_t valA2 = Script_GetArg(a2, 2);
    int32_t tmpD3 = g_bc2380;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    *(tmpD3 * 0x564 + &g_bc1e38) = valA2;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
