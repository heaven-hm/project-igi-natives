// Original IGI.EXE function: GO_GameDiff (VA 0x00403AC0; static CFG gate FAIL, CFG score 0.833).
#include "GO_GameDiff.h"
int32_t GO_GameDiff(int32_t a1, float a2 @ 0xc)

// Sig: int GO_GameDiff(int difficulty)
// Note: Sets game difficulty for the current profile. Param: difficulty = 0
// easy, 1 medium, 2 hard (retail order). Use in config scripts. Returns 1.
{
    int32_t valA1 = Script_GetArg(a2, 0);
    int32_t tmpD = g_bc2380;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    *(tmpD * 0x564 + &g_bc1e24) = valA1;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
