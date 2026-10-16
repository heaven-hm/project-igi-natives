#include "0044EAF0-AIFunction_SetAnimationInterval.h"
/* 0x0044eaf0 AIFunction_SetAnimationInterval full linked: callers=0 callees=5 */
int32_t AIFunction_SetAnimationInterval(long double a1 @ st0, long double a2 @ st1, int32_t a3, float a4 @ 0xc)

// Sig: void AIFunction_SetAnimationInterval(int entryIndex, int interval)
// Note: Sets playback INTERVAL for an animation entry. Params: entryIndex =
// animation entry added via AddAnimationEntry, interval = frame/tick interval.
// Use when tuning scripted animations.
{
    float var_2c = 0f;
    float var_30 = a4;
    Profile_ValueSet(var_30, var_2c);
    g_5bda58->interval_a = a1 * 30.0;
    Profile_ValueSet(a4, 1.40129846e-45f);
    g_5bda58->interval_b = a2 * 30.0;
    uint32_t interval_b = g_5bda58->interval_b;
    var_30 = Level_SetMission_5();
    uint32_t eax_3 = sub_4b47c0(var_30, interval_b);
    struct ai_ctx* eax_4 = g_5bda58;
    uint32_t interval_a = eax_4->interval_a;
    int32_t var_18 = 2;
    int32_t var_10 = 0;
    eax_4->interval_c = eax_3 + interval_a;
    int32_t var_c = 0x40000000;
    char* var_8 = &g_567c74;
    memcpy(a3, &var_18, 0x18);
    return a3;
}
