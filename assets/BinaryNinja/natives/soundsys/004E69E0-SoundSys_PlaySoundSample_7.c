// Original IGI.EXE function: SoundSys_PlaySoundSample_7 (VA 0x004E69E0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_PlaySoundSample_7.h"
int32_t* SoundSys_PlaySoundSample_7(int32_t* context)

{
    int32_t context_val;
    int32_t item_10 = context_val;
    int32_t* result;
    result = context[2];

    if (!result)
    {
        void item_c;
        Sys_OpenFileStream_7(&item_c, 0xa, *context);
        Terrain_ConnectGraphNode_5(&item_c);
        char* source_1 = ".RES";
        char* data_1 = &item_c;
        int32_t data_3;
        char temp_1;
        char context_1;

        while (true)
        {
            temp_1 = *data_1;
            context_1 = *source_1;
            bool c_1 = temp_1 < context_1;

            if (temp_1 == context_1)
            {
                if (!temp_1)
                {
                    data_3 = 0;
                    break;
                }

                temp_1 = data_1[1];
                context_1 = source_1[1];
                c_1 = temp_1 < context_1;

                if (temp_1 == context_1)
                {
                    data_1 = &data_1[2];
                    source_1 = &source_1[2];

                    if (temp_1)
                        continue;

                    data_3 = 0;
                    break;
                }
            }

            data_3 = data_1 - data_1 + 1;
            break;
        }

        if (!data_3)
            return SoundSys_LoadSoundDef_6(*context);

        char* source_2 = ".WAV";
        char* data_6 = &item_c;

        while (true)
        {
            temp_1 = *data_6;
            context_1 = *source_2;
            bool c_3 = temp_1 < context_1;

            if (temp_1 == context_1)
            {
                if (!temp_1)
                {
                    result = nullptr;
                    break;
                }

                temp_1 = data_6[1];
                context_1 = source_2[1];
                c_3 = temp_1 < context_1;

                if (temp_1 == context_1)
                {
                    data_6 = &data_6[2];
                    source_2 = &source_2[2];

                    if (temp_1)
                        continue;

                    result = nullptr;
                    break;
                }
            }

            result = data_6 - data_6 + 1;
            break;
        }

        if (!result)
            return Display_CreateSurface_10(*context);
    }

    return result;
}
