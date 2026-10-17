// Original IGI.EXE function: Camera_SetFieldOfView_21 (VA 0x004AAAFC; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_21.h"
int32_t Camera_SetFieldOfView_21(char* context, void** param_2, int32_t param_3, int32_t param_4)

{
    int32_t result = 0;
    char context_val = *context;
    char* source_val = &context[1];
    char* item_8 = source_val;

    while (true)
    {
        BOOL data_2;
        wchar16 (* entity_val)[0x21];

        if (g_54427c <= 1)
        {
            entity_val = g_544070;
            uint32_t data_3 = context_val;
            data_3 = (*entity_val)[data_3];
            data_2 = data_3 & 8;
        }
        else
        {
            uint32_t data_1 = context_val;
            uint32_t item_24_1 = data_1;
            int32_t temp_val;
            data_2 = Camera_ApplyBandFilter_12(data_1, temp_val, entity_val, 8);
            entity_val = 8;
        }

        if (!data_2)
            break;

        context_val = *source_val;
        source_val = &source_val[1];
    }

    char* item_8_1 = source_val;

    if (context_val == 0x2d)
    {
        param_4 |= 2;
    label_4aab57:
        context_val = *source_val;
        source_val = &source_val[1];
        item_8_1 = source_val;
    }
    else if (context_val == 0x2b)
        goto label_4aab57;

    if (param_3 < 0 || param_3 == 1 || param_3 > 0x24)
    {
        char** data_20 = param_2;

        if (data_20)
            *data_20 = context;

        return 0;
    }

    int32_t entity_1 = 0x10;

    if (param_3)
        goto label_4aaba5;

    if (context_val == 0x30)
    {
        char data_5 = *source_val;

        if (data_5 == 0x78 || data_5 == 0x58)
        {
            param_3 = 0x10;
        label_4aaba5:

            if (param_3 == 0x10 && context_val == 0x30)
            {
                data_5 = *source_val;

                if (data_5 == 0x78 || data_5 == 0x58)
                {
                    context_val = source_val[1];
                    item_8_1 = &source_val[2];
                }
            }
        }
        else
            param_3 = 8;
    }
    else
        param_3 = 0xa;

    int32_t data_6 = 0xffffffff;
    int32_t temp_1 = 0;
    char* data_7 = COMBINE(temp_1, data_6) / param_3;
    uint32_t temp_2 = COMBINE(temp_1, data_6) % param_3;
    char* item_10_1 = data_7;

    while (true)
    {
        uint32_t source_3 = context_val;
        BOOL data_8;

        if (g_54427c <= 1)
        {
            wchar16 (* data_9)[0x21] = g_544070;
            data_9 = (*data_9)[source_3];
            data_8 = data_9 & 4;
        }
        else
        {
            uint32_t item_24_2 = source_3;
            data_8 = Camera_ApplyBandFilter_12(data_7, temp_2, entity_1, 4);
            entity_1 = 4;
        }

        if (!data_8)
        {
            BOOL data_10;

            if (g_54427c <= 1)
            {
                wchar16 (* data_11)[0x21] = g_544070;
                data_11 = (*data_11)[source_3];
                data_10 = data_11 & 0x103;
            }
            else
            {
                uint32_t item_24_3 = source_3;
                data_10 = Camera_ApplyBandFilter_12(data_8, temp_2, entity_1, 0x103);
                entity_1 = 0x103;
            }

            if (!data_10)
                break;

            int32_t item_20_1 = context_val;
            uint32_t data_13;
            data_13 = Camera_ApplyWideScreen_28(entity_1);
            entity_1 = data_13 - 0x37;
        }
        else
            entity_1 = context_val - 0x30;

        if (entity_1 >= param_3)
            break;

        param_4 |= 8;

        if (result >= item_10_1 && result == item_10_1)
            temp_2 = COMBINE(0, 0xffffffff) % param_3;

        if (result < item_10_1 || (result == item_10_1 && entity_1 <= temp_2))
            result = result * param_3 + entity_1;
        else
            param_4 |= 4;

        data_7 = item_8_1;
        item_8_1 = &item_8_1[1];
        context_val = *data_7;
    }

    char* item_8_2 = item_8_1 - 1;

    if (!(param_4 & 8))
    {
        if (param_2)
            item_8_2 = context;

        result = 0;
    }
    else if (param_4 & 4)
    {
    label_4aacb5:
        g_936064 = 0x22;

        if (!(param_4 & 1))
        {
            int32_t entity_6 = param_4;
            entity_6 &= 2;
            char f4_1 = entity_6;
            entity_6 = -(entity_6);
            result = -((entity_6 - entity_6)) + 0x7fffffff;
        }
        else
            result = 0xffffffff;
    }
    else if (!(param_4 & 1))
    {
        int32_t entity_5 = param_4 & 2;

        if (entity_5 && result > 0x80000000)
            goto label_4aacb5;

        if (!entity_5 && result > 0x7fffffff)
            goto label_4aacb5;
    }

    if (param_2)
        *param_2 = item_8_2;

    if (!(param_4 & 2))
        return result;

    return -(result);
}
