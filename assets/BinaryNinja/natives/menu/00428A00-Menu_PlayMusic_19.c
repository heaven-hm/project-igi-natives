// Original IGI.EXE function: Menu_PlayMusic_19 (VA 0x00428A00; static CFG gate PASS, CFG score 1.000).
#include "Menu_PlayMusic_19.h"
int32_t Menu_PlayMusic_19(int32_t context)

{
    int32_t entity_val;
    int32_t item_4_1 = entity_val;
    int32_t data_val = 0;
    int32_t entity_1 = 0;
    data_val = g_c28d2d;
    entity_1 = g_c28d2f;
    int32_t temp_val = 0;
    int32_t entity_4 = 0;
    *(context + 0x73c) = (entity_1 >> 7) - (data_val >> 7);
    temp_val = g_c28d2a;
    entity_4 = g_c28d32;
    *(context + 0x734) = (entity_4 >> 7) - (temp_val >> 7);
    return context;
}
