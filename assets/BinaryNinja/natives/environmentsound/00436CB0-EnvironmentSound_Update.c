// Original IGI.EXE function: EnvironmentSound_Update (VA 0x00436CB0; static CFG gate PASS, CFG score 1.000).
#include "EnvironmentSound_Update.h"
int32_t* EnvironmentSound_Update(void* a1)

{
    void* valA = *(a1 + 0x38);
    *(a1 + 0x34) = 0;

    if (valA)
    {
        SoundSys_SetFrequency_7(valA);
        *(a1 + 0x38) = 0;
    }

    struct status_msg* valA2 = SoundSys_SetMasterVolume_7(a1, a1 + 0x24);
    int32_t objC = *(a1 + 0x34);
    *(a1 + 0x38) = valA2;
    SoundSys_LoadSoundDef_7(valA2, 0xbf800000, objC);
    int32_t* result = a1 + 0x4c;
    int32_t i_1 = 4;
    int32_t i;

    do
    {
        result[-4] = 0;
        *result = 0;
        result = &result[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
