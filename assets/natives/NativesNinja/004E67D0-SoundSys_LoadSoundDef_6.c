#include "004E67D0-SoundSys_LoadSoundDef_6.h"
/* 0x004e67d0 SoundSys_LoadSoundDef_6 full linked: callers=2 callees=5 */
int32_t sub_4e67d0(int32_t* a1)

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
    sub_4b5d80(&var_80, sub_4e6830, nullptr);
    return Resource_Unload(a1);
}
