// IGI native provenance: MenuScreen_Action - 0x00422260 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00422260-MenuScreen_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuScreen_Action.h"
int32_t* MenuScreen_Action(void* context)

{
    int32_t* result = Script_FormatString_6(context + 0xfc);

    if (result)
        result = Script_SpawnNewTask_7(context + 0xfc, context);

    int32_t* i = *(context + 8);

    if (*i && i)
    {
        int32_t entity_1 = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i;
            void* data_3;

            if (!temp_1)
                data_3 = nullptr;
            else
            {
                int32_t data_val = *temp_1;
                int32_t data_1 = -(data_val);
                data_3 = (data_1 - data_1) & temp_1;
            }

            *((entity_1 << 2) + &g_afa6e0) = data_3;
            g_afa7e0 = entity_1 + 1;
            int32_t data_4 = Menu_HandleInput_13();
            int32_t entity_3 = 0;
            entity_3 = i[7];
            result = *(((data_4 * 0x180 + entity_3) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            entity_1 = g_afa7e0 - 1;
            g_afa7e0 = entity_1;
            i = *((entity_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
