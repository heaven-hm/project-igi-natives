// Original IGI.EXE function: MenuText_LoadParameters (VA 0x00421070; static CFG gate PASS, CFG score 1.000).
#include "MenuText_LoadParameters.h"
int32_t MenuText_LoadParameters(void* a1)

{
    if (*(a1 + 0x11c))
    {
        Menu_UpdateLanguage_14(a1, *(a1 + 0x20), *(a1 + 0x24), *(a1 + 0x28),
            *(a1 + 0x2c), nullptr, nullptr);

        if (*(a1 + 0x49) && !*(a1 + 0x48))
            menu_high(*(a1 + 0x44), a1);

        if ((*(a1 + 0x4b) || *(a1 + 0x50) == 0xfffffff9) && Script_FormatString_6(a1 + 0x11c))
        {
            Script_SpawnNewTask_7(a1 + 0x11c, a1);
            char* v_14_2;

            if (!*(a1 + 0xd4))
                v_14_2 = "menu_sel";
            else
                v_14_2 = a1 + 0xd4;

            SoundSys_AttachLipsync_8(v_14_2, 0, 0);
        }
    }

    *(a1 + 0x50) = 0;
    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(a1);
}
