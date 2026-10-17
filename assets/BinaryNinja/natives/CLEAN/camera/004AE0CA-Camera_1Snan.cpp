// IGI native provenance: Camera_1Snan - 0x004AE0CA - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AE0CA-Camera_1Snan.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_1Snan.h"
int32_t Camera_1Snan(int16_t context , char* param_2, char param_3, char* param_4)

{
    int16_t* context_val = param_4;
    int16_t entity_1 = context & 0x8000;
    int16_t data_1 = context & 0x7fff;
    char item_20 = 0xcc;
    char item_1f = 0xcc;
    char item_1e = 0xcc;
    char item_1d = 0xcc;
    char item_1c = 0xcc;
    char item_1b = 0xcc;
    char item_1a = 0xcc;
    char item_19 = 0xcc;
    char item_18 = 0xcc;
    char item_17 = 0xcc;
    char item_16 = 0xfb;
    char item_15 = 0x3f;
    int32_t result = 1;

    if (!entity_1)
        context_val[1] = 0x20;
    else
        context_val[1] = 0x2d;

    int32_t arg_8;
    int32_t dest_val = arg_8;
    int32_t arg_4;

    if (data_1 || dest_val || arg_4 != dest_val)
    {
        if (data_1 == 0x7fff)
        {
            *context_val = 1;

            if ((dest_val != 0x80000000 || arg_4) && !(dest_val & 0x40000000))
            {
                Camera_ApplyLineFilter_20(&context_val[2], "1#SNAN");
                *(context_val + 3) = 6;
            }
            else if (entity_1 && dest_val == 0xc0000000)
            {
                if (arg_4)
                    goto label_4ae1bf;

                Camera_ApplyLineFilter_20(&context_val[2], "1#IND");
                *(context_val + 3) = 5;
            }
            else if (dest_val != 0x80000000 || arg_4)
            {
            label_4ae1bf:
                Camera_ApplyLineFilter_20(&context_val[2], "1#QNAN");
                *(context_val + 3) = 6;
            }
            else
            {
                Camera_ApplyLineFilter_20(&context_val[2], "1#INF");
                *(context_val + 3) = 5;
            }

            return 0;
        }

        uint32_t data_4 = data_1;
        int16_t item_14 = 0;
        int32_t item_e_1 = dest_val;
        int32_t source_4 =
            (((data_4 >> 8) + (dest_val >> 0x18 << 1)) * 0x4d + data_4 * 0x4d10 - 0x134312f4) >> 0x10;
        int32_t item_12 = arg_4;
        Camera_UpdateViewCone_29(&item_14, -(source_4), 1);

        if (data_1 >= 0x3fff)
        {
            source_4 += 1;
            Camera_ApplyPostProcess_29(&item_14, &item_20);
        }

        *context_val = source_4;
        char* dest_2;

        if (!(param_3 & 1))
            dest_2 = param_2;
        else
        {
            dest_2 = &param_2[source_4];

            if (dest_2 <= 0)
                goto label_4ae141;
        }

        if (dest_2 > 0x15)
            dest_2 = 0x15;

        int16_t item_a_2 = 0;
        param_4 = 8;
        char* i;

        do
        {
            Camera_SetFieldOfView_29(&item_14);
            i = param_4;
            param_4 -= 1;
        } while (i != 1);

        if (data_1 - 0x3ffe < 0)
        {
            uint32_t i_3 = -((data_1 - 0x3ffe));

            if (i_3 > 0)
            {
                uint32_t i_1;

                do
                {
                    Camera_ApplyLineFilter_29(&item_14);
                    i_1 = i_3;
                    i_3 -= 1;
                } while (i_1 != 1);
            }
        }

        char* data_10 = &context_val[2];
        param_4 = data_10;

        if (&dest_2[1] > 0)
        {
            param_2 = &dest_2[1];
            char* i_2;

            do
            {
                arg_4 = item_14;
                int32_t* dest_3 = &arg_8;
                int32_t* source_8 = (&item_12 + 2);
                *dest_3 = *source_8;
                dest_3[1] = source_8[1];
                Camera_SetFieldOfView_29(&item_14);
                Camera_SetFieldOfView_29(&item_14);
                Camera_UpdateTransform_29(&item_14, &arg_4);
                Camera_SetFieldOfView_29(&item_14);
                char data_12 = *(&item_a_2 + 1);
                char* entity_11 = param_4;
                *(&item_a_2 + 1) = 0;
                param_4 = &param_4[1];
                i_2 = param_2;
                param_2 -= 1;
                *entity_11 = data_12 + 0x30;
            } while (i_2 != 1);
            data_10 = param_4;
        }

        char* data_14 = data_10 - 2;

        if (data_10[0xffffffff] >= 0x35)
        {
            while (true)
            {
                if (data_14 >= &context_val[2])
                {
                    if (*data_14 == 0x39)
                    {
                        *data_14 = 0x30;
                        data_14 -= 1;
                        continue;
                    }
                    else if (data_14 >= &context_val[2])
                        break;
                }

                data_14 = &data_14[1];
                *context_val += 1;
                break;
            }

            *data_14 += 1;
            goto label_4ae322;
        }

        while (true)
        {
            if (data_14 < &context_val[2])
                goto label_4ae345;

            if (*data_14 != 0x30)
                break;

            data_14 -= 1;
        }

        if (data_14 >= &context_val[2])
        {
        label_4ae322:
            *(context_val + 3) = data_14 - context_val - 3;
            *(data_14 - context_val - 3 + context_val + 4) = 0;
            return result;
        }

    label_4ae345:
        *context_val = 0;
        context_val[1] = 0x20;
        *(context_val + 3) = 1;
        context_val[2] = 0x30;
    }
    else
    {
    label_4ae141:
        *context_val = 0;
        context_val[1] = 0x20;
        *(context_val + 3) = 1;
        context_val[2] = 0x30;
    }

    *(context_val + 5) = 0;
    return 1;
}
