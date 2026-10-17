// Original IGI.EXE function: SoundSys_EvaluateTrigger_4 (VA 0x004E62C0; static CFG gate PASS, CFG score 1.000).
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
        int32_t* item_10_3;
        int32_t* data_10;
        int32_t entity_val;
        int32_t temp_val;

        if (!(i_1[2] & 1))
        {
            int32_t data_11 = i_1[6];

            if (data_11 <= 0)
                i_1[6] = data_11 + 1;
            else
            {
                void* data_12 = i_1[7];

                if (!data_12)
                {
                    SoundSys_AttachLipsync_4(i_1, &g_a5e5f4);
                    data_10 = SoundSys_LoadSoundDef_4(i_1, &g_a5e5ec);
                }
                else
                {
                    Display_SetDisplayMode_12(data_12);
                    item_10_3 = i_1[7];
                label_4e6354:
                    Display_CloseDevice_11(item_10_3);
                    SoundSys_AttachLipsync_4(i_1, &g_a5e5f4);
                    data_10 = SoundSys_LoadSoundDef_4(i_1, &g_a5e5ec);
                }
            }
        }
        else
        {
            void* data_2 = i_1[7];
            char data_3;

            if (data_2)
                data_3 = Display_SyncVSync_11(data_2, temp_val, entity_val, data_2);

            if (!data_2 || data_3)
            {
                int32_t data_6 = i_1[7];

                if (data_6)
                    entity_val = Display_SyncVSync_12(data_6, &i_1[8]);

                long double fpu_val_7_1 = i_1[8];
                long double f0_1 = 0.0f;
                fpu_val_7_1 - f0_1;

                if (*(&((fpu_val_7_1 < f0_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                {
                    void* data_8 = i_1[7];

                    if (data_8)
                    {
                        Display_SetDisplayMode_12(data_8);
                        item_10_3 = i_1[7];
                        goto label_4e6354;
                    }

                    SoundSys_AttachLipsync_4(i_1, &g_a5e5f4);
                    data_10 = SoundSys_LoadSoundDef_4(i_1, &g_a5e5ec);
                }
            }
            else
            {
                Display_SetDisplayMode_12(i_1[7]);
                Display_CloseDevice_11(i_1[7]);
                SoundSys_AttachLipsync_4(i_1, &g_a5e5f4);
                int32_t* data_5;
                data_5 = SoundSys_LoadSoundDef_4(i_1, &g_a5e5ec);
            }
        }
        i_1 = i;
    } while (i);
}
