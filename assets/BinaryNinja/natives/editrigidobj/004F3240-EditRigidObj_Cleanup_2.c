// Original IGI.EXE function: EditRigidObj_Cleanup_2 (VA 0x004F3240; static CFG gate PASS, CFG score 1.000).
#include "EditRigidObj_Cleanup_2.h"
void* EditRigidObj_Cleanup_2(void* context, int32_t* param_2)

{
    int32_t* i = *(context + 8);
    int32_t data_val;

    if (!*i || !i)
        data_val = g_afa7e0;
    else
    {
        data_val = g_afa7e0;

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

            *((data_val << 2) + &g_afa6e0) = entity_4;
            g_afa7e0 = data_val + 1;
            uint32_t data_3 = DynObj_LinkDynamicCube_12();
            int32_t entity_5 = 0;
            entity_5 = i[7];
            int32_t data_7 = *(((data_3 * 0x180 + entity_5) << 2) + &g_a96ae0);

            if (data_7)
                data_7(i, param_2);

            data_val = g_afa7e0 - 1;
            g_afa7e0 = data_val;
            i = *((data_val << 2) + &g_afa6e0);
        } while (i);
    }

    void* entity_6 = *(context + 0xe8);

    if (entity_6)
    {
        int32_t* i_1 = *(entity_6 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* temp_2 = *i_1;
                void* entity_10;

                if (!temp_2)
                    entity_10 = nullptr;
                else
                {
                    int32_t entity_7 = *temp_2;
                    int32_t entity_8 = -(entity_7);
                    entity_10 = (entity_8 - entity_8) & temp_2;
                }

                *((data_val << 2) + &g_afa6e0) = entity_10;
                g_afa7e0 = data_val + 1;
                uint32_t data_11 = DynObj_LinkDynamicCube_12();
                int32_t data_12 = 0;
                data_12 = i_1[7];
                int32_t data_13 = *(((data_11 * 0x180 + data_12) << 2) + &g_a96ae0);

                if (data_13)
                    data_13(i_1, param_2);

                data_val = g_afa7e0 - 1;
                g_afa7e0 = data_val;
                i_1 = *((data_val << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    Render_SetupLighting_14(context);
    void* result = DynObj_RegisterSymbol_9(*param_2, context);
    *(context + 0x198) = 0;
    return result;
}
