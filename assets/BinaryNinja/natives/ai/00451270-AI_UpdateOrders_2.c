// Original IGI.EXE function: AI_UpdateOrders_2 (VA 0x00451270; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdateOrders_2.h"
int32_t AI_UpdateOrders_2(void* context, int32_t param_2)

{
    int32_t result = 0;
    int32_t i_1 = *(context + 0x128);

    if (i_1 > 0)
    {
        int32_t* entity_val = context + 0x90;
        int32_t i;

        do
        {
            if (*entity_val == param_2)
                result += 1;

            entity_val = &entity_val[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
