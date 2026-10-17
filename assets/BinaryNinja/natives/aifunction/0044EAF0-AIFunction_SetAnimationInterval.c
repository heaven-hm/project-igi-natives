// Original IGI.EXE function: AIFunction_SetAnimationInterval (VA 0x0044EAF0; static CFG gate PASS, CFG score 0.933).
#include "AIFunction_SetAnimationInterval.h"
int32_t AIFunction_SetAnimationInterval(long double context , long double param_2 , int32_t param_3, float param_4 )

// Sig: void AIFunction_SetAnimationInterval(int entryIndex, int interval)
// Note: Sets playback INTERVAL for an animation entry. Params: entryIndex =
// animation entry added via AddAnimationEntry, interval = frame/tick interval.
// Use when tuning scripted animations.
{
    float item_2c = 0.0f;
    float item_30 = param_4;
    Profile_ValueSet(item_30, item_2c);
    *(g_5bda58 + 0x3b58) = context * 30.0;
    Profile_ValueSet(param_4, 1.40129846e-45.0f);
    *(g_5bda58 + 0x3b5c) = param_2 * 30.0;
    int32_t temp_1 = *(g_5bda58 + 0x3b5c);
    item_30 = Level_SetMission_5();
    uint32_t data_3 = Sys_FreeMemory_14(item_30, temp_1);
    void* data_4 = g_5bda58;
    int32_t temp_2 = *(data_4 + 0x3b58);
    int32_t item_18 = 2;
    int32_t item_10 = 0;
    *(data_4 + 0x3b60) = data_3 + temp_2;
    int32_t item_c = 0x40000000;
    char* item_8 = &g_567c74;
    memcpy(param_3, &item_18, 0x18);
    return param_3;
}
