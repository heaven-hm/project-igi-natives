// IGI native provenance: Camera_ApplyLineFilter_20 - 0x004AA580 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AA580-Camera_ApplyLineFilter_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyLineFilter_20.h"
char* Camera_ApplyLineFilter_20(char* context, char* param_2)

{
    char* dest_val = context;
    char* entity_val = param_2;
    int32_t temp_1;

    while (entity_val & 3)
    {
        temp_1 = *entity_val;
        entity_val = &entity_val[1];

        if (!temp_1)
            goto label_4aa668;

        *dest_val = temp_1;
        dest_val = &dest_val[1];
    }

    while (true)
    {
        int32_t data_1 = *entity_val;
        temp_1 = *entity_val;
        entity_val = &entity_val[4];

        if ((data_1 ^ 0xffffffff ^ (0x7efefeff + data_1)) & 0x81010100)
        {
            if (!temp_1)
                break;

            if (!*(&temp_1 + 1))
            {
                *dest_val = temp_1;
                return context;
            }

            if (!(temp_1 & 0xff0000))
            {
                *dest_val = temp_1;
                dest_val[2] = 0;
                return context;
            }

            if (!(temp_1 & 0xff000000))
            {
                *dest_val = temp_1;
                return context;
            }
        }

        *dest_val = temp_1;
        dest_val = &dest_val[4];
    }

label_4aa668:
    *dest_val = temp_1;
    return context;
}
