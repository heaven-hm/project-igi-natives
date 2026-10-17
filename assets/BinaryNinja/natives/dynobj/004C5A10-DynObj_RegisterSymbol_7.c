// Original IGI.EXE function: DynObj_RegisterSymbol_7 (VA 0x004C5A10; static CFG gate PASS, CFG score 1.000).
#include "DynObj_RegisterSymbol_7.h"
void* DynObj_RegisterSymbol_7(void* context, int32_t* param_2)

{
    int32_t* i = *(context + 8);

    if (*i && i)
    {
        int32_t entity_1 = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i;
            void* data_4;

            if (!temp_1)
                data_4 = nullptr;
            else
            {
                int32_t data_1 = *temp_1;
                int32_t data_2 = -(data_1);
                data_4 = (data_2 - data_2) & temp_1;
            }

            *((entity_1 << 2) + &g_afa6e0) = data_4;
            g_afa7e0 = entity_1 + 1;
            uint32_t data_6 = DynObj_LinkDynamicCube_12();
            int32_t entity_3 = 0;
            entity_3 = i[7];
            int32_t data_10 = *(((data_6 * 0x180 + entity_3) << 2) + &g_a96ae0);

            if (data_10)
                data_10(i, param_2);

            entity_1 = g_afa7e0 - 1;
            g_afa7e0 = entity_1;
            i = *((entity_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return DynObj_RegisterSymbol_9(*param_2, context);
}
