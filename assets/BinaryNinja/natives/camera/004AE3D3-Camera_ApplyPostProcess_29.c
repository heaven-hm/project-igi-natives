// Original IGI.EXE function: Camera_ApplyPostProcess_29 (VA 0x004AE3D3; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_29.h"
int16_t* Camera_ApplyPostProcess_29(int16_t* context, int32_t* param_2)

{
    int32_t* context_val = param_2;
    int16_t* source_val = context;
    int32_t entity_val;
    entity_val = *(context_val + 0xa);
    int32_t data_val = 0;
    int32_t item_18 = 0;
    int32_t item_28 = 0;
    int32_t item_24 = 0;
    int32_t item_20 = 0;
    data_val = source_val[5];
    int16_t* result = data_val & 0x7fff;
    int32_t* entity_1 = entity_val & 0x7fff;
    int32_t dest_2 = (entity_val ^ data_val) & 0x8000;
    int16_t* temp_val = entity_1 + result;
    context = temp_val;

    if (result >= 0x7fff || entity_1 >= 0x7fff || temp_val > 0xbffd)
    {
    label_4ae5d3:
        int16_t f0_1 = dest_2;
        dest_2 = -(dest_2);
        *(source_val + 4) = 0;
        *source_val = 0;
        *(source_val + 8) = ((dest_2 - dest_2) & 0x80000000) + 0x7fff8000;
    }
    else if (temp_val > 0x3fbf)
    {
        if (!result)
            context += 1;

        if (result || *(source_val + 8) & 0x7fffffff)
        {
            result = nullptr;
        label_4ae463:

            if (!entity_1)
                context += 1;

            if (!entity_1 && !(context_val[2] & 0x7fffffff) && !context_val[1] && !*context_val)
                goto label_4ae476;

            void* item_14_1 = nullptr;
            int32_t* item_8_1 = &item_24;

            for (param_2 = 5; param_2 > 0; param_2 -= 1)
            {
                if (param_2 > 0)
                {
                    int16_t* item_c_1 = item_14_1 * 2 + source_val;
                    int16_t* item_10_1 = &context_val[2];
                    int32_t* j_1 = param_2;
                    int32_t* j;

                    do
                    {
                        if (Camera_ResetMatrix_28(item_8_1[-1], *item_c_1 * *item_10_1, &item_8_1[-1]))
                            *item_8_1 += 1;

                        item_c_1 = &item_c_1[1];
                        item_10_1 -= 2;
                        j = j_1;
                        j_1 -= 1;
                    } while (j != 1);
                }

                item_8_1 += 2;
                item_14_1 += 1;
            }

            context = &context[0x6001];

            if (context <= 0)
            {
            label_4ae52a:
                context += 0xffff;

                if (context < 0)
                {
                    int32_t i_2 = -(context);
                    context += i_2;
                    int32_t i_1 = i_2;
                    int32_t i;

                    do
                    {
                        if (item_28 & 1)
                            item_18 += 1;

                        Camera_ApplyLineFilter_29(&item_28);
                        i = i_1;
                        i_1 -= 1;
                    } while (i != 1);

                    if (item_18)
                        item_28 |= 1;
                }
            }
            else
            {
                while (!(*(&item_20 + 3) & 0x80))
                {
                    Camera_SetFieldOfView_29(&item_28);
                    context += 0xffff;

                    if (context <= 0)
                        break;
                }

                if (context <= 0)
                    goto label_4ae52a;
            }

            if (item_28 > 0x8000 || (item_28 & 0x1ffff) == 0x18000)
            {
                if (*(&item_28 + 2) != 0xffffffff)
                    *(&item_28 + 2) += 1;
                else
                {
                    *(&item_28 + 2) = 0;

                    if (*(&item_24 + 2) != 0xffffffff)
                        *(&item_24 + 2) += 1;
                    else
                    {
                        *(&item_24 + 2) = 0;

                        if (*(&item_20 + 2) != 0xffff)
                            *(&item_20 + 2) += 1;
                        else
                        {
                            context += 1;
                            *(&item_20 + 2) = 0x8000;
                        }
                    }
                }
            }

            result = context;

            if (result >= 0x7fff)
                goto label_4ae5d3;

            result |= dest_2;
            *source_val = *(&item_28 + 2);
            *(source_val + 2) = item_24;
            *(source_val + 6) = item_20;
            source_val[5] = result;
        }
        else
        {
            result = nullptr;

            if (*(source_val + 4) || *source_val)
                goto label_4ae463;

            source_val[5] = result;
        }
    }
    else
    {
        result = nullptr;
    label_4ae476:
        *(source_val + 8) = 0;
        *(source_val + 4) = 0;
        *source_val = 0;
    }

    return result;
}
