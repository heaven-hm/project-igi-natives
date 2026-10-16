#include "MenuTextConditional_LoadParameters.h"
int32_t MenuTextConditional_LoadParameters(int80_t a1 @ fp0, void* a2)

{
    if (Script_FormatString_6(a2 + 0x16c))
    {
        Script_SpawnNewTask_7(a2 + 0x16c, a2);
        int32_t v_8_1 = a1;
        *(a2 + 0x210) = v_8_1;
        *(a2 + 0x4c) = v_8_1;
    }

    if (*(a2 + 0x11c) && *(a2 + 0x210))
    {
        Menu_UpdateLanguage_14(a2, *(a2 + 0x20), *(a2 + 0x24), *(a2 + 0x28),
            *(a2 + 0x2c), nullptr, nullptr);

        if (*(a2 + 0x49) && !*(a2 + 0x48))
            menu_high(*(a2 + 0x44), a2);

        if ((*(a2 + 0x4b) || *(a2 + 0x50) == 0xfffffff9) && Script_FormatString_6(a2 + 0x11c))
        {
            Script_SpawnNewTask_7(a2 + 0x11c, a2);
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
            char* v_1c_2;

            if (!*(a2 + 0xd4))
                v_1c_2 = "menu_sel";
            else
                v_1c_2 = a2 + 0xd4;

            SoundSys_AttachLipsync_8(v_1c_2, 0, 0);
        }
    }

    *(a2 + 0x50) = 0;
    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(a2);
}
