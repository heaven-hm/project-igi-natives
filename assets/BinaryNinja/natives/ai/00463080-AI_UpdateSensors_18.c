// Original IGI.EXE function: AI_UpdateSensors_18 (VA 0x00463080; static CFG gate PASS, CFG score 0.944).
#include "AI_UpdateSensors_18.h"
int32_t* AI_UpdateSensors_18(void* context)

{
    void* item_28 = context;
    int32_t data_1 = *(context + 0xa0);
    void item_20;
    memcpy(&item_20, context + 0x20, 0x18);
    int32_t item_8 = data_1;
    int32_t i = 0;
    int32_t* result = Level_LoadLevel_4();

    if (*result > 0)
    {
        int32_t source_1 = 8;

        do
        {
            int32_t temp_1 = 0;
            temp_1 = *(*(Level_LoadLevel_4() + source_1) + 0x1c);
            uint32_t data_4 = Level_LoadLevel_2();
            void** item_38 = &item_28;
            (*(((temp_1 + data_4 * 0x180) << 2) + &g_a96ae0))(*(Level_LoadLevel_4() + source_1),
                item_38);
            i += 1;
            source_1 += 4;
            result = Level_LoadLevel_4();
        } while (i < *result);
    }

    return result;
}
