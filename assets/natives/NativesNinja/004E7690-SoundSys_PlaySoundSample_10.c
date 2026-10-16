#include "004E7690-SoundSys_PlaySoundSample_10.h"
/* 0x004e7690 SoundSys_PlaySoundSample_10 full linked: callers=1 callees=1 */
int32_t* sub_4e7690(int32_t* a1)

{
    if (a1[1])
    {
        float ecx_1 = *a1;

        if (ecx_1)
        {
            float var_20_1 = ecx_1;
            float var_24_1 = ecx_1;
            return sub_4b7930(ecx_1, a1[2], a1[3], 128f, 128f, 128f, 0x3f800000, 0x3f800000, 0,
                a1[8]);
        }
    }

    return a1;
}
