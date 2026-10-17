// Original IGI.EXE function: Sys_AllocateMemory_2 (VA 0x004B0A80; static CFG gate PASS, CFG score 1.000).
#include "Sys_AllocateMemory_2.h"
int32_t Sys_AllocateMemory_2(int32_t context, int32_t param_2, char* param_3, int32_t param_4)

{
    char* entity_val = nullptr;
    int32_t result = param_2 - 1;

    if (result <= 0)
    {
        *context = 0;
        return result;
    }

    char* context_val = param_3;

    do
    {
        result = *context_val;

        if (!result)
            break;

        if (result != 0x2f)
        {
            entity_val[context] = result;
            entity_val = &entity_val[1];
        }
        else
        {
            result = context_val[1];
            context_val = &context_val[1];

            if (result < 0x30 || result > 0x39)
            {
                entity_val[context] = result;
                entity_val = &entity_val[1];
            }
            else
            {
                Sys_CheckHeap(&entity_val[context], param_2 - entity_val, param_4, result - 0x30);
                int32_t dest_1 = context;
                int32_t i = 0xffffffff;

                while (i)
                {
                    bool flag_0_1 = 0 != *dest_1;
                    dest_1 += 1;
                    i -= 1;

                    if (!flag_0_1)
                        break;
                }

                entity_val = ~i - 1;
            }
        }

        result = param_2 - 1;
        context_val = &context_val[1];
    } while (entity_val < result);

    entity_val[context] = 0;
    return result;
}
