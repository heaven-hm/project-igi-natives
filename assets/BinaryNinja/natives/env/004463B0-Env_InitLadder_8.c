// Original IGI.EXE function: Env_InitLadder_8 (VA 0x004463B0; static CFG gate PASS, CFG score 1.000).
#include "Env_InitLadder_8.h"
int32_t Env_InitLadder_8(void* context)

{
    void item_8;
    int32_t result = Env_TriggerAlarm_8(&item_8, context);
    int32_t* i = *(context + 8);

    if (*i && i)
    {
        int32_t entity_1 = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i;
            void* data_3;

            if (!temp_1)
                data_3 = nullptr;
            else
            {
                int32_t data_val = *temp_1;
                int32_t data_1 = -(data_val);
                data_3 = (data_1 - data_1) & temp_1;
            }

            *((entity_1 << 2) + &g_afa6e0) = data_3;
            g_afa7e0 = entity_1 + 1;
            uint32_t data_5 = DynObj_CreateMagicObject_6();
            int32_t temp_2 = 0;
            temp_2 = i[7];
            result = *(((data_5 * 0x180 + temp_2) << 2) + &g_a96ae0);

            if (result)
                result = result(i, &item_8);

            entity_1 = g_afa7e0 - 1;
            g_afa7e0 = entity_1;
            i = *((entity_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
