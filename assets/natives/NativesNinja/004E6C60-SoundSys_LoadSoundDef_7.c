#include "004E6C60-SoundSys_LoadSoundDef_7.h"
/* 0x004e6c60 SoundSys_LoadSoundDef_7 full linked: callers=9 callees=0 */
int32_t sub_4e6c60(void* a1, int32_t a2, int32_t a3)

{
    int32_t var_8 = a2;
    int32_t eax_1 = 0;
    eax_1 = g_548817;
    int32_t ecx_1 = 0;
    ecx_1 = *(a1 + 0x1c);
    return (*(((eax_1 * 0x180 + ecx_1) << 2) + &g_a96ae0))(a1, &var_8, var_8, a3);
}
