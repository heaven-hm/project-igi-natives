// Original IGI.EXE function: Gun_SpawnRound (VA 0x00474360; static CFG gate PASS, CFG score 1.000).
#include "Gun_SpawnRound.h"
void* Gun_SpawnRound(void* context, char param_2)

{
    void* result = Table_GetAt(context + 0x20c, 0);

    if (result)
    {
        void* data_1 = *(context + 0x208);
        char item_30 = param_2;
        char item_2f_1 = 0;
        int32_t item_2c_1 = 0;
        int32_t item_28_1 = 0;
        int32_t item_24_1 = 0;
        int32_t item_20_1 = 0;
        void* result_1 = nullptr;
        int32_t item_c_1 = 0;

        if (!data_1)
            int32_t item_8_2 = 0x3f800000;
        else
            int32_t item_8_1 = *(data_1 + 0x4d4);

        void* item_4_1 = data_1;
        uint32_t data_3 = AI_AlertAllies_17();
        int32_t entity_2 = 0;
        entity_2 = *(result + 0x1c);
        (*(((data_3 * 0x180 + entity_2) << 2) + &g_a96ae0))(result, &item_30);
        result = result_1;
        *(context + 0x1f0) = result;
        *(context + 0x1f4) = item_c_1;
    }

    return result;
}
