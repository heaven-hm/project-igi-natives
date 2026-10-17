// Original IGI.EXE function: SoundSys_SetMasterVolume_8 (VA 0x004E6DB0; static CFG gate PASS, CFG score 0.965).
#include "SoundSys_SetMasterVolume_8.h"
void SoundSys_SetMasterVolume_8(int32_t context, int32_t param_2, int32_t param_3, int32_t param_4, float* param_5)

{
    int32_t* flagP = g_a5e5f4;
    int32_t context_val = 0;

    if (!flagP)
    {
    label_4e6ddd:
        int32_t* flagP1 = g_a5e5ec;

        if (flagP1)
        {
            float* source_1 = param_5;
            float* data_1 = &flagP1[8];
            param_5 = data_1;

            if (!source_1)
            {
                Display_SetGammaRamp_12(data_1);
                data_1 = param_5;
            }
            else
                memcpy(data_1, source_1, 0x58);

            if (g_a5e60b)
            {
            label_4e6f65:
                flagP1[7] = context_val;
                flagP1[3] = param_2;
                flagP1[4] = param_3;
                flagP1[2] = param_4;
                flagP1[5] = context;
                flagP1[6] = 0;
                SoundSys_AttachLipsync_4(flagP1, &g_a5e5ec);
                SoundSys_LoadSoundDef_4(flagP1, &g_a5e5f4);
            }
            else
            {
                context_val = Display_SwapBuffers_11(param_2, param_3, param_4, data_1);

                if (context_val)
                {
                    long double fpu_val_7_3 = *param_5;
                    long double f0_1 = 0.0f;
                    fpu_val_7_3 - f0_1;

                    if (!(*(&((fpu_val_7_3 < f0_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_3, f0_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_3 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4e6f65;

                    Display_SetDisplayMode_12(context_val);
                    Display_CloseDevice_11(context_val);
                    return;
                }

                if (g_a5e60b)
                    goto label_4e6f65;
            }
        }
    }
    else
    {
        while (flagP[4] != param_3 || flagP[5] != context)
        {
            flagP = flagP[1];

            if (!flagP)
                goto label_4e6ddd;
        }

        if (!flagP)
            goto label_4e6ddd;

        flagP[6] = 0;

        if (!param_5)
            Display_SetGammaRamp_12(&flagP[8]);
        else
            memcpy(&flagP[8], param_5, 0x58);

        int32_t data_2 = flagP[7];

        if (!data_2)
        {
            if (g_a5e60b)
                goto label_4e6ea8;

            int32_t data_5 = Display_SwapBuffers_11(param_2, param_3, param_4, &flagP[8]);

            if (!data_5)
            {
            label_4e6eda:
                SoundSys_AttachLipsync_4(flagP, &g_a5e5f4);
                SoundSys_LoadSoundDef_4(flagP, &g_a5e5ec);
                return;
            }

            long double fpu_val_7_1 = flagP[8];
            long double f2_1 = 0.0f;
            fpu_val_7_1 - f2_1;

            if (!(*(&((fpu_val_7_1 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_1, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
                flagP[7] = data_5;
                goto label_4e6ea8;
            }

            Display_SetDisplayMode_12(data_5);
            Display_CloseDevice_11(data_5);
            SoundSys_AttachLipsync_4(flagP, &g_a5e5f4);
            SoundSys_LoadSoundDef_4(flagP, &g_a5e5ec);
            return;
        }

        Display_SyncVSync_12(data_2, &flagP[8]);
    label_4e6ea8:
        long double fpu_val_7_2 = flagP[8];
        long double f1_1 = 0.0f;
        fpu_val_7_2 - f1_1;

        if (*(&((fpu_val_7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            void* data_9 = flagP[7];

            if (data_9)
            {
                Display_SetDisplayMode_12(data_9);
                Display_CloseDevice_11(flagP[7]);
            }

            goto label_4e6eda;
        }
    }
}
