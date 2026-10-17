// Original IGI.EXE function: MenuText_LoadParameters (VA 0x00421070; static CFG gate PASS, CFG score 1.000).
#include "MenuText_LoadParameters.h"
int32_t MenuText_LoadParameters(void* context)

{
    if (*(context + 0x11c))
    {
        Menu_UpdateLanguage_14(context, *(context + 0x20), *(context + 0x24), *(context + 0x28),
            *(context + 0x2c), nullptr, nullptr);

        if (*(context + 0x49) && !*(context + 0x48))
            menu_high(*(context + 0x44), context);

        if ((*(context + 0x4b) || *(context + 0x50) == 0xfffffff9) && Script_FormatString_6(context + 0x11c))
        {
            Script_SpawnNewTask_7(context + 0x11c, context);
            char* item_14_2;

            if (!*(context + 0xd4))
                item_14_2 = "menu_sel";
            else
                item_14_2 = context + 0xd4;

            SoundSys_AttachLipsync_8(item_14_2, 0, 0);
        }
    }

    *(context + 0x50) = 0;
    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(context);
}
