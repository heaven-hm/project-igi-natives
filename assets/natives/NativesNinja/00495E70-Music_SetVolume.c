#include "00495E70-Music_SetVolume.h"
/* 0x00495e70 Music_SetVolume full linked: callers=4 callees=1 */
int32_t Music_SetVolume(float a1, float a2)

// Sig: void Music_SetVolume(float volume1,float volume2)
// Note: Sets BOTH music engine volumes (likely front/master pair) after scaling
// by the global music factor. Params: volume1, volume2 = floats 0.0-1.0 scaled
// against settings. Use for live music fades.
{
    g_543904 = a1;
    int32_t result = g_5ca150;
    g_543908 = a2;
    int32_t edi = 0;

    if (result > 0)
    {
        int32_t* esi_1 = &g_6771b8;

        do
        {
            HMIXEROBJ ecx_1 = esi_1[-0xd8];

            if (ecx_1 && esi_1[-0xcb] && esi_1[-0x77])
            {
                int32_t var_14_1 = 0;
                long double x87_r7_2 = a1 * a2;
                int32_t var_c_1 = 0;
                sub_495c10(ecx_1, &esi_1[-0x77], &esi_1[-0x28], esi_1[-1] * x87_r7_2,
                    *esi_1 * x87_r7_2);
            }

            result = g_5ca150;
            edi += 1;
            esi_1 = &esi_1[0xd9];
        } while (edi < result);
    }

    return result;
}
