// IGI native provenance: Train_Cleanup - 0x0042AC20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042AC20-Train_Cleanup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Train_Cleanup.h"
int32_t* Train_Cleanup(void* context)

{
    int32_t* result = *(context + 8);
    void* item_8 = context + 0x20;
    void* item_4 = context + 0x70;

    if (*result)
    {
        int32_t* i = result;

        if (i)
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
                uint32_t data_6 = DynObj_CreateMagicObject_6();
                int32_t entity_3 = 0;
                entity_3 = i[7];
                result = *(((data_6 * 0x180 + entity_3) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, &item_8);

                entity_1 = g_afa7e0 - 1;
                g_afa7e0 = entity_1;
                i = *((entity_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
