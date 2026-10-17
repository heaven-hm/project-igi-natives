// Original IGI.EXE function: Camera_UpdateViewCone_6 (VA 0x004A5BB0; static CFG gate FAIL, CFG score 0.473).
#include "Camera_UpdateViewCone_6.h"
char* Camera_UpdateViewCone_6(char* context, char* param_2)

{
    int16_t temp_val;
    temp_val = *param_2;
    char* result = context;

    if (!temp_val)
        return result;

    *(&temp_val + 1) = param_2[1];

    if (!*(&temp_val + 1))
    {
        int32_t data_2 = 0;
        data_2 = temp_val;
        /* tailcall */
        return sub_4aa0a6(data_2, context);
    }

    while (true)
    {
        char* entity_val = param_2;
        int16_t data_val;
        data_val = *result;
        char* source_2 = &result[1];

        if (data_val != temp_val)
        {
            if (!data_val)
                return 0;

            while (true)
            {
                data_val = *source_2;
                source_2 = &source_2[1];
            label_4a5bdc:

                if (data_val == temp_val)
                    break;

                if (!data_val)
                    return 0;
            }
        }

        data_val = *source_2;
        source_2 = &source_2[1];

        if (data_val != *(&temp_val + 1))
            break;

        result = &source_2[0xffffffff];

        while (true)
        {
            *(&data_val + 1) = entity_val[2];

            if (*(&data_val + 1))
            {
                data_val = *source_2;
                source_2 = &source_2[2];

                if (data_val != *(&data_val + 1))
                    break;

                data_val = entity_val[3];

                if (data_val)
                {
                    *(&data_val + 1) = source_2[0xffffffff];
                    entity_val = &entity_val[2];

                    if (data_val != *(&data_val + 1))
                        break;

                    continue;
                }
            }

            return &result[0xffffffff];
        }
    }

    goto label_4a5bdc;
}
