// IGI native provenance: Elevator_OnEvent - 0x0043E1F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043E1F0-Elevator_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Elevator_OnEvent.h"
void* Elevator_OnEvent(float context)

{
    Vehicle_InitPlane_9(context);
    void* result = context + 0xf0;
    int32_t* i = *(context + 8);
    void* result_1 = result;
    void* item_4 = context + 0x70;

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
            uint32_t data_5 = DynObj_CreateMagicObject_6();
            int32_t data_6 = 0;
            data_6 = i[7];
            result = *(((data_5 * 0x180 + data_6) << 2) + &g_a96ae0);

            if (result)
                result = result(i, &result_1);

            entity_1 = g_afa7e0 - 1;
            g_afa7e0 = entity_1;
            i = *((entity_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
