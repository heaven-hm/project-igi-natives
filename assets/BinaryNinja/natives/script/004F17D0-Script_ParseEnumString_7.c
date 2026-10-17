// Original IGI.EXE function: Script_ParseEnumString_7 (VA 0x004F17D0; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumString_7.h"
int32_t Script_ParseEnumString_7(char* context)

{
    int32_t entity_val;
    int32_t item_4 = entity_val;
    int32_t result = 0;
    char context_val = 0;
    char i = *context;
    int32_t entity_1 = 1;
    *(&item_4 + 3) = 0;
    char* temp_val = context;

    if (i == 0x2e)
        goto label_4f1801;

    while (i)
    {
        i = temp_val[1];
        temp_val = &temp_val[1];

        if (i == 0x2e)
            break;
    }

    if (temp_val >= context)
    {
        context_val = 0;
    label_4f1801:

        while (true)
        {
            i = temp_val[0xffffffff];
            temp_val -= 1;

            if (i < 0x30 || i > 0x39)
            {
                if (!context_val)
                    break;

                return result;
            }

            context_val = 1;
            result += (i - 0x30) * entity_1;
            entity_1 *= 0xa;

            if (temp_val < context)
                break;

            continue;
        }
    }

    return 0xffffffff;
}
