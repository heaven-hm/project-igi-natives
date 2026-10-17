// Original IGI.EXE function: Terrain_BuildMipMaps_6 (VA 0x00517B00; static CFG gate PASS, CFG score 1.000).
#include "Terrain_BuildMipMaps_6.h"
int32_t Terrain_BuildMipMaps_6(int32_t context, int32_t* param_2, int32_t* param_3, int32_t param_4)

{
    int32_t* entity_val = param_3;
    int32_t result = param_4 >> 1;
    int32_t context_1 = entity_val >> 1;
    int32_t item_8 = context_1;

    if (result > 0)
    {
        int32_t temp_1 = context;
        int32_t source_1 = entity_val << 3;
        param_3 = param_2;
        int32_t item_4_1 = source_1;
        int32_t* dest_2 = &param_2[entity_val];
        context = result;
        param_2 = dest_2;
        bool flag_1_1;

        do
        {
            int32_t* data_1 = param_3;
            int32_t entity_1 = temp_1 + (context_1 << 2);
            param_4 = temp_1;
            int32_t item_c_1 = entity_1;

            if (temp_1 < entity_1)
            {
                while (true)
                {
                    int32_t entity_2 = *data_1;
                    int32_t temp_2 = data_1[1];
                    int32_t source_2 = *dest_2;
                    int32_t data_4 = dest_2[1];
                    int32_t dest_11 = (((source_2 & 0xff00) + (temp_2 & 0xff00) + (entity_2 & 0xff00)
                        + (data_4 & 0xff00) + 2) & 0x3fc00) | (((data_4 & 0xff0000) + (source_2 & 0xff0000)
                        + (temp_2 & 0xff0000) + (entity_2 & 0xff0000) + 2) & 0x3fc0000);
                    entity_1 = item_c_1;
                    int32_t dest_14 = (dest_11 | (data_4 + source_2 + temp_2 + entity_2 + 2)) >> 2 | (((
                        data_4 >> 2 & 0x3fc00000) + (source_2 >> 2 & 0x3fc00000) + (temp_2 >> 2 & 0x3fc00000)
                        + (entity_2 >> 2 & 0x3fc00000) + 0x800000) & 0xff000000);
                    *param_4 = dest_14;
                    bool flag_3_1 = param_4 + 4 < entity_1;
                    param_4 += 4;

                    if (!flag_3_1)
                        break;

                    data_1 = &data_1[2];
                    dest_2 = &dest_2[2];
                }

                context_1 = item_8;
                source_1 = item_4_1;
            }

            temp_1 = entity_1;
            param_3 += source_1;
            dest_2 = param_2 + source_1;
            result = context - 1;
            flag_1_1 = context != 1;
            param_2 = dest_2;
            context = result;
        } while (flag_1_1);
    }

    return result;
}
