// Original IGI.EXE function: Sys_CloseFileStream_7 (VA 0x004B1F30; static CFG gate PASS, CFG score 1.000).
#include "Sys_CloseFileStream_7.h"
int32_t Sys_CloseFileStream_7(int32_t context, int32_t param_2 )

{
    int32_t dest_val = param_2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_val = ~i;
    char* entity_1 = entity_val - 1;

    if (entity_val - 1 < 0)
        return context;

    char* source_val = &entity_1[param_2];

    while (true)
    {
        char temp_1 = *source_val;

        if (temp_1 == 0x2e)
        {
            entity_1[context] = 0;
            entity_1 -= 1;
            break;
        }

        if (temp_1 == 0x2f)
            break;

        if (temp_1 == 0x5c)
            break;

        if (temp_1 == 0x3a)
            break;

        *(context - param_2 + source_val) = temp_1;
        entity_1 -= 1;
        source_val -= 1;

        if (entity_1 < 0)
            return context;
    }

    if (entity_1 >= 0)
    {
        char* temp_2 = &entity_1[context];
        void* i_2 = &entity_1[1];
        void* i_1;

        do
        {
            *temp_2 = *(param_2 - context + temp_2);
            temp_2 -= 1;
            i_1 = i_2;
            i_2 -= 1;
        } while (i_1 != 1);
    }

    return context;
}
