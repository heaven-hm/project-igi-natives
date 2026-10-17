// Original IGI.EXE function: Camera_ApplyPostProcess_9 (VA 0x004A6C37; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_9.h"
int32_t Camera_ApplyPostProcess_9(int32_t context)

{
    int32_t i = 0;
    int32_t context_val = 0;
    int32_t dest_val = 0;

    if (g_c321e0 > 0)
    {
        do
        {
            int32_t* data_2 = *(g_c311dc + (i << 2));

            if (data_2)
            {
                char entity_1 = data_2[3];

                if (entity_1 & 0x83)
                {
                    if (context == 1)
                    {
                        if (Camera_ApplyBandFilter_9(data_2) != 0xffffffff)
                            context_val += 1;
                    }
                    else if (!context && entity_1 & 2)
                    {
                        int32_t data_4 = Camera_ApplyBandFilter_9(data_2);

                        if (data_4 == 0xffffffff)
                            dest_val |= data_4;
                    }
                }
            }

            i += 1;
        } while (i < g_c321e0);
    }

    if (context == 1)
        return context_val;

    return dest_val;
}
