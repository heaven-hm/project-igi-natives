#include "SoundSys_EvaluateTrigger_4.h"
void SoundSys_EvaluateTrigger_4()

{
    int32_t* i_1 = g_a5e5f4;

    if (!i_1)
        return;

    int32_t* i;

    do
    {
        i = i_1[1];
        int32_t* v_10_3;
        int32_t* valA10;
        int32_t objC;
        int32_t tmpD;

        if (!(i_1[2] & 1))
        {
            int32_t valA11 = i_1[6];

            if (valA11 <= 0)
                i_1[6] = valA11 + 1;
            else
            {
                void* valA12 = i_1[7];

                if (!valA12)
                {
                    SoundSys_AttachLipsync_4(i_1, &g_a5e5f4);
                    valA10 = SoundSys_LoadSoundDef_4(i_1, &g_a5e5ec);
                }
                else
                {
                    Display_SetDisplayMode_12(valA12);
                    v_10_3 = i_1[7];
                label_4e6354:
                    Display_CloseDevice_11(v_10_3);
                    SoundSys_AttachLipsync_4(i_1, &g_a5e5f4);
                    valA10 = SoundSys_LoadSoundDef_4(i_1, &g_a5e5ec);
                }
            }
        }
        else
        {
            void* valA2 = i_1[7];
            char valA3;

            if (valA2)
                valA3 = Display_SyncVSync_11(valA2, tmpD, objC, valA2);

            if (!valA2 || valA3)
            {
                int32_t valA6 = i_1[7];

                if (valA6)
                    objC = Display_SyncVSync_12(valA6, &i_1[8]);

                long double x87_r7_1 = i_1[8];
                long double f0_1 = 0f;
                x87_r7_1 - f0_1;

                if (*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                {
                    void* valA8 = i_1[7];

                    if (valA8)
                    {
                        Display_SetDisplayMode_12(valA8);
                        v_10_3 = i_1[7];
                        goto label_4e6354;
                    }

                    SoundSys_AttachLipsync_4(i_1, &g_a5e5f4);
                    valA10 = SoundSys_LoadSoundDef_4(i_1, &g_a5e5ec);
                }
            }
            else
            {
                Display_SetDisplayMode_12(i_1[7]);
                Display_CloseDevice_11(i_1[7]);
                SoundSys_AttachLipsync_4(i_1, &g_a5e5f4);
                int32_t* valA5;
                valA5 = SoundSys_LoadSoundDef_4(i_1, &g_a5e5ec);
            }
        }
        i_1 = i;
    } while (i);
}
