#include "004EE3B0-SoundSys_PlaySoundSample_19.h"
/* 0x004ee3b0 SoundSys_PlaySoundSample_19 full linked: callers=1 callees=2 */
int32_t __fastcall sub_4ee3b0(int16_t* a1)

{
    int16_t* var_4 = a1;
    int32_t result = sub_4ee110();
    int32_t result_1 = result;
    int32_t esi = 0;

    if (result_1 > 0)
    {
        do
        {
            int16_t* eax = sub_4ee120(esi);
            int32_t ecx = 0;
            int32_t edx_1 = 0;
            ecx = g_54dc32;
            var_4 = eax;
            edx_1 = *eax;
            result = (*(((ecx * 0x180 + edx_1) << 2) + &g_a96ae0))(0, &var_4);
            esi += 1;
        } while (esi < result_1);
    }

    g_a5efd8 = 0;
    return result;
}
