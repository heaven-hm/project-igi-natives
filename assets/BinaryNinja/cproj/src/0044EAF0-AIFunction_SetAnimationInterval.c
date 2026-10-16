#include "gi_platform.h"
#include "0044EAF0-AIFunction_SetAnimationInterval.h"
int32_t AIFunction_SetAnimationInterval(long double a1 , long double a2 , int32_t a3, float a4 )

// Sig: void AIFunction_SetAnimationInterval(int entryIndex, int interval)
// Note: Sets playback INTERVAL for an animation entry. Params: entryIndex =
// animation entry added via AddAnimationEntry, interval = frame/tick interval.
// Use when tuning scripted animations.
{
    float v_2c = 0.0f;
    float v_30 = a4;
    Profile_ValueSet(v_30, v_2c);
    *(g_5bda58 + 0x3b58) = a1 * 30.0;
    Profile_ValueSet(a4, 1.40129846e-45.0f);
    *(g_5bda58 + 0x3b5c) = a2 * 30.0;
    int32_t tmpD1 = *(g_5bda58 + 0x3b5c);
    v_30 = Level_SetMission_5();
    uint32_t valA3 = Sys_FreeMemory_14(v_30, tmpD1);
    void* valA4 = g_5bda58;
    int32_t tmpD2 = *(valA4 + 0x3b58);
    int32_t v_18 = 2;
    int32_t v_10 = 0;
    *(valA4 + 0x3b60) = valA3 + tmpD2;
    int32_t v_c = 0x40000000;
    char* v_8 = &g_567c74;
    memcpy(a3, &v_18, 0x18);
    return a3;
}
