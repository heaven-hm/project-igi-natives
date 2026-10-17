// IGI native provenance: LevelScript_LoadParameters - 0x0052C900 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0052C900-LevelScript_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "LevelScript_LoadParameters.h"
void* LevelScript_LoadParameters(void* context)

{
    if (!*(context + 0x24))
    {
        int32_t* i = *(context + 8);
        int32_t data_1 = *i;
        int32_t data_2 = -(data_1);
        *(context + 0x24) = (data_2 - data_2) & i;

        if (*i && i)
        {
            int32_t entity_1 = g_afa7e0;

            do
            {
                int32_t* temp_1 = *i;
                void* data_9;

                if (!temp_1)
                    data_9 = nullptr;
                else
                {
                    int32_t data_6 = *temp_1;
                    int32_t data_7 = -(data_6);
                    data_9 = (data_7 - data_7) & temp_1;
                }

                *((entity_1 << 2) + &g_afa6e0) = data_9;
                g_afa7e0 = entity_1 + 1;
                uint32_t data_11 = Script_ParseEnumReal32_8();
                int32_t entity_3 = 0;
                entity_3 = i[7];
                int32_t data_15 = *(((data_11 * 0x180 + entity_3) << 2) + &g_a96ae0);

                if (data_15)
                    data_15(i, 0);

                entity_1 = g_afa7e0 - 1;
                g_afa7e0 = entity_1;
                i = *((entity_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    while (true)
    {
        void* result = *(context + 0x24);
        int32_t item_8 = *(context + 0x20);
        char item_4_1 = 0;

        if (!result)
            return result;

        int32_t entity_5 = 0;
        entity_5 = *(result + 0x1c);
        int32_t entity_6 = 0;
        entity_6 = g_54f6f2;
        result = (*(((entity_5 + entity_6 * 0x180) << 2) + &g_a96ae0))(result, &item_8);
        result = item_4_1;

        if (!result)
            return result;

        int32_t* entity_9 = **(context + 0x24);

        if (!entity_9)
            *(context + 0x24) = 0;
        else
        {
            int32_t data_16 = *entity_9;
            int32_t data_17 = -(data_16);
            *(context + 0x24) = (data_17 - data_17) & entity_9;
        }
    }
}
