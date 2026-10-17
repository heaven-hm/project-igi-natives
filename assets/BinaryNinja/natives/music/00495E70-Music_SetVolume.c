// Original IGI.EXE function: Music_SetVolume (VA 0x00495E70; static CFG gate PASS, CFG score 1.000).
#include "Music_SetVolume.h"
int32_t Music_SetVolume(float context, float param_2)

// Sig: void Music_SetVolume(float volume1,float volume2)
// Note: Sets BOTH music engine volumes (likely front/master pair) after scaling
// by the global music factor. Params: volume1, volume2 = floats 0.0-1.0 scaled
// against settings. Use for live music fades.
{
    g_543904 = context;
    int32_t result = g_5ca150;
    g_543908 = param_2;
    int32_t dest_val = 0;

    if (result > 0)
    {
        int32_t* source_1 = &g_6771b8;

        do
        {
            HMIXEROBJ entity_1 = source_1[-0xd8];

            if (entity_1 && source_1[-0xcb] && source_1[-0x77])
            {
                int32_t item_14_1 = 0;
                long double fpu_val_7_2 = context * param_2;
                int32_t item_c_1 = 0;
                Display_ClearSurfaces_9(entity_1, &source_1[-0x77], &source_1[-0x28], source_1[-1] * fpu_val_7_2,
                    *source_1 * fpu_val_7_2);
            }

            result = g_5ca150;
            dest_val += 1;
            source_1 = &source_1[0xd9];
        } while (dest_val < result);
    }

    return result;
}
