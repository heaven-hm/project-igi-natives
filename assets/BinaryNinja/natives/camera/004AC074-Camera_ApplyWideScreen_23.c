// Original IGI.EXE function: Camera_ApplyWideScreen_23 (VA 0x004AC074; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyWideScreen_23.h"
int32_t Camera_ApplyWideScreen_23()

{
    uint32_t data_val = g_c321e0;

    if (!data_val)
    {
        data_val = 0x200;
        g_c321e0 = data_val;
    }
    else if (data_val < 0x14)
    {
        data_val = 0x14;
        g_c321e0 = data_val;
    }

    char* data_1 = Camera_ApplyPostProcess_28(data_val, 4);
    g_c311dc = data_1;

    if (!data_1)
    {
        g_c321e0 = 0x14;
        char* data_2 = Camera_ApplyPostProcess_28(0x14, 4);
        g_c311dc = data_2;

        if (!data_2)
            Camera_UpdateViewCone_3(0x1a);
    }

    int32_t* entity_3 = nullptr;

    for (int32_t i = 0x546840; i < 0x546ac0; )
    {
        *(entity_3 + g_c311dc) = i;
        i += 0x20;
        entity_3 = &entity_3[1];
    }

    int32_t temp_2 = 0;
    int32_t result;

    for (int32_t* i_1 = &g_546850; i_1 < 0x5468b0; )
    {
        result = *((&g_c32440)[temp_2 >> 5] + ((temp_2 & 0x1f) << 3));

        if (result == 0xffffffff || !result)
            *i_1 = 0xffffffff;

        i_1 = &i_1[8];
        temp_2 += 1;
    }

    return result;
}
