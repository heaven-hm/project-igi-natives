// Original IGI.EXE function: Camera_ApplyLineFilter_5 (VA 0x004A5500; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter_5.h"
char* Camera_ApplyLineFilter_5(char* context, char* param_2, int32_t param_3)

{
    int32_t entity_val = param_3;

    if (!entity_val)
        return context;

    int32_t context_1 = entity_val;
    char* source_1 = param_2;
    char* dest_1 = context;
    char data_1;
    uint32_t i_2;
    uint32_t i_3;

    if (source_1 & 3)
    {
        do
        {
            data_1 = *source_1;
            source_1 = &source_1[1];
            *dest_1 = data_1;
            dest_1 = &dest_1[1];
            int32_t f0_1 = entity_val;
            entity_val -= 1;

            if (f0_1 == 1)
                return context;

            if (!data_1)
            {
                while (dest_1 & 3)
                {
                    *dest_1 = data_1;
                    dest_1 = &dest_1[1];
                    int32_t f2_1 = entity_val;
                    entity_val -= 1;

                    if (f2_1 == 1)
                        return context;
                }

                context_1 = entity_val;
                i_3 = entity_val >> 2;

                if (!i_3)
                    goto label_4a557b;

            label_4a55e7:
                data_1 = 0;
                uint32_t i;

                do
                {
                    *dest_1 = 0;
                    dest_1 = &dest_1[4];
                    i = i_3;
                    i_3 -= 1;
                } while (i != 1);
            label_4a55f1:
                context_1 &= 3;

                if (context_1)
                    goto label_4a557b;

                return context;
            }
        } while (source_1 & 3);

        context_1 = entity_val;
        i_2 = entity_val >> 2;

        if (i_2)
            goto label_4a558f;

    label_4a5540:
        context_1 &= 3;

        if (context_1)
            goto label_4a5545;
    }
    else
    {
        i_2 = entity_val >> 2;

        if (i_2)
        {
        label_4a558f:
            uint32_t i_1;

            do
            {
                int32_t data_4 = *source_1;
                int32_t temp_2 = *source_1;
                source_1 = &source_1[4];

                if ((data_4 ^ 0xffffffff ^ (0x7efefeff + data_4)) & 0x81010100)
                {
                    if (!temp_2)
                    {
                        *dest_1 = 0;
                    label_4a55df:
                        dest_1 = &dest_1[4];
                        data_1 = 0;
                        i_3 = i_2 - 1;

                        if (i_2 == 1)
                            goto label_4a55f1;

                        goto label_4a55e7;
                    }

                    if (!*(&temp_2 + 1))
                    {
                        *dest_1 = temp_2 & 0xff;
                        goto label_4a55df;
                    }

                    if (!(temp_2 & 0xff0000))
                    {
                        *dest_1 = temp_2 & 0xffff;
                        goto label_4a55df;
                    }

                    if (!(temp_2 & 0xff000000))
                    {
                        *dest_1 = temp_2;
                        goto label_4a55df;
                    }
                }

                *dest_1 = temp_2;
                dest_1 = &dest_1[4];
                i_1 = i_2;
                i_2 -= 1;
            } while (i_1 != 1);
            goto label_4a5540;
        }

    label_4a5545:

        while (true)
        {
            data_1 = *source_1;
            source_1 = &source_1[1];
            *dest_1 = data_1;
            dest_1 = &dest_1[1];

            if (!data_1)
            {
                while (true)
                {
                    int32_t f3_1 = context_1;
                    context_1 -= 1;

                    if (f3_1 == 1)
                        return context;

                label_4a557b:
                    *dest_1 = data_1;
                    dest_1 = &dest_1[1];
                }
            }
            else
            {
                int32_t f4_1 = context_1;
                context_1 -= 1;

                if (f4_1 == 1)
                    break;
            }
        }
    }
    return context;
}
