// IGI native provenance: Light_LightsourceNotFound - 0x00526920 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00526920-Light_LightsourceNotFound.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_LightsourceNotFound.h"
int32_t Light_LightsourceNotFound(int32_t context)

{
    int32_t entity_val;
    int32_t item_4_1 = entity_val;
    int32_t entity_1 = g_a83d00;
    int32_t item_4 = 0;

    if (entity_1 > 0)
    {
        int32_t* source_1 = g_a83cfc;
        int32_t dest_1 = g_a83d08;
        int32_t context_1 = g_a83cf8;
        int32_t* temp_1 = source_1;
        bool flag_1_1;

        do
        {
            int32_t* data_3 = *temp_1 * dest_1 + context_1;

            if (*data_3 == context)
            {
                int32_t* temp_2 = g_a83d0c;
                int32_t result = *(temp_2 + data_3);
                g_a83d00 = entity_1 - 1;

                if (result != entity_1 - 1)
                {
                    int32_t dest_2 = source_1[result];
                    int32_t entity_5 = source_1[entity_1 - 1] * dest_1 + context_1;
                    int32_t temp_3 = *(temp_2 + entity_5);
                    source_1[result] = source_1[temp_3];
                    *(g_a83cfc + (temp_3 << 2)) = dest_2;
                    *(g_a83d0c + entity_5) = result;
                }

                return result;
            }

            temp_1 = &temp_1[1];
            flag_1_1 = item_4 + 1 < entity_1;
            item_4 += 1;
        } while (flag_1_1);
    }

    Error_Show("Lightsource not found");

    while (true)
        /* nop */
}
