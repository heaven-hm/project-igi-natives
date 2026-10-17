// Original IGI.EXE function: Camera_ApplyLineFilter_10 (VA 0x004A70DF; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter_10.h"
int32_t* Camera_ApplyLineFilter_10()

{
    int32_t temp_val = g_c321e0;
    int32_t* result = nullptr;
    int32_t data_val = 0;

    if (temp_val > 0)
    {
        int32_t* context_1 = g_c311dc;
        int32_t* dest_1 = context_1;

        while (true)
        {
            void* entity_1 = *dest_1;

            if (!entity_1)
            {
                int32_t dest_3 = data_val << 2;
                *(dest_3 + g_c311dc) = Camera_ApplyHandiCam_20(0x20);
                int32_t* result_1 = *(dest_3 + g_c311dc);

                if (!result_1)
                    break;

                result = result_1;
            }
            else if (!(*(entity_1 + 0xc) & 0x83))
                result = context_1[data_val];
            else
            {
                data_val += 1;
                dest_1 = &dest_1[1];

                if (data_val >= temp_val)
                    break;

                continue;
            }

            if (!result)
                break;

            result[4] = 0xffffffff;
            result[1] = 0;
            result[3] = 0;
            result[2] = 0;
            *result = 0;
            result[7] = 0;
            break;
        }
    }

    return result;
}
