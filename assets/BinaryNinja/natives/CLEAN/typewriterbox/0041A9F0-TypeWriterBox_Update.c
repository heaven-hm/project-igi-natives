// IGI native provenance: TypeWriterBox_Update - 0x0041A9F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041A9F0-TypeWriterBox_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "TypeWriterBox_Update.h"
void TypeWriterBox_Update(void* context)

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
            int32_t data_5 = Menu_HandleInput_13();
            int32_t entity_3 = 0;
            entity_3 = i[7];
            int32_t data_val = *(((data_5 * 0x180 + entity_3) << 2) + &g_a96ae0);

            if (data_val)
                data_val(i);

            entity_1 = g_afa7e0 - 1;
            g_afa7e0 = entity_1;
            i = *((entity_1 << 2) + &g_afa6e0);
        } while (i);
    }

    *(context + 0x68) = 0;
    *(context + 0x60) = 0;
    *(context + 0x64) = 0;
    *(context + 0x70) = 0;
    *(context + 0x74) = 0;
    *(context + 0x6c) = 0x10;
}
