// Original IGI.EXE function: MenuManager_Update (VA 0x00418970; static CFG gate PASS, CFG score 1.000).
#include "MenuManager_Update.h"
int32_t MenuManager_Update(void* context)

{
    if (*(context + 0x30) && *(context + 0x28) != 9)
    {
        Display_ClearSurfaces_13(context + 0x266c, 1);

        if (*(context + 0x28) == 2)
        {
            void* dest_1 = *(context + 0x27c8);
            int32_t data_3 = StatusScreen_GetEvent();
            int32_t temp_1 = 0;
            temp_1 = *(dest_1 + 0x1c);
            (*(((data_3 * 0x180 + temp_1) << 2) + &g_a96ae0))(dest_1);
        }

        if (*(context + 0x34))
        {
            void* dest_2 = *(context + 0x34);
            *(context + 0xd0) = *(context + 0xcc);
            int32_t data_7 = StatusScreen_GetEvent();
            int32_t temp_2 = 0;
            temp_2 = *(dest_2 + 0x1c);
            (*(((data_7 * 0x180 + temp_2) << 2) + &g_a96ae0))(dest_2);
        }

        if (*(context + 0x30))
        {
            int32_t data_10 = *(context + 0x28);

            if (data_10 == 7 || data_10 == 8 || data_10 == 0xf)
                *(context + 0xd0) = 0x10;
            else
                *(context + 0xd0) = *(context + 0xcc);

            void* dest_3 = *(context + 0x30);
            int32_t data_12 = StatusScreen_GetEvent();
            int32_t temp_3 = 0;
            temp_3 = *(dest_3 + 0x1c);
            (*(((data_12 * 0x180 + temp_3) << 2) + &g_a96ae0))(dest_3);
        }
    }

    int32_t result = *(context + 0xc4);
    int32_t entity_10 = *(context + 0xcc);
    *(context + 0xc8) = result;
    *(context + 0xc4) = entity_10;
    return result;
}
