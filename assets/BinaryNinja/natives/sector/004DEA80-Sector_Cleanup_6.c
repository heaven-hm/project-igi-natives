// IGI native provenance: Sector_Cleanup_6 - 0x004DEA80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DEA80-Sector_Cleanup_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sector_Cleanup_6.h"
int32_t Sector_Cleanup_6(void* context, int32_t param_2)

{
    Render_SkinBones_15(context);
    void* data_val = *(context + 0x148);
    int32_t result;

    if (!data_val)
        result = g_afa7e0;
    else
    {
        int32_t* i_2 = *(data_val + 8);

        if (!*i_2)
            result = g_afa7e0;
        else
        {
            int32_t* i = i_2;

            if (!i)
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
                    int32_t entity_5 = 0;
                    entity_5 = i[7];
                    int32_t data_7 = *(((data_3 * 0x180 + entity_5) << 2) + &g_a96ae0);

                    if (data_7)
                        data_7(i, param_2);

                    result = g_afa7e0 - 1;
                    g_afa7e0 = result;
                    i = *((result << 2) + &g_afa6e0);
                } while (i);
            }
        }
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

                *((result << 2) + &g_afa6e0) = entity_10;
                g_afa7e0 = result + 1;
                uint32_t data_11 = DynObj_LinkDynamicCube_12();
                int32_t data_12 = 0;
                data_12 = i_1[7];
                int32_t data_13 = *(((data_11 * 0x180 + data_12) << 2) + &g_a96ae0);

                if (data_13)
                    data_13(i_1, param_2);

                result = g_afa7e0 - 1;
                g_afa7e0 = result;
                i_1 = *((result << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
