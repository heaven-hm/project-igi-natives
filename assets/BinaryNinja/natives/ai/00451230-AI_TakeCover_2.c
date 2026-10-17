// Original IGI.EXE function: AI_TakeCover_2 (VA 0x00451230; static CFG gate PASS, CFG score 1.000).
#include "AI_TakeCover_2.h"
int32_t AI_TakeCover_2(void* context, void* param_2)

{
    int32_t data_val = 0;
    int32_t entity_val = *(context + 0x128);

    if (entity_val > 0)
    {
        int32_t* temp_1 = context + 0x10;

        do
        {
            if (*(param_2 + 0x14) == *temp_1)
                return *(context + (data_val << 2) + 0x90);

            data_val += 1;
            temp_1 = &temp_1[1];
        } while (data_val < entity_val);
    }

    return 0xffffffff;
}
