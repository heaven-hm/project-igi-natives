// Original IGI.EXE function: AIFunction_SetViewLength (VA 0x0044DC40; static CFG gate FAIL, CFG score 0.833).
#include "AIFunction_SetViewLength.h"
int32_t AIFunction_SetViewLength(long double a1 @ fp0, int32_t a2, float a3 @ 0xc)

// Sig: void AIFunction_SetViewLength(int length)
// Note: Sets this AI's VIEW LENGTH - how far it can see. Param: length = view
// distance in engine units. Use in AI init (AIEVENT_CREATE) to buff/nerf
// vision.
{
    Profile_ValueSet(a3, 0f);
    *(g_5bda58 + 0xb0) = a1 * 4096.0;
    void* valA = g_5bda58;
    long double x87_r0_1 = *(valA + 0xb0);
    long double f0 = *(valA + 0xb8);
    x87_r0_1 - f0;

    if (!(*(&((x87_r0_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_1, f0) ? 1 : 0) << 0xa
        | (x87_r0_1 == f0 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41))
    {
        *(valA + 0xb8) = *(valA + 0xb0);
        *(valA + 0xbc) = *(valA + 0xb4);
    }

    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a2, &v_18, 0x18);
    return a2;
}
