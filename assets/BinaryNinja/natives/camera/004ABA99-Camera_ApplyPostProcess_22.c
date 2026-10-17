// Original IGI.EXE function: Camera_ApplyPostProcess_22 (VA 0x004ABA99; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_22.h"
int32_t Camera_ApplyPostProcess_22(int32_t* context, int32_t param_2, int32_t param_3)

{
    int32_t entity_val;
    int32_t item_8 = entity_val;
    void* source_val = context[1];
    char* dest_val = *context;
    char* item_8_1 = dest_val;
    char* data_val = dest_val;
    void* data_6;

    if (source_val < param_3)
    {
        char* source_1 = source_val + dest_val;

        if (*source_1)
            data_val = source_1;

        if (&data_val[param_3] >= &context[0x3e])
        {
        label_4abb31:
            char* source_6 = &context[2];
            int32_t data_5;

            while (true)
            {
                if (source_6 >= dest_val)
                    return 0;

                if (&source_6[param_3] >= &context[0x3e])
                    return 0;

                char data_4 = *source_6;

                if (data_4)
                    source_6 = &source_6[data_4];
                else
                {
                    char* context_3 = &source_6[1];
                    data_5 = 1;

                    while (!*context_3)
                    {
                        context_3 = &context_3[1];
                        data_5 += 1;
                    }

                    if (data_5 >= param_3)
                        break;

                    param_2 -= data_5;

                    if (param_2 < param_3)
                        return 0;

                    source_6 = context_3;
                }
            }

            void* context_5 = &source_6[param_3];

            if (context_5 >= &context[0x3e])
            {
                context[1] = 0;
                *context = &context[2];
            }
            else
            {
                *context = context_5;
                context[1] = data_5 - param_3;
            }

            *source_6 = param_3;
            data_6 = &source_6[8];
        }
        else
        {
            while (true)
            {
                char context_1 = *data_val;

                if (context_1)
                    data_val = &data_val[context_1];
                else
                {
                    char* context_2 = &data_val[1];
                    int32_t source_3 = 1;

                    while (!*context_2)
                    {
                        context_2 = &context_2[1];
                        source_3 += 1;
                    }

                    if (source_3 >= param_3)
                    {
                        void* context_4 = &data_val[param_3];

                        if (context_4 >= &context[0x3e])
                        {
                            context[1] = 0;
                            *context = &context[2];
                        }
                        else
                        {
                            *context = context_4;
                            context[1] = source_3 - param_3;
                        }

                        *data_val = param_3;
                        data_6 = &data_val[8];
                        break;
                    }

                    if (data_val != item_8_1)
                    {
                        param_2 -= source_3;

                        if (param_2 < param_3)
                            return 0;
                    }
                    else
                        context[1] = source_3;

                    dest_val = item_8_1;
                    data_val = context_2;
                }

                if (&data_val[param_3] >= &context[0x3e])
                    goto label_4abb31;
            }
        }
    }
    else
    {
        *dest_val = param_3;

        if (&dest_val[param_3] >= &context[0x3e])
        {
            context[1] = 0;
            *context = &context[2];
        }
        else
        {
            *context += param_3;
            context[1] -= param_3;
        }

        data_6 = &dest_val[8];
    }

    return (data_6 << 4) - context * 0xf;
}
