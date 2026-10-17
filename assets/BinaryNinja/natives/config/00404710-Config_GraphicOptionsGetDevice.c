// Original IGI.EXE function: Config_GraphicOptionsGetDevice (VA 0x00404710; static CFG gate FAIL, CFG score 0.778).
#include "Config_GraphicOptionsGetDevice.h"
int32_t Config_GraphicOptionsGetDevice(int32_t context)

// Sig: int Config_GraphicOptionsGetDevice()
// Note: Returns the active profile's render-device index (index into the device
// list). Use in video-options UI scripts.
{
    int32_t context_val;
    int32_t item_20 = context_val;
    int32_t flagP = 0;
    int32_t item_1c = 0;
    int32_t item_18;

    if (g_567c90 > 0)
    {
        char* dest_1 = &g_567c98;

        while (true)
        {
            char* source_1 = dest_1;
            char* data_2 = Config_GetActiveGraphicOptions() + 0x13;
            int32_t data_4;

            while (true)
            {
                char temp_1 = *data_2;
                char context_1 = *source_1;
                bool c_1 = temp_1 < context_1;

                if (temp_1 == context_1)
                {
                    if (!temp_1)
                    {
                        data_4 = 0;
                        break;
                    }

                    temp_1 = data_2[1];
                    context_1 = source_1[1];
                    c_1 = temp_1 < context_1;

                    if (temp_1 == context_1)
                    {
                        data_2 = &data_2[2];
                        source_1 = &source_1[2];

                        if (temp_1)
                            continue;

                        data_4 = 0;
                        break;
                    }
                }

                data_4 = data_2 - data_2 + 1;
                break;
            }

            if (!data_4)
            {
                item_18 = flagP;
                int32_t item_10;
                item_10 = flagP;
                char* item_8_1 = &g_567c74;
                memcpy(context, &item_18, 0x18);
                return context;
            }

            flagP += 1;
            dest_1 = &dest_1[0x404];

            if (flagP >= g_567c90)
            {
                int32_t item_1c_1 = flagP;
                break;
            }
        }
    }

    item_18 = 0;
    int32_t item_10_1 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
