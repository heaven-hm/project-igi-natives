#include "004B8A50-Profile_ValueSet.h"
/* 0x004b8a50 Profile_ValueSet full linked: callers=201 callees=2 */
int32_t Profile_ValueSet(float a1, float a2)

// Sig: void Profile_ValueSet(void* profile, int index)
// Note: Sets a profile value through the profile object/value-table path used
// by the retail music and sound-effects option setters. Ghidra/r2 CFG
// agreement: 3 basic blocks and 2 edges; see
// assets/IGI1-Native-Name-Evidence.json.
{
    long double x87_r0;
    long double x87_r1;

    if (!*(a1 + 4))
        return sub_4b9660(x87_r0, x87_r1, *(*(a1 + 8) + (a2 << 2)));
    int32_t result;
    int32_t edx;
    int80_t st0;
    st0 = sub_4bd010(a1, edx, a2, a1, a2);
    return result;
}
