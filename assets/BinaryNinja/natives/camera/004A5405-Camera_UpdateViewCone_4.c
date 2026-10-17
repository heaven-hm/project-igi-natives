// Original IGI.EXE function: Camera_UpdateViewCone_4 (VA 0x004A5405; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateViewCone_4.h"
int32_t Camera_UpdateViewCone_4(char* context)

{
    char* dest_val = context;
    BOOL data_2;
    wchar16 (* entity_val)[0x21];
    int32_t temp_val;

    while (true)
    {
        if (g_54427c <= 1)
        {
            uint32_t data_3 = *dest_val;
            entity_val = g_544070;
            data_3 = (*entity_val)[data_3];
            data_2 = data_3 & 8;
        }
        else
        {
            uint32_t data_1 = *dest_val;
            uint32_t item_18_1 = data_1;
            data_2 = Camera_ApplyBandFilter_12(data_1, temp_val, entity_val, 8);
            entity_val = 8;
        }

        if (!data_2)
            break;

        dest_val = &dest_val[1];
    }

    uint32_t source_val = *dest_val;
    char* dest_1 = &dest_val[1];
    uint32_t flagP = source_val;

    if (source_val == 0x2d || source_val == 0x2b)
    {
        source_val = *dest_1;
        dest_1 = &dest_1[1];
    }

    int32_t result = 0;

    while (true)
    {
        BOOL data_4;

        if (g_54427c <= 1)
        {
            wchar16 (* data_5)[0x21] = g_544070;
            data_5 = (*data_5)[source_val];
            data_4 = data_5 & 4;
        }
        else
        {
            uint32_t item_18_2 = source_val;
            data_4 = Camera_ApplyBandFilter_12(data_2, temp_val, entity_val, 4);
            entity_val = 4;
        }

        if (!data_4)
            break;

        data_2 = result * 5;
        result = source_val + (data_2 << 1) - 0x30;
        source_val = *dest_1;
        dest_1 = &dest_1[1];
    }

    if (flagP != 0x2d)
        return result;

    return -(result);
}
