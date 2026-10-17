// Original IGI.EXE function: AIFunction_SetSecondaryViewLength (VA 0x0044DDF0; static CFG gate FAIL, CFG score 0.833).
#include "AIFunction_SetSecondaryViewLength.h"
int32_t AIFunction_SetSecondaryViewLength(long double a1 @ fp0, int32_t a2, float a3 @ 0xc)

// Sig: void AIFunction_SetSecondaryViewLength(int length)
// Note: Sets SECONDARY view length (peripheral/short-range channel). Param:
// length = distance in engine units.
{
    Profile_ValueSet(a3, 0f);
    *(g_5bda58 + 0xd0) = a1 * 4096.0;
    void* valA = g_5bda58;
    long double x87_r0_1 = *(valA + 0xd0);
    long double f0 = *(valA + 0xd8);
    x87_r0_1 - f0;

    if (!(*(&((x87_r0_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_1, f0) ? 1 : 0) << 0xa
        | (x87_r0_1 == f0 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41))
    {
        *(valA + 0xd8) = *(valA + 0xd0);
        *(valA + 0xdc) = *(valA + 0xd4);
    }

    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a2, &v_18, 0x18);
    return a2;
}
