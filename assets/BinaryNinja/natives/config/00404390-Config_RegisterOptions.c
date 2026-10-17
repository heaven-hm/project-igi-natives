// Original IGI.EXE function: Config_RegisterOptions (VA 0x00404390; static CFG gate PASS, CFG score 1.000).
#include "Config_RegisterOptions.h"
void* Config_RegisterOptions(void* context)

{
    void* result = context + 0x1c;

    if (result && *(context + 4) >= 0x280 && *(context + 8) >= 0x1e0)
    {
        result = g_567c90;
        int32_t temp_1 = 0;

        if (result > 0)
        {
            int32_t context_val;
            int32_t item_8_1 = context_val;
            int32_t dest_1 = 0;

            while (true)
            {
                char* source_1 = dest_1 + &g_567c98;
                char* data_val = context + 0x1c;
                int32_t data_2;

                while (true)
                {
                    char context_1 = *data_val;
                    char f0_1 = *source_1;
                    bool c_1 = context_1 < f0_1;

                    if (context_1 == f0_1)
                    {
                        if (!context_1)
                        {
                            data_2 = 0;
                            break;
                        }

                        context_1 = data_val[1];
                        char f3_1 = source_1[1];
                        c_1 = context_1 < f3_1;

                        if (context_1 == f3_1)
                        {
                            data_val = &data_val[2];
                            source_1 = &source_1[2];

                            if (context_1)
                                continue;

                            data_2 = 0;
                            break;
                        }
                    }

                    data_2 = data_val - data_val + 1;
                    break;
                }

                if (!data_2)
                {
                    int32_t data_3 = *(dest_1 + &g_568098);
                    *(dest_1 + data_3 * 0xc + 0x567d98) = *(context + 4);
                    *(dest_1 + data_3 * 0xc + 0x567d9c) = *(context + 8);
                    *(dest_1 + data_3 * 0xc + 0x567da0) = *(context + 0x10);
                    *(dest_1 + &g_568098) += 1;
                }

                result = g_567c90;
                temp_1 += 1;
                dest_1 += 0x404;

                if (temp_1 >= result)
                    break;
            }
        }
    }

    return result;
}
