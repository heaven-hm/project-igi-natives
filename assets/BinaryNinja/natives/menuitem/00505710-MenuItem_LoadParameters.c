// Original IGI.EXE function: MenuItem_LoadParameters (VA 0x00505710; static CFG gate PASS, CFG score 1.000).
#include "MenuItem_LoadParameters.h"
int32_t MenuItem_LoadParameters(void* context, int32_t param_2)

{
    char data_1 = 1;

    if (!*(context + 0x4d))
        data_1 = *(context + 0x4e);

    int32_t* i = *(context + 8);
    *(context + 0x4e) = data_1;

    if (!*i || !i)
    {
        *(context + 0x4d) = 0;
        return data_1;
    }

    int32_t entity_val = g_afa7e0;
    int32_t data_11;

    do
    {
        int32_t* temp_1 = *i;
        void* data_5;

        if (!temp_1)
            data_5 = nullptr;
        else
        {
            int32_t data_2 = *temp_1;
            int32_t data_3 = -(data_2);
            data_5 = (data_3 - data_3) & temp_1;
        }

        *((entity_val << 2) + &g_afa6e0) = data_5;
        g_afa7e0 = entity_val + 1;
        uint32_t data_7 = Physics_EvaluateAreaCriteria_5();
        int32_t entity_2 = 0;
        entity_2 = i[7];
        data_11 = *(((data_7 * 0x180 + entity_2) << 2) + &g_a96ae0);

        if (data_11)
            data_11 = data_11(i, param_2);

        entity_val = g_afa7e0 - 1;
        g_afa7e0 = entity_val;
        i = *((entity_val << 2) + &g_afa6e0);
    } while (i);

    *(context + 0x4d) = 0;
    return data_11;
}
