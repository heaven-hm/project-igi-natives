// Original IGI.EXE function: SoundSys_PlaySoundSample_19 (VA 0x004EE3B0; static CFG gate PASS, CFG score 0.889).
#include "SoundSys_PlaySoundSample_19.h"
int32_t __fastcall SoundSys_PlaySoundSample_19(int16_t* a1)

{
    int16_t* v_4 = a1;
    int32_t result = SoundSys_StopSoundSample_18();
    int32_t result_1 = result;
    int32_t srcS = 0;

    if (result_1 > 0)
    {
        do
        {
            int16_t* valA = SoundSys_LoadSoundDef_18(srcS);
            int32_t objC = 0;
            int32_t tmpD1 = 0;
            objC = g_54dc32;
            v_4 = valA;
            tmpD1 = *valA;
            result = (*(((objC * 0x180 + tmpD1) << 2) + &g_a96ae0))(0, &v_4);
            srcS += 1;
        } while (srcS < result_1);
    }

    g_a5efd8 = 0;
    return result;
}
