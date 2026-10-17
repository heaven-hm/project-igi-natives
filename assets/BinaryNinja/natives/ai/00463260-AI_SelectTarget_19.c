// Original IGI.EXE function: AI_SelectTarget_19 (VA 0x00463260; static CFG gate PASS, CFG score 0.889).
#include "AI_SelectTarget_19.h"
int32_t AI_SelectTarget_19(void* context)

{
    void item_18;
    memcpy(&item_18, context + 0x20, 0x18);
    int32_t item_24;
    int32_t* item_3c = &item_24;
    item_24 = 0;
    int32_t item_20 = 0;
    int32_t item_1c = 0;
    Human_GroundQuery(context, &item_18, &item_18, context + 0x2f4, 4096000.0f);
    AI_UpdateOrders_19(context, &item_18);
    return 0;
}
