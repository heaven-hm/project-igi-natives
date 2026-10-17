// Original IGI.EXE function: Camera_UpdateTransform_10 (VA 0x004A6E17; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateTransform_10.h"
void* Camera_UpdateTransform_10(int32_t* context)

{
    int32_t* dest_val = context;
    int32_t source_val = dest_val[4];

    if (dest_val[1] < 0)
        dest_val[1] = 0;

    uint32_t data_val = Camera_ResetMatrix_9(source_val, 0, FILE_CURRENT);
    uint32_t item_8 = data_val;

    if (data_val >= 0)
    {
        int16_t temp_1 = dest_val[3];

        if (!(temp_1 & 0x108))
            return data_val - dest_val[1];

        int32_t data_2 = *dest_val;
        char* i_2 = dest_val[2];
        void* result = data_2 - i_2;

        if (temp_1 & 3)
        {
            if (*((&g_c32440)[source_val >> 5] + ((source_val & 0x1f) << 3) + 4) & 0x80)
            {
                for (char* i = i_2; i < data_2; i = &i[1])
                {
                    if (*i == 0xa)
                        result += 1;
                }
            }

            goto label_4a6ea9;
        }

        if (temp_1 & 0x80)
        {
        label_4a6ea9:

            if (!item_8)
                return result;

            if (dest_val[3] & 1)
            {
                int32_t temp_5 = dest_val[1];

                if (temp_5)
                {
                    context = data_2 - i_2 + temp_5;
                    int32_t source_2 = (source_val & 0x1f) << 3;

                    if (*(source_2 + (&g_c32440)[source_val >> 5] + 4) & 0x80)
                    {
                        bool flag_3_1;

                        if (Camera_ResetMatrix_9(source_val, 0, FILE_END) != item_8)
                        {
                            Camera_ResetMatrix_9(source_val, item_8, FILE_BEGIN);
                            int32_t* data_9 = 0x200;
                            int16_t entity_3;

                            if (context <= 0x200)
                                entity_3 = dest_val[3];

                            if (context > 0x200 || !(entity_3 & 8) || *(&entity_3 + 1) & 4)
                                data_9 = dest_val[6];

                            context = data_9;
                            flag_3_1 = !(*(source_2 + (&g_c32440)[source_val >> 5] + 4) & 4);
                        }
                        else
                        {
                            char* i_1 = dest_val[2];

                            for (void* entity_2 = context + i_1; i_1 < entity_2; i_1 = &i_1[1])
                            {
                                if (*i_1 == 0xa)
                                    context += 1;
                            }

                            flag_3_1 = !(*(dest_val + 0xd) & 0x20);
                        }

                        if (!flag_3_1)
                            context += 1;
                    }

                    item_8 -= context;
                }
                else
                    result &= temp_5;
            }

            return result + item_8;
        }

        g_936064 = 0x16;
    }

    return 0xffffffff;
}
