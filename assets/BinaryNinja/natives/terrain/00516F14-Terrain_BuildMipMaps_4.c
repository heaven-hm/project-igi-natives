// Original IGI.EXE function: Terrain_BuildMipMaps_4 (VA 0x00516F14; static CFG gate FAIL, CFG score 0.778).
#include "Terrain_BuildMipMaps_4.h"
char* Terrain_BuildMipMaps_4(char* context, char* param_2, int32_t param_3)

{
    char* dest_val = context;
    context = dest_val;

    if (!g_c3221c)
        return Camera_ApplyLineFilter_5(dest_val, param_2, param_3);

    int32_t i = param_3;

    if (i)
    {
        char* entity_1 = param_2;

        do
        {
            char data_2 = *entity_1;
            i -= 1;
            bool flag_2_1 = !(*(data_2 + 0xc32321) & 4);
            *dest_val = data_2;

            if (flag_2_1)
            {
                dest_val = &dest_val[1];
                entity_1 = &entity_1[1];

                if (!data_2)
                    break;
            }
            else
            {
                dest_val = &dest_val[1];

                if (!i)
                {
                    dest_val[0xffffffff] = 0;
                    break;
                }

                data_2 = entity_1[1];
                i -= 1;
                *dest_val = data_2;
                dest_val = &dest_val[1];
                entity_1 = &entity_1[2];

                if (!data_2)
                {
                    dest_val[0xfffffffe] = 0;
                    break;
                }
            }
        } while (i);
    }

    if (i)
        memset(memset(dest_val, 0, i & 0xfffffffc), 0, i & 3);

    return context;
}
