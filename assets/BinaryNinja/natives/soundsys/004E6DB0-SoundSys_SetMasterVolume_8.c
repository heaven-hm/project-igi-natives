#include "SoundSys_SetMasterVolume_8.h"
void SoundSys_SetMasterVolume_8(int32_t a1, int32_t a2, int32_t a3, int32_t a4, float* a5)

{
    int32_t* flagP = g_a5e5f4;
    int32_t ctxB = 0;

    if (!flagP)
    {
    label_4e6ddd:
        int32_t* flagP1 = g_a5e5ec;

        if (flagP1)
        {
            float* srcS1 = a5;
            float* valA1 = &flagP1[8];
            a5 = valA1;

            if (!srcS1)
            {
                Display_SetGammaRamp_12(valA1);
                valA1 = a5;
            }
            else
                memcpy(valA1, srcS1, 0x58);

            if (g_a5e60b)
            {
            label_4e6f65:
                flagP1[7] = ctxB;
                flagP1[3] = a2;
                flagP1[4] = a3;
                flagP1[2] = a4;
                flagP1[5] = a1;
                flagP1[6] = 0;
                SoundSys_AttachLipsync_4(flagP1, &g_a5e5ec);
                SoundSys_LoadSoundDef_4(flagP1, &g_a5e5f4);
            }
            else
            {
                ctxB = Display_SwapBuffers_11(a2, a3, a4, valA1);

                if (ctxB)
                {
                    long double x87_r7_3 = *a5;
                    long double f0_1 = 0f;
                    x87_r7_3 - f0_1;

                    if (!(*(&((x87_r7_3 < f0_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_3, f0_1) ? 1 : 0) << 0xa
                            | (x87_r7_3 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4e6f65;

                    Display_SetDisplayMode_12(ctxB);
                    Display_CloseDevice_11(ctxB);
                    return;
                }

                if (g_a5e60b)
                    goto label_4e6f65;
            }
        }
    }
    else
    {
        while (flagP[4] != a3 || flagP[5] != a1)
        {
            flagP = flagP[1];

            if (!flagP)
                goto label_4e6ddd;
        }

        if (!flagP)
            goto label_4e6ddd;

        flagP[6] = 0;

        if (!a5)
            Display_SetGammaRamp_12(&flagP[8]);
        else
            memcpy(&flagP[8], a5, 0x58);

        int32_t valA2 = flagP[7];

        if (!valA2)
        {
            if (g_a5e60b)
                goto label_4e6ea8;

            int32_t valA5 = Display_SwapBuffers_11(a2, a3, a4, &flagP[8]);

            if (!valA5)
            {
            label_4e6eda:
                SoundSys_AttachLipsync_4(flagP, &g_a5e5f4);
                SoundSys_LoadSoundDef_4(flagP, &g_a5e5ec);
                return;
            }

            long double x87_r7_1 = flagP[8];
            long double f2_1 = 0f;
            x87_r7_1 - f2_1;

            if (!(*(&((x87_r7_1 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_1, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
                flagP[7] = valA5;
                goto label_4e6ea8;
            }

            Display_SetDisplayMode_12(valA5);
            Display_CloseDevice_11(valA5);
            SoundSys_AttachLipsync_4(flagP, &g_a5e5f4);
            SoundSys_LoadSoundDef_4(flagP, &g_a5e5ec);
            return;
        }

        Display_SyncVSync_12(valA2, &flagP[8]);
    label_4e6ea8:
        long double x87_r7_2 = flagP[8];
        long double f1_1 = 0f;
        x87_r7_2 - f1_1;

        if (*(&((x87_r7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            void* valA9 = flagP[7];

            if (valA9)
            {
                Display_SetDisplayMode_12(valA9);
                Display_CloseDevice_11(flagP[7]);
            }

            goto label_4e6eda;
        }
    }
}
