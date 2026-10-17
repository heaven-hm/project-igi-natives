// Original IGI.EXE function: AreaActivate_Process (VA 0x005048A0; static CFG gate PASS, CFG score 1.000).
#include "AreaActivate_Process.h"
int32_t AreaActivate_Process(void* context)

{
    *(context + 0xa8) = 0;
    void* item_8 = context;
    int32_t item_4 = 0;
    int32_t context_val = 0;
    int32_t result;

    for (int32_t i = 0xa7a648; i < &g_a7a7bc; )
    {
        result = 1 << (context_val & 0x1f);

        if (*(context + 0xac) & result)
        {
            (*i)(&item_8);
            result = *(context + 0xa8) + item_4;
            *(context + 0xa8) = result;
            item_4 = 0;
        }

        i += 0xc;
        context_val += 1;
    }

    int32_t* i_1 = *(context + 8);

    if (*i_1 && i_1)
    {
        int32_t temp_2 = g_afa7e0;

        do
        {
            int32_t* source_1 = *i_1;
            void* data_5;

            if (!source_1)
                data_5 = nullptr;
            else
            {
                int32_t data_2 = *source_1;
                int32_t data_3 = -(data_2);
                data_5 = (data_3 - data_3) & source_1;
            }

            *((temp_2 << 2) + &g_afa6e0) = data_5;
            int32_t temp_3 = temp_2 + 1;
            int32_t data_6 = 0;
            g_afa7e0 = temp_3;
            data_6 = i_1[7];
            result = *((data_6 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i_1);
                temp_3 = g_afa7e0;
            }

            i_1 = *((temp_3 << 2) + &g_afa6dc);
            temp_2 = temp_3 - 1;
            g_afa7e0 = temp_2;
        } while (i_1);
    }

    return result;
}
