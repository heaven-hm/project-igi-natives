#include "004E6750-SoundSys_StopSoundSample_6.h"
/* 0x004e6750 SoundSys_StopSoundSample_6 full linked: callers=2 callees=5 */
int32_t sub_4e6750(int32_t* a1)

{
    void var_80;
    sub_4b1ee0(&var_80, 0x80, a1);
    int32_t result;
    void* ecx;
    int32_t edx;
    result = sub_4b5b60(a1);

    if (!result)
        return result;

    int32_t* var_8c_1 = a1;
    Resource_Load(result, edx, ecx, nullptr);
    sub_4b5d80(&var_80, sub_4e67b0, nullptr);
    return Resource_Unload(a1);
}
