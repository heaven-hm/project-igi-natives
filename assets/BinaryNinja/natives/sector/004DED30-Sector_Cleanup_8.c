// Original IGI.EXE function: Sector_Cleanup_8 (VA 0x004DED30; static CFG gate PASS, CFG score 1.000).
#include "Sector_Cleanup_8.h"
int32_t Sector_Cleanup_8(void* context, int32_t* param_2)

{
    Render_SetupLighting_14(context);
    DynObj_RegisterSymbol_9(*param_2, context);
    int32_t* i = *(context + 8);
    int32_t result;

    if (!*i || !i)
        result = g_afa7e0;
    else
    {
        result = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i;
            void* entity_4;

            if (!temp_1)
                entity_4 = nullptr;
            else
            {
                int32_t entity_1 = *temp_1;
                int32_t entity_2 = -(entity_1);
                entity_4 = (entity_2 - entity_2) & temp_1;
            }

            *((result << 2) + &g_afa6e0) = entity_4;
            g_afa7e0 = result + 1;
            uint32_t data_3 = DynObj_LinkDynamicCube_12();
            int32_t temp_2 = 0;
            temp_2 = i[7];
            int32_t data_4 = *(((data_3 * 0x180 + temp_2) << 2) + &g_a96ae0);

            if (data_4)
                data_4(i, param_2);

            result = g_afa7e0 - 1;
            g_afa7e0 = result;
            i = *((result << 2) + &g_afa6e0);
        } while (i);
    }

    void* entity_8 = *(context + 0xe8);

    if (entity_8)
    {
        int32_t* i_1 = *(entity_8 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* temp_3 = *i_1;
                void* entity_12;

                if (!temp_3)
                    entity_12 = nullptr;
                else
                {
                    int32_t entity_9 = *temp_3;
                    int32_t entity_10 = -(entity_9);
                    entity_12 = (entity_10 - entity_10) & temp_3;
                }

                *((result << 2) + &g_afa6e0) = entity_12;
                g_afa7e0 = result + 1;
                uint32_t data_8 = DynObj_LinkDynamicCube_12();
                int32_t entity_13 = 0;
                entity_13 = i_1[7];
                int32_t data_12 = *(((data_8 * 0x180 + entity_13) << 2) + &g_a96ae0);

                if (data_12)
                    data_12(i_1, param_2);

                result = g_afa7e0 - 1;
                g_afa7e0 = result;
                i_1 = *((result << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
