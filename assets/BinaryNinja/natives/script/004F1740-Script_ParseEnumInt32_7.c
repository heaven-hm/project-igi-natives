// Original IGI.EXE function: Script_ParseEnumInt32_7 (VA 0x004F1740; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumInt32_7.h"
char* Script_ParseEnumInt32_7(void* context)

{
    int32_t temp_val = 1;
    char* result = *(context + 0x4c);

    if (result > 0)
    {
        int32_t* context_1 = context + 0xc;
        int32_t* entity_1 = context_1;
        char* i;

        do
        {
            if (!**entity_1)
                temp_val = 0;

            entity_1 = &entity_1[1];
            i = result;
            result -= 1;
        } while (i != 1);

        if (!temp_val)
        {
            int32_t i_1 = 0;

            do
            {
                Qtask_UpdateList(*context_1);
                i_1 += 1;
                context_1 = &context_1[1];
            } while (i_1 < *(context + 0x4c));

            void* entity_2 = *(context + 4);
            *(context + 0x4c) = 0;
            Sys_ExecuteBytecode_2(entity_2);
            result = *(context + 8);
            *(context + 4) = 0;

            if (result)
            {
                result = Sys_PushStack_24(result);
                *(context + 8) = 0;
            }
        }
    }

    return result;
}
