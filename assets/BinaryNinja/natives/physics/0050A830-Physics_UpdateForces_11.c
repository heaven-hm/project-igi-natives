// Original IGI.EXE function: Physics_UpdateForces_11 (VA 0x0050A830; static CFG gate PASS, CFG score 1.000).
#include "Physics_UpdateForces_11.h"
int32_t* Physics_UpdateForces_11(int32_t* context)

{
    int32_t data_val = g_bcac90;
    int32_t item_c = data_val;

    if (data_val >= 0x100)
        item_c = 0x100;

    int32_t source_val = *context;
    int32_t dest_val = context[1];

    if ((~(source_val - 1) & source_val) != source_val)
    {
        int32_t eflags_1;
        char data_5;
        data_5 = __bsr_gprv_memv(source_val);
        source_val = 1 << ((data_5 + 1) & 0x1f);
    }

    if ((~(dest_val - 1) & dest_val) != dest_val)
    {
        int32_t eflags_2;
        char data_6;
        data_6 = __bsr_gprv_memv(dest_val);
        dest_val = 1 << ((data_6 + 1) & 0x1f);
    }

    int32_t data_8 = g_bcac7c;

    if (data_8 <= 1)
        data_8 = 1;

    int32_t entity_4 = g_bcac80;
    int32_t temp_3 = g_bcac84;

    if (entity_4 <= 1)
        entity_4 = 1;

    int32_t context_val = g_bcac88;

    if (source_val < data_8)
        source_val = data_8;
    else if (source_val > temp_3)
        source_val = temp_3;

    if (dest_val < entity_4)
        dest_val = entity_4;
    else if (dest_val > context_val)
        dest_val = context_val;

    if (source_val <= dest_val)
    {
        uint32_t f0_2 = COMBINE(0, dest_val) / source_val;

        if (f0_2 > item_c && item_c)
            source_val = COMBINE(0, f0_2 * source_val) / item_c;
    }
    else
    {
        uint32_t f0 = COMBINE(0, source_val) / dest_val;

        if (f0 > item_c && item_c)
        {
            context[3] = COMBINE(0, f0 * dest_val) / item_c;
            context[2] = source_val;
            return context;
        }
    }

    context[3] = dest_val;
    context[2] = source_val;
    return context;
}
