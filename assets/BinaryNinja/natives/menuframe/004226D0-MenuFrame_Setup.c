// Original IGI.EXE function: MenuFrame_Setup (VA 0x004226D0; static CFG gate PASS, CFG score 1.000).
#include "MenuFrame_Setup.h"
int32_t MenuFrame_Setup(void* context)

{
    int32_t context_val = (g_c28b44 >> 1) + *(context + 0x20) - 0x140;
    void* entity_1 = *(context + 0x28);
    int32_t dest_val = (g_c28b48 >> 1) + *(context + 0x24) - 0xf0;
    int32_t temp_2 = *(context + 0x2c);
    (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(context);
    int32_t data_8 = Menu_PlayMusic_11(context, context_val, dest_val, entity_1, 0.0f, 1, 2, 0);
    int32_t dest_1 = dest_val + data_8;
    int32_t flagP5 = temp_2
        - (Menu_PlayMusic_11(context, context_val, dest_val + temp_2, entity_1, 8.40779079e-45.0f, 5, 4, 1) + data_8);
    Menu_DrawWidget_11(context, context_val, dest_1, flagP5, 7, 0);
    return Menu_DrawWidget_11(context, entity_1 + context_val, dest_1, flagP5, 3, 1);
}
