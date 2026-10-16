#include "gi_platform.h"
#include "004B8A50-Profile_ValueSet.h"
int32_t Profile_ValueSet(float a1, float a2)

// Sig: void Profile_ValueSet(void* profile, int index)
// Note: Sets a profile value through the profile object/value-table path used
// by the retail music and sound-effects option setters. Ghidra/r2 CFG
// agreement: 3 basic blocks and 2 edges; see
// assets/IGI1-Native-Name-Evidence.json.
{
    long double fpu0;
    long double fpu1;

    if (!(*(int32_t*)(uintptr_t)(a1 + 4)))
        return (Sys_DispatchOpcode_24(fpu0, fpu1, (*(int32_t*)(uintptr_t)(*(a1 + 8) + (a2 << 2)))), 0);
    int32_t result;
    int32_t tmpD;
    int80_t fp0;
    fp0 = Sys_DispatchOpcode_28(a1, tmpD, a2, a1, a2);
    return result;
}
