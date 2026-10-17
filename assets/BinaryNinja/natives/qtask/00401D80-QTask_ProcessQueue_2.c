// Original IGI.EXE function: QTask_ProcessQueue_2 (VA 0x00401D80; static CFG gate PASS, CFG score 1.000).
#include "QTask_ProcessQueue_2.h"
int32_t QTask_ProcessQueue_2(void* context, int32_t param_2, int32_t param_3)

{
    int32_t data_4 = g_afa7e0;
    *((data_4 << 2) + &g_afa6e0) = context;
    int32_t data_val = data_4 + 1;
    int32_t temp_val = 0;
    g_afa7e0 = data_val;
    temp_val = *(context + 0x1c);
    int32_t entity_5 = *(((param_2 * 0x180 + temp_val) << 2) + &g_a96ae0);

    if (entity_5)
    {
        entity_5(context, param_3);
        data_val = g_afa7e0;
    }

    if (context == *((data_val << 2) + &g_afa6dc))
    {
        int32_t* i = *(context + 8);

        if (*i && i)
        {
            do
            {
                int32_t* source_1 = *i;
                void* temp_4;

                if (!source_1)
                    temp_4 = nullptr;
                else
                {
                    int32_t temp_1 = *source_1;
                    int32_t temp_2 = -(temp_1);
                    temp_4 = (temp_2 - temp_2) & source_1;
                }

                *((data_val << 2) + &g_afa6e0) = temp_4;
                g_afa7e0 = data_val + 1;
                QTask_ProcessQueue_2(i, param_2, param_3);
                data_val = g_afa7e0 - 1;
                g_afa7e0 = data_val;
                i = *((data_val << 2) + &g_afa6e0);
            } while (i);
        }
    }

    g_afa7e0 = data_val - 1;
    return data_val - 1;
}
