// IGI native provenance: QTask_CreateTask_3 - 0x00401E70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401E70-QTask_CreateTask_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_CreateTask_3.h"
int32_t QTask_CreateTask_3(void* context, int32_t param_2, int32_t param_3, int32_t param_4)

{
    int32_t data_4 = g_afa7e0;
    *((data_4 << 2) + &g_afa6e0) = context;
    int32_t data_val = data_4 + 1;
    g_afa7e0 = data_val;
    int16_t entity_val = *(context + 0x1c);

    if (entity_val == param_3)
    {
        int32_t entity_2 = *(((param_2 * 0x180 + entity_val) << 2) + &g_a96ae0);

        if (entity_2)
        {
            entity_2(context, param_4);
            data_val = g_afa7e0;
        }
    }

    if (context == *((data_val << 2) + &g_afa6dc))
    {
        int32_t* i = *(context + 8);

        if (*i && i)
        {
            do
            {
                int32_t* source_1 = *i;
                void* temp_9;

                if (!source_1)
                    temp_9 = nullptr;
                else
                {
                    int32_t temp_6 = *source_1;
                    int32_t temp_7 = -(temp_6);
                    temp_9 = (temp_7 - temp_7) & source_1;
                }

                *((data_val << 2) + &g_afa6e0) = temp_9;
                g_afa7e0 = data_val + 1;
                QTask_CreateTask_3(i, param_2, param_3, param_4);
                data_val = g_afa7e0 - 1;
                g_afa7e0 = data_val;
                i = *((data_val << 2) + &g_afa6e0);
            } while (i);
        }
    }

    g_afa7e0 = data_val - 1;
    return data_val - 1;
}
