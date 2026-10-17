// Original IGI.EXE function: Rotor_OnEvent (VA 0x0042D1D0; static CFG gate PASS, CFG score 0.905).
#include "Rotor_OnEvent.h"
int32_t Rotor_OnEvent(void* context)

{
    void* item_50 = 0x24;
    void* data_val = Display_CloseDevice_14(item_50);
    *(data_val + 4) = g_57bd14;
    *(data_val + 0xc) = context;
    *(data_val + 0x14) = Render_SkinBones_13(data_val + 0x18);
    int32_t* item_58 = data_val + 0x1c;
    Render_ComputeNormals_12(data_val + 0x20, item_58);
    int32_t result = Display_SyncVSync_14(data_val);
    void item_40;
    memcpy(&item_40, context + 0x20, 0x18);
    void item_28;
    memcpy(&item_28, context + 0x70, 0x28);
    int32_t* i = *(context + 8);

    if (*i && i)
    {
        int32_t entity_1 = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i;
            void* data_7;

            if (!temp_1)
                data_7 = nullptr;
            else
            {
                int32_t data_4 = *temp_1;
                int32_t data_5 = -(data_4);
                data_7 = (data_5 - data_5) & temp_1;
            }

            *((entity_1 << 2) + &g_afa6e0) = data_7;
            g_afa7e0 = entity_1 + 1;
            uint32_t data_9 = DynObj_FindSymbol_6();
            int32_t temp_2 = 0;
            temp_2 = i[7];
            result = *(((data_9 * 0x180 + temp_2) << 2) + &g_a96ae0);

            if (result)
            {
                item_50 = &item_40;
                result = result(i, item_50);
            }

            entity_1 = g_afa7e0 - 1;
            g_afa7e0 = entity_1;
            i = *((entity_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
