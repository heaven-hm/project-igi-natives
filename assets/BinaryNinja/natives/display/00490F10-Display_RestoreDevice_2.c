// Original IGI.EXE function: Display_RestoreDevice_2 (VA 0x00490F10; static CFG gate PASS, CFG score 1.000).
#include "Display_RestoreDevice_2.h"
int32_t Display_RestoreDevice_2(float context)

{
    int32_t entity_val;
    int32_t item_4 = entity_val;
    int32_t* flagP = context;
    int32_t result = flagP[8];

    if (result != flagP[7])
    {
        Display_CouldnTReadPixelForm_2(flagP);

        if (flagP[0x5a])
        {
            int32_t dest_1 = *flagP;
            Display_OpenDevice_14();
            Display_ClearSurfaces_13(&flagP[0x5b], 1);
            int32_t data_2 = flagP[0x453];

            if (data_2 < flagP[0x452])
            {
                int32_t temp_3 = data_2 * 0x1f;
                void* source_1 = &flagP[temp_3];

                if (dest_1 <= flagP[temp_3 + 0x7a] + flagP[temp_3 + 0x78] + flagP[temp_3 + 0x77])
                {
                    int32_t entity_7 = *(source_1 + 0x1dc);
                    context = 1.0f;

                    if (dest_1 >= entity_7)
                    {
                        if (*(source_1 + 0x1d4) != 0xffffffff)
                        {
                            int32_t data_5 = *(source_1 + 0x1e4);
                            int32_t data_6 = data_5 + entity_7;

                            if (dest_1 < data_6)
                                context = 1.0f - (data_6 - dest_1) / data_5;
                        }

                        if (*(source_1 + 0x1d8) != 0xffffffff)
                        {
                            int32_t temp_5 = *(source_1 + 0x1e0);

                            if (dest_1 >= temp_5 + entity_7)
                            {
                                int32_t data_9 = *(source_1 + 0x1e8);
                                context = (data_9 - dest_1 + temp_5 + entity_7) / data_9;
                            }
                        }

                        int32_t i = 0;

                        if (*(source_1 + 0x1ec) > 0)
                        {
                            void** dest_2 = source_1 + 0x220;

                            do
                            {
                                *(*dest_2 + 0x14) = context * *(source_1 + 0x1f0) * 128.0f;
                                *(*dest_2 + 0x18) = context * *(source_1 + 0x1f4) * 128.0f;
                                *(*dest_2 + 0x1c) = context * *(source_1 + 0x1f8) * 128.0f;
                                void* data_15 = *dest_2;
                                *(data_15 + 0x24) |= 0x80000;
                                *(*dest_2 + 0x10) = context;
                                Sys_CloseFileStream_18(*dest_2);
                                i += 1;
                                dest_2 = &dest_2[1];
                            } while (i < *(source_1 + 0x1ec));
                        }
                    }
                }
                else
                    flagP[0x453] = data_2 + 1;
            }

            Display_SetGammaRamp_13();
        }

        result = Display_SetDisplayMode_4();
        flagP[8] = flagP[7];
    }

    result = 1;
    return result;
}
