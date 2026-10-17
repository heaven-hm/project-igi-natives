// IGI native provenance: Camera_ApplyLineFilter_8 - 0x004A6181 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A6181-Camera_ApplyLineFilter_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyLineFilter_8.h"
int32_t* Camera_ApplyLineFilter_8(char* context, int32_t* param_2, char* param_3, int32_t* param_4, int32_t* param_5)

{
    int32_t* entity_val = param_5;
    *entity_val = 0;
    char* source_val = param_3;
    int32_t* dest_val = param_2;
    *param_4 = 1;
    char* data_1 = context;

    if (dest_val)
    {
        *dest_val = source_val;
        dest_val = &dest_val[1];
        param_2 = dest_val;
    }

    if (*data_1 != 0x22)
    {
        while (true)
        {
            *entity_val += 1;

            if (source_val)
            {
                *source_val = *data_1;
                source_val = &source_val[1];
            }

            char temp_5 = *data_1;
            data_1 = &data_1[1];

            if (*(temp_5 + 0xc32321) & 4)
            {
                *entity_val += 1;

                if (source_val)
                {
                    *source_val = *data_1;
                    source_val = &source_val[1];
                }

                data_1 = &data_1[1];
            }

            if (temp_5 == 0x20)
            {
            label_4a6228:

                if (temp_5)
                {
                    if (source_val)
                        source_val[0xffffffff] = 0;

                    break;
                }
            }
            else if (temp_5)
            {
                if (temp_5 == 9)
                    goto label_4a6228;

                continue;
            }

            data_1 -= 1;
            break;
        }
    }
    else
    {
        while (true)
        {
            char temp_1 = data_1[1];
            data_1 = &data_1[1];

            if (temp_1 == 0x22)
                break;

            if (!temp_1)
                break;

            if (*(temp_1 + 0xc32321) & 4)
            {
                *entity_val += 1;

                if (source_val)
                {
                    *source_val = *data_1;
                    source_val = &source_val[1];
                    data_1 = &data_1[1];
                }
            }

            *entity_val += 1;

            if (source_val)
            {
                *source_val = *data_1;
                source_val = &source_val[1];
            }
        }

        *entity_val += 1;

        if (source_val)
        {
            *source_val = 0;
            source_val = &source_val[1];
        }

        if (*data_1 == 0x22)
            data_1 = &data_1[1];
    }

    param_5 = nullptr;

    while (*data_1)
    {
        while (true)
        {
            char temp_6 = *data_1;

            if (temp_6 != 0x20 && temp_6 != 9)
                break;

            data_1 = &data_1[1];
        }

        if (!*data_1)
            break;

        if (dest_val)
        {
            *dest_val = source_val;
            dest_val = &dest_val[1];
            param_2 = dest_val;
        }

        *param_4 += 1;

        while (true)
        {
            context = 1;
            uint32_t i_2 = 0;

            while (*data_1 == 0x5c)
            {
                data_1 = &data_1[1];
                i_2 += 1;
            }

            if (*data_1 == 0x22)
            {
                if (!(i_2 & 1))
                {
                    if (!param_5 || data_1[1] != 0x22)
                        context = nullptr;
                    else
                        data_1 = &data_1[1];

                    dest_val = param_2;
                    int32_t* temp_9 = nullptr;
                    temp_9 = !param_5;
                    param_5 = temp_9;
                }

                i_2 u>>= 1;
            }

            if (i_2)
            {
                int32_t i_1 = i_2;
                int32_t i;

                do
                {
                    if (source_val)
                    {
                        *source_val = 0x5c;
                        source_val = &source_val[1];
                    }

                    *entity_val += 1;
                    i = i_1;
                    i_1 -= 1;
                } while (i != 1);
            }

            char temp_11 = *data_1;

            if (!temp_11)
                break;

            if (!param_5)
            {
                if (temp_11 == 0x20)
                    break;

                if (temp_11 == 9)
                    break;
            }

            if (context)
            {
                if (source_val)
                {
                    if (*(temp_11 + 0xc32321) & 4)
                    {
                        *source_val = temp_11;
                        source_val = &source_val[1];
                        data_1 = &data_1[1];
                        *entity_val += 1;
                    }

                    *source_val = *data_1;
                    source_val = &source_val[1];
                }
                else if (*(temp_11 + 0xc32321) & 4)
                {
                    data_1 = &data_1[1];
                    *entity_val += 1;
                }

                *entity_val += 1;
            }

            data_1 = &data_1[1];
        }

        if (source_val)
        {
            *source_val = 0;
            source_val = &source_val[1];
        }

        *entity_val += 1;
    }

    if (dest_val)
        *dest_val = 0;

    *param_4 += 1;
    return param_4;
}
