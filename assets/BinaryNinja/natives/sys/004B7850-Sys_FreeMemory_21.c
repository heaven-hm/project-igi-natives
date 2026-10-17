// Original IGI.EXE function: Sys_FreeMemory_21 (VA 0x004B7850; static CFG gate FAIL, CFG score 0.667).
#include "Sys_FreeMemory_21.h"
char* Sys_FreeMemory_21(char* context, void* param_2)

{
    char* flagP = context;
    void* entity_val = param_2;
    int32_t temp_val = *(flagP + 4);
    char* dest_val = &flagP[0x10];
    char* result = temp_val * entity_val + dest_val;
    context = dest_val;

    if (entity_val >= 1)
    {
        int32_t i = 0;

        if (*(flagP + 6) - entity_val > 0)
        {
            context = result;
            int16_t* item_8_1 = entity_val * 2;

            do
            {
                int32_t data_3 = *(flagP + 0xc);
                int16_t context_4 = *(item_8_1 + data_3);
                *(data_3 + (i << 1)) = context_4;

                if (temp_val > 0)
                {
                    char* data_4 = dest_val;
                    int32_t item_4_1 = temp_val;
                    bool flag_4_1;

                    do
                    {
                        context_4 = *(context - dest_val + data_4);
                        *data_4 = context_4;
                        data_4 = &data_4[1];
                        flag_4_1 = item_4_1 != 1;
                        item_4_1 -= 1;
                    } while (flag_4_1);
                    entity_val = param_2;
                }

                dest_val = &dest_val[temp_val];
                i += 1;
                context = &context[temp_val];
                item_8_1 = &item_8_1[1];
                result = *(flagP + 6) - entity_val;
            } while (i < result);

            context = dest_val;
        }

        while (i < *(flagP + 6))
        {
            result = *(flagP + 0xc);
            *(result + (i << 1)) = 0;

            if (temp_val > 0)
            {
                result = nullptr;
                memset(memset(dest_val, 0, temp_val & 0xfffffffc), 0, temp_val & 3);
                dest_val = context;
            }

            dest_val = &dest_val[temp_val];
            i += 1;
            context = dest_val;
        }
    }

    return result;
}
