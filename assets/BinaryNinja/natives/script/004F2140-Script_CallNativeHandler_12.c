// Original IGI.EXE function: Script_CallNativeHandler_12 (VA 0x004F2140; static CFG gate PASS, CFG score 1.000).
#include "Script_CallNativeHandler_12.h"
int32_t** Script_CallNativeHandler_12(int32_t context , char* param_2)

{
    int32_t** data_val = Table_GetAt(context, param_2);
    int32_t** dest_val = data_val;
    int32_t** arg_4;

    if (dest_val)
    {
        int32_t* source_val = *dest_val;
        int32_t** flagP1 = arg_4;

        if (!source_val || !*source_val || !source_val)
        {
            data_val = flagP1[2];
            int32_t* source_1 = *data_val;
            int32_t source_2 = -(source_1);
            source_val = (source_2 - source_2) & data_val;
        }

        while (source_val != dest_val)
        {
            int32_t data_4 = 0;
            int32_t entity_2 = 0;
            data_4 = g_a76c03;
            arg_4 = nullptr;
            entity_2 = source_val[7];
            data_val = *(((data_4 * 0x180 + entity_2) << 2) + &g_a96ae0);

            if (data_val)
            {
                data_val(source_val, &arg_4);
                data_val = arg_4;

                if (data_val && data_val[1] == param_2 && !data_val[2])
                {
                    void* data_9 = Script_ExecuteLevelScript_12(context, param_2, source_val);
                    data_9 = 1;
                    return data_9;
                }
            }

            source_val = *source_val;

            if (!source_val || !*source_val || !source_val)
            {
                data_val = flagP1[2];
                int32_t* source_4 = *data_val;
                int32_t source_5 = -(source_4);
                source_val = (source_5 - source_5) & data_val;
            }
        }
    }
    else
    {
        int32_t* i = arg_4[2];

        if (*i && i)
        {
            do
            {
                int32_t data_1 = 0;
                arg_4 = nullptr;
                data_1 = g_a76c03;
                int32_t data_2 = 0;
                data_2 = i[7];
                data_val = *(((data_1 * 0x180 + data_2) << 2) + &g_a96ae0);

                if (data_val)
                {
                    data_val(i, &arg_4);
                    data_val = arg_4;

                    if (data_val && data_val[1] == param_2 && !data_val[2])
                    {
                        void* data_3 = Script_ExecuteLevelScript_12(context, param_2, i);
                        data_3 = 1;
                        return data_3;
                    }
                }

                i = *i;

                if (!i)
                    break;

                if (!*i)
                    break;
            } while (i);
        }
    }
    data_val = 0;
    return data_val;
}
