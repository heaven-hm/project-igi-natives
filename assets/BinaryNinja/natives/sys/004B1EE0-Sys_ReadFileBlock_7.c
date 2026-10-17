// Original IGI.EXE function: Sys_ReadFileBlock_7 (VA 0x004B1EE0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ReadFileBlock_7.h"
char* Sys_ReadFileBlock_7(char* context, int32_t param_2, char* param_3)

{
    char* flagP = nullptr;
    int32_t dest_val = 0;

    if (param_2 > 0)
    {
        char* entity_1 = param_3;
        char* source_2 = context - entity_1;

        do
        {
            char temp_1 = *entity_1;

            if (!temp_1)
                break;

            if (temp_1 == 0x5c || temp_1 == 0x2f)
                flagP = source_2 + entity_1;

            *(source_2 + entity_1) = temp_1;
            dest_val += 1;
            entity_1 = &entity_1[1];
        } while (dest_val < param_2);

        if (flagP)
        {
            *flagP = 0;
            return context;
        }
    }

    *context = 0;
    return context;
}
