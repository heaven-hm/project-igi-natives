#include "gi_platform.h"
#include "004E7690-SoundSys_PlaySoundSample_10.h"
int32_t* SoundSys_PlaySoundSample_10(int32_t* a1)

{
    if (a1[1])
    {
        float objC1 = *a1;

        if (objC1)
        {
            float v_20_1 = objC1;
            float v_24_1 = objC1;
            return Sys_OpenFileStream_21(objC1, a1[2], a1[3], 128.0f, 128.0f, 128.0f, 0x3f800000, 0x3f800000, 0,
                a1[8]);
        }
    }

    return a1;
}
