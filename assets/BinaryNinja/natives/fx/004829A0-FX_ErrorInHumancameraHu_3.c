// Original IGI.EXE function: FX_ErrorInHumancameraHu_3 (VA 0x004829A0; static CFG gate PASS, CFG score 1.000).
#include "FX_ErrorInHumancameraHu_3.h"
void* FX_ErrorInHumancameraHu_3(void* context)

{
    int32_t entity_1 = *(context + 0x118) - 1;
    int32_t source_val = 0;
    *(context + 0x118) = entity_1;
    int32_t data_val = entity_1;
    int32_t dest_val = entity_1 + 0x80;
    int32_t temp_val = entity_1 << 3;
    int32_t entity_2;
    int32_t context_1;

    while (true)
    {
        context_1 = data_val;
        entity_2 = temp_val;

        if (data_val < 0)
        {
            context_1 = dest_val;
            entity_2 += 0x400;
        }

        if (*(entity_2 + &g_5c118d))
            break;

        source_val += 1;
        temp_val -= 8;
        data_val -= 1;
        dest_val -= 1;

        if (source_val >= 0x80)
        {
            *(context + 0x118) = entity_1 + 1;
            return context;
        }
    }

    int32_t* entity_3 = *(entity_2 + &g_5c1188);

    if (*entity_3)
    {
        *(context + 0x118) = context_1;
        *(context + 0x68) = entity_3;
        return context;
    }

    Error_Show("ERROR IN HUMANCAMERA HUMANLIST");

    while (true)
        /* nop */
}
