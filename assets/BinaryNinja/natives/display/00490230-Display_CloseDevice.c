// Original IGI.EXE function: Display_CloseDevice (VA 0x00490230; static CFG gate FAIL, CFG score 0.750).
#include "Display_CloseDevice.h"
int32_t Display_CloseDevice()

{
    if (g_5c8e30)
        goto label_490267;

    int32_t* data_val = g_5c8e24;
    int32_t data_1 = (*(*data_val + 0x1c))(data_val);

    if (!data_1)
    {
        g_5c8e30 = 1;
    label_490267:
        memcpy(0xc28d62, 0xc28c62, 0x100);

        if (g_c28c60)
        {
            data_1 = 0;
            memset(0xc28c62, 0, 0x100);
        }
        else
        {
            int32_t data_3 = FX_SmokeEmit_25();

            if (data_3)
            {
                memcpy(0xc28c62, 0xc28e80, 0x100);
                return data_3;
            }

            int32_t* data_4 = g_5c8e24;
            data_1 = (*(*data_4 + 0x24))(data_4, 0x100, 0xc28c62);

            if (data_1)
            {
                int32_t* data_5 = g_5c8e24;

                if ((*(*data_5 + 0x1c))(data_5))
                {
                    data_1 = 0;
                    memset(0xc28c62, 0, 0x100);
                }
                else
                {
                    int32_t* data_7 = g_5c8e24;
                    data_1 = (*(*data_7 + 0x24))(data_7, 0x100, 0xc28c62);

                    if (data_1)
                    {
                        data_1 = 0;
                        memset(0xc28c62, 0, 0x100);
                    }
                }
            }
        }
    }

    return data_1;
}
