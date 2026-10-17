// IGI native provenance: Camera_ApplyBandFilter_20 - 0x004AA590 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AA590-Camera_ApplyBandFilter_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyBandFilter_20.h"
char* Camera_ApplyBandFilter_20(char* context, char* param_2)

{
    char* entity_val = context;
    int32_t* dest_val;

    while (entity_val & 3)
    {
        char data_1 = *entity_val;
        entity_val = &entity_val[1];

        if (!data_1)
        {
        label_4aa5df:
            dest_val = &entity_val[0xffffffff];
            goto label_4aa5f1;
        }
    }

    while (true)
    {
        int32_t data_2 = *entity_val;
        entity_val = &entity_val[4];

        if ((data_2 ^ 0xffffffff ^ (0x7efefeff + data_2)) & 0x81010100)
        {
            int32_t data_5 = *(entity_val - 4);

            if (!data_5)
            {
                dest_val = &entity_val[0xfffffffc];
                break;
            }

            if (!*(&data_5 + 1))
            {
                dest_val = &entity_val[0xfffffffd];
                break;
            }

            if (!(data_5 & 0xff0000))
            {
                dest_val = &entity_val[0xfffffffe];
                break;
            }

            if (!(data_5 & 0xff000000))
                goto label_4aa5df;
        }
    }

label_4aa5f1:
    char* entity_1 = param_2;
    int32_t temp_1;

    while (entity_1 & 3)
    {
        temp_1 = *entity_1;
        entity_1 = &entity_1[1];

        if (!temp_1)
            goto label_4aa668;

        *dest_val = temp_1;
        dest_val += 1;
    }

    while (true)
    {
        int32_t data_6 = *entity_1;
        temp_1 = *entity_1;
        entity_1 = &entity_1[4];

        if ((data_6 ^ 0xffffffff ^ (0x7efefeff + data_6)) & 0x81010100)
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
                *(dest_val + 2) = 0;
                return context;
            }

            if (!(temp_1 & 0xff000000))
            {
                *dest_val = temp_1;
                return context;
            }
        }

        *dest_val = temp_1;
        dest_val = &dest_val[1];
    }

label_4aa668:
    *dest_val = temp_1;
    return context;
}
