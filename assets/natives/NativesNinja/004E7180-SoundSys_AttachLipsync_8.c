#include "004E7180-SoundSys_AttachLipsync_8.h"
/* 0x004e7180 SoundSys_AttachLipsync_8 full linked: callers=18 callees=5 */
int32_t sub_4e7180(char* a1, int32_t a2, int32_t a3)

{
    char result = g_a5e60a;

    if (result)
        return result;

    uint32_t eax = sub_497450(a1);
    int32_t eax_1 = sub_497410(a1);
    void var_58;

    if (!a3)
        sub_4974a0(&var_58);
    else
        memcpy(&var_58, a3, 0x20);

    int32_t eax_2 = g_a5e5f8;
    g_a5e5f8 = eax_2 + 1;
    int32_t eax_4 = a2;
    eax_4 |= 1;
    float* __saved_edi_3 = &var_58;
    int32_t var_78 = eax_2;
    return sub_4e6db0(var_78, eax, eax_1, eax_4, __saved_edi_3);
}
