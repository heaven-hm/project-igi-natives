// Original IGI.EXE function: Level_LoadObjects_6 (VA 0x004169D0; static CFG gate FAIL, CFG score 0.667).
#include "Level_LoadObjects_6.h"
char* Level_LoadObjects_6(char* context)

{
    int32_t context_val = g_57bab8;
    int32_t flagP = 0;

    if (context_val > 0)
    {
        char* result = &g_57b1a8;

        while (true)
        {
            char* source_1 = context;
            char* result_1 = result;
            int32_t entity_2;

            while (true)
            {
                char data_1 = *result_1;
                char f0_1 = *source_1;
                bool c_1 = data_1 < f0_1;

                if (data_1 == f0_1)
                {
                    if (!data_1)
                    {
                        entity_2 = 0;
                        break;
                    }

                    data_1 = result_1[1];
                    char f3_1 = source_1[1];
                    c_1 = data_1 < f3_1;

                    if (data_1 == f3_1)
                    {
                        result_1 = &result_1[2];
                        source_1 = &source_1[2];

                        if (data_1)
                            continue;

                        entity_2 = 0;
                        break;
                    }
                }

                entity_2 = result_1 - result_1 + 1;
                break;
            }

            if (!entity_2)
                return result;

            flagP += 1;
            result = &result[0x30];

            if (flagP >= context_val)
                break;
        }
    }

    char* dest_1 = context;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_1;
        dest_1 = &dest_1[1];
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_3 = ~i;
    int32_t source_3;
    int32_t dest_4;
    dest_4 = memcpy(flagP * 0x30 + &g_57b1a8, dest_1 - entity_3, entity_3 & 0xfffffffc);
    memcpy(dest_4, source_3, entity_3 & 3);
    g_57bab8 = context_val + 1;
    return flagP * 0x30 + &g_57b1a8;
}
