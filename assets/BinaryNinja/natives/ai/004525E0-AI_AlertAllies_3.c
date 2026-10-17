// Original IGI.EXE function: AI_AlertAllies_3 (VA 0x004525E0; static CFG gate PASS, CFG score 1.000).
#include "AI_AlertAllies_3.h"
void* AI_AlertAllies_3(int32_t context)

{
    void* source_val = *(context + 0x14);
    int16_t data_val = AI_UpdateOrders_16();
    char data_1;

    if (*(source_val + 0x1c) != data_val)
    {
        int16_t data_2 = AI_SelectTarget_12();

        if (*(source_val + 0x1c) != data_2)
        {
            int16_t data_3 = AI_AlertAllies_7();

            if (*(source_val + 0x1c) != data_3)
            {
                int16_t data_4 = AI_FireWeapon_9();

                if (*(source_val + 0x1c) != data_4)
                    data_1 = context;
                else
                    data_1 = *(source_val + 0xd00);
            }
            else
                data_1 = *(source_val + 0xd00);
        }
        else
            data_1 = *(source_val + 0xd00);
    }
    else
        data_1 = *(source_val + 0xd00);

    int32_t entity_val = 0;
    entity_val = !data_1;
    int32_t item_c = entity_val;
    return AI_WriteChannel(context, 0, entity_val);
}
