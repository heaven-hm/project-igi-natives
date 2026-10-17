// Original IGI.EXE function: HumanPlayer_PlaySound_4 (VA 0x0040BE40; static CFG gate PASS, CFG score 0.933).
#include "HumanPlayer_PlaySound_4.h"
int32_t HumanPlayer_PlaySound_4(void* a1, float a2)

{
    int32_t result = FallLanding(a2);

    if (!(*(a1 + 8) & 4))
        return result;

    void* valA = *(a2 + 0x6ec);

    if (valA)
    {
        struct status_msg* valA3 = SoundSys_SetMasterVolume_7(Script_FormatString(), valA + 0x114);

        if (valA3)
            SoundSys_StopSoundSample_7(valA3, a2 + 0x6a8);
    }

    __builtin_memset(a2 + 0x664, 0, 0x18);
    int32_t* valA4 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t valA5 = *valA4;
    *(a1 + 0x14) = valA5;
    return valA5(a1, a2);
}
