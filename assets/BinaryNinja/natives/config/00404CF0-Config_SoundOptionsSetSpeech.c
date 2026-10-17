// Original IGI.EXE function: Config_SoundOptionsSetSpeech (VA 0x00404CF0; static CFG gate PASS, CFG score 0.889).
#include "Config_SoundOptionsSetSpeech.h"
int32_t Config_SoundOptionsSetSpeech(int32_t a1, float a2 @ 0xc)

// Sig: void Config_SoundOptionsSetSpeech(int onOff)
// Note: Enables/disables radio speech for the active profile. Param: onOff = 1
// on, 0 off.
{
    *(Config_SaveGameOptions() + 0xe) = Script_GetArg(a2, 0);
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
