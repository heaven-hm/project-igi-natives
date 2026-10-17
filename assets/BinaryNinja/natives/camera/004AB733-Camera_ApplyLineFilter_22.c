// Original IGI.EXE function: Camera_ApplyLineFilter_22 (VA 0x004AB733; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter_22.h"
void Camera_ApplyLineFilter_22(int32_t context)

{
    int32_t entity_val;
    int32_t item_8 = entity_val;
    int32_t* source_val = g_5446b4;

    do
    {
        if (source_val[4] != 0xffffffff)
        {
            int32_t item_8_1 = 0;
            int32_t* dest_1 = &source_val[0x804];
            BOOL data_val;

            for (int32_t j = 0x3ff000; j >= 0; )
            {
                if (*dest_1 == 0xf0 && VirtualFree(j + source_val[4], 0x1000, MEM_DECOMMIT))
                {
                    *dest_1 = 0xffffffff;
                    g_936200 -= 1;
                    data_val = source_val[3];

                    if (!data_val || data_val > dest_1)
                        source_val[3] = dest_1;

                    item_8_1 += 1;
                    int32_t f0_1 = context;
                    context -= 1;

                    if (f0_1 == 1)
                        break;
                }

                j -= 0x1000;
                dest_1 -= 8;
            }

            int32_t* entity_1 = source_val;
            source_val = source_val[1];

            if (item_8_1 && entity_1[6] == 0xffffffff)
            {
                data_val = &entity_1[8];
                int32_t temp_1 = 1;

                while (*data_val == 0xffffffff)
                {
                    temp_1 += 1;
                    data_val += 8;

                    if (temp_1 >= 0x400)
                        break;
                }

                if (temp_1 == 0x400)
                    Camera_SetFieldOfView_22(entity_1);
            }
        }

        if (source_val == g_5446b4)
            break;
    } while (context > 0);
}
