// Original IGI.EXE function: AI_UpdateOrders_6 (VA 0x00454630; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdateOrders_6.h"
int32_t AI_UpdateOrders_6(void* context, void* param_2)

{
    int32_t result = *(context + 8);

    if (!(result & 4))
    {
        void* entity_1 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 8;
        int32_t data_1 = *(entity_1 + 0x20);
        *(context + 0x14) = data_1;
        return data_1(context, param_2);
    }

    if (result & 0x20000)
    {
        void* entity_2 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0xa;
        int32_t data_4 = *(entity_2 + 0x28);
        *(context + 0x14) = data_4;
        return data_4(context, param_2);
    }

    if (!(result & 1))
        return result;

    FX_DebrisSpawn_15(param_2);
    int32_t* entity_3 = *(context + 4);
    *(context + 0xc) = *(context + 0x10);
    *(context + 0x10) = 0;
    int32_t data_7 = *entity_3;
    *(context + 0x14) = data_7;
    return data_7(context, param_2);
}
