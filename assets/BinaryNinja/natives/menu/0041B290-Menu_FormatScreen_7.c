// Original IGI.EXE function: Menu_FormatScreen_7 (VA 0x0041B290; static CFG gate FAIL, CFG score 0.667).
#include "Menu_FormatScreen_7.h"
int32_t Menu_FormatScreen_7(int32_t context, int32_t param_2)

{
    void* temp_2 = g_57bba0;
    int32_t result = *(temp_2 + 0x21a0);
    void* flagP = temp_2 + result * 0x108 + 0x9c;
    int32_t entity_3 = 0;

    if (result > 0)
    {
        int32_t* temp_val = temp_2 + 0x19c;

        do
        {
            if (*temp_val == param_2)
                return result;

            entity_3 += 1;
            temp_val = &temp_val[0x42];
        } while (entity_3 < result);
    }

    int32_t dest_1 = context;
    int32_t i = 0xffffffff;
    *(flagP + 0x100) = param_2;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_1;
        dest_1 += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_4 = ~i;
    int32_t source_2;
    int32_t dest_4;
    dest_4 = memcpy(flagP, dest_1 - entity_4, entity_4 & 0xfffffffc);
    memcpy(dest_4, source_2, entity_4 & 3);
    *(temp_2 + 0x21a0) += 1;
    return 0;
}
