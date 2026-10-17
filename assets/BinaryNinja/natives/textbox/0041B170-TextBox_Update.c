// IGI native provenance: TextBox_Update - 0x0041B170 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041B170-TextBox_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "TextBox_Update.h"
int32_t TextBox_Update(void* context)

{
    *(context + 0x219c) = 0;
    g_57bba0 = context;

    if (Script_FormatString_6(context + 0x21a4))
        Script_SpawnNewTask_7(context + 0x21a4, context);

    g_57bba0 = 0;
    int32_t result = *(context + 0x21a0);
    int32_t context_val = 0;
    void* dest_1 = context + 0x9c;

    if (result > 0)
    {
        do
        {
            *(dest_1 + 0x104) = Menu_LocalSS(*(context + 0x44), dest_1);
            result = *(context + 0x21a0);
            dest_1 += 0x108;
            context_val += 1;
        } while (context_val < result);
    }

    int32_t* i = *(context + 8);

    if (*i && i)
    {
        int32_t entity_1 = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i;
            void* data_6;

            if (!temp_1)
                data_6 = nullptr;
            else
            {
                int32_t data_3 = *temp_1;
                int32_t data_4 = -(data_3);
                data_6 = (data_4 - data_4) & temp_1;
            }

            *((entity_1 << 2) + &g_afa6e0) = data_6;
            g_afa7e0 = entity_1 + 1;
            int32_t data_7 = Menu_HandleInput_13();
            int32_t temp_2 = 0;
            temp_2 = i[7];
            result = *(((data_7 * 0x180 + temp_2) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            entity_1 = g_afa7e0 - 1;
            g_afa7e0 = entity_1;
            i = *((entity_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
