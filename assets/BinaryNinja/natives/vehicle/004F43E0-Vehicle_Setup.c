// Original IGI.EXE function: Vehicle_Setup (VA 0x004F43E0; static CFG gate PASS, CFG score 1.000).
#include "Vehicle_Setup.h"
int32_t Vehicle_Setup(void* context, int32_t param_2)

{
    *(context + 0x745) = 1;
    int32_t result = (*(((DynObj_UpdateDynTree_12() * 0x180 + DynObj_LookupHashItem_5()) << 2) + &g_a96ae0))(context, param_2);
    void* source_1 = *(context + 0xe8);

    if (source_1)
    {
        int32_t* i = *(source_1 + 8);

        if (*i && i)
        {
            int32_t entity_1 = g_afa7e0;

            do
            {
                int32_t* temp_1 = *i;
                void* data_8;

                if (!temp_1)
                    data_8 = nullptr;
                else
                {
                    int32_t data_5 = *temp_1;
                    int32_t data_6 = -(data_5);
                    data_8 = (data_6 - data_6) & temp_1;
                }

                *((entity_1 << 2) + &g_afa6e0) = data_8;
                g_afa7e0 = entity_1 + 1;
                uint32_t data_10 = DynObj_UpdateDynTree_12();
                int32_t entity_3 = 0;
                entity_3 = i[7];
                result = *(((data_10 * 0x180 + entity_3) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, param_2);

                entity_1 = g_afa7e0 - 1;
                g_afa7e0 = entity_1;
                i = *((entity_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
