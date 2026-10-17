// Original IGI.EXE function: RigidDynCubeObj_LoadParameters (VA 0x004A01B0; static CFG gate PASS, CFG score 0.889).
#include "RigidDynCubeObj_LoadParameters.h"
int32_t RigidDynCubeObj_LoadParameters(void* context)

{
    void* item_54 = context;
    void item_4c;
    void* item_50 = Render_SkinBones_13(&item_4c);
    void* item_48;
    void item_44;
    Render_ComputeNormals_12(&item_48, &item_44);
    (*((DynObj_ParseConfigFile_15() << 2) + &g_a94e84))(&item_54);
    void item_40;
    memcpy(&item_40, context + 0x20, 0x18);
    void* temp_val = context + 0x70;
    void item_28;
    memcpy(&item_28, temp_val, 0x28);
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
            uint32_t data_4 = DynObj_FindSymbol_6();
            int32_t data_5 = 0;
            data_5 = i[7];
            int32_t data_6 = *(((data_4 * 0x180 + data_5) << 2) + &g_a96ae0);

            if (data_6)
                data_6(i, &item_40);

            result = g_afa7e0 - 1;
            g_afa7e0 = result;
            i = *((result << 2) + &g_afa6e0);
        } while (i);
    }

    void* context_1 = *(context + 0xe8);

    if (context_1)
    {
        memcpy(&item_40, context + 0x20, 0x18);
        memcpy(&item_28, temp_val, 0x28);
        int32_t* i_1 = *(context_1 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* temp_5 = *i_1;
                void* entity_8;

                if (!temp_5)
                    entity_8 = nullptr;
                else
                {
                    int32_t entity_5 = *temp_5;
                    int32_t entity_6 = -(entity_5);
                    entity_8 = (entity_6 - entity_6) & temp_5;
                }

                *((result << 2) + &g_afa6e0) = entity_8;
                g_afa7e0 = result + 1;
                uint32_t data_10 = DynObj_FindSymbol_6();
                int32_t data_11 = 0;
                data_11 = i_1[7];
                int32_t data_12 = *(((data_10 * 0x180 + data_11) << 2) + &g_a96ae0);

                if (data_12)
                    data_12(i_1, &item_40);

                result = g_afa7e0 - 1;
                g_afa7e0 = result;
                i_1 = *((result << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
