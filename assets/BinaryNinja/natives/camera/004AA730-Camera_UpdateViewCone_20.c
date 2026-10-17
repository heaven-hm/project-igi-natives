// Original IGI.EXE function: Camera_UpdateViewCone_20 (VA 0x004AA730; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateViewCone_20.h"
void* Camera_UpdateViewCone_20(char* context)

{
    char* entity_val = context;

    while (entity_val & 3)
    {
        int32_t data_val;
        data_val = *entity_val;
        entity_val = &entity_val[1];

        if (!data_val)
            return &entity_val[0xffffffff] - context;
    }

    while (true)
    {
        int32_t data_2 = *entity_val;
        entity_val = &entity_val[4];

        if ((data_2 ^ 0xffffffff ^ (0x7efefeff + data_2)) & 0x81010100)
        {
            int32_t data_5 = *(entity_val - 4);

            if (!data_5)
                return &entity_val[0xfffffffc] - context;

            if (!*(&data_5 + 1))
                return &entity_val[0xfffffffd] - context;

            if (!(data_5 & 0xff0000))
                return &entity_val[0xfffffffe] - context;

            if (!(data_5 & 0xff000000))
                break;
        }
    }

    return &entity_val[0xffffffff] - context;
}
