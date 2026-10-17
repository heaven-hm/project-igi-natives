// Original IGI.EXE function: Display_CreateSurface_16 (VA 0x00498960; static CFG gate PASS, CFG score 1.000).
#include "Display_CreateSurface_16.h"
struct status_msg* Display_CreateSurface_16(uint32_t context, int32_t param_2, int32_t param_3, float param_4, float param_5)

{
    int32_t kind;
    kind = g_c311c0;
    struct status_msg* result = QTask_HandleInput(nullptr, kind, 0);
    *(result + 0xe3c) = 0;
    *(result + 0x564c) = 0;
    DynObj_RegisterSymbol_8(context, result, 0);
    int32_t entity_val = 0;
    result->head[0x1a] = context;
    entity_val = !param_3;
    *(result + 0x5650) = entity_val;
    *(result + 0x5654) = param_2;
    *(result + 0x56a8) = 0;
    *(result + 0x5648) = 0;
    void* __offset(status_msg, 0xe5c) data_1 = &result->head[0x397];
    int32_t i_1 = 0x240;
    int32_t i;

    do
    {
        *(ADJ(data_1) + 0xe5c) = 0;
        data_1 += 0x20;
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    *(result + 0x56a0) = param_4;
    *(result + 0x5698) = param_4 + param_5;
    Display_CheckCapabilities_17(result, 0.3125f);
    int32_t entity_1 = g_bcad74;
    int32_t entity_2 = -(entity_1);
    int32_t item_10 = 0;
    int32_t item_c = 0;
    int32_t item_8 = 0;
    int32_t item_4 = 0;
    int32_t* data_2 = g_5ca110;
    int32_t item_c_1 = (((entity_2 - entity_2) & 0xfffff800) + 0x800) | 0x10000;
    item_10 = 0x10;
    int32_t item_4_1 = 0x780;
    int32_t item_8_1 = 0x142;
    (*(*data_2 + 0x14))(data_2, &item_10, &result->head[0x15b3], 0);
    *(result + 0x56ad) = 0;
    g_6e5bd0 = result;
    return result;
}
