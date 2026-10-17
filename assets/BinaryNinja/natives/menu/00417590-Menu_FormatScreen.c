// Original IGI.EXE function: Menu_FormatScreen (VA 0x00417590; static CFG gate PASS, CFG score 1.000).
#include "Menu_FormatScreen.h"
int32_t Menu_FormatScreen(void* context, int32_t param_2)

{
    if (!param_2)
    {
        void* source_val = *(context + 0x30);
        int32_t data_10 = Menu_LeaveMenus_14();
        int32_t data_11 = 0;
        data_11 = *(source_val + 0x1c);
        int32_t data_12 = *(((data_10 * 0x180 + data_11) << 2) + &g_a96ae0);

        if (data_12)
            data_12(source_val);
    }
    else
    {
        int32_t* i = *(context + 8);

        if (*i && i)
        {
            int32_t entity_val = g_afa7e0;

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

                *((entity_val << 2) + &g_afa6e0) = data_3;
                g_afa7e0 = entity_val + 1;
                int32_t data_4 = Menu_LeaveMenus_14();
                int32_t entity_2 = 0;
                entity_2 = i[7];
                int32_t data_8 = *(((data_4 * 0x180 + entity_2) << 2) + &g_a96ae0);

                if (data_8)
                    data_8(i);

                entity_val = g_afa7e0 - 1;
                g_afa7e0 = entity_val;
                i = *((entity_val << 2) + &g_afa6e0);
            } while (i);

            void* item_10 = context;
            return Menu_PlayMusic(*(context + 0x30));
        }
    }

    void* item_10_1 = context;
    return Menu_PlayMusic(*(context + 0x30));
}
