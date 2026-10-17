// Original IGI.EXE function: MenuTextConditional_LoadParameters (VA 0x004207E0; static CFG gate PASS, CFG score 1.000).
#include "MenuTextConditional_LoadParameters.h"
int32_t MenuTextConditional_LoadParameters(long double context , void* param_2)

{
    if (Script_FormatString_6(param_2 + 0x16c))
    {
        Script_SpawnNewTask_7(param_2 + 0x16c, param_2);
        int32_t item_8_1 = context;
        *(param_2 + 0x210) = item_8_1;
        *(param_2 + 0x4c) = item_8_1;
    }

    if (*(param_2 + 0x11c) && *(param_2 + 0x210))
    {
        Menu_UpdateLanguage_14(param_2, *(param_2 + 0x20), *(param_2 + 0x24), *(param_2 + 0x28),
            *(param_2 + 0x2c), nullptr, nullptr);

        if (*(param_2 + 0x49) && !*(param_2 + 0x48))
            menu_high(*(param_2 + 0x44), param_2);

        if ((*(param_2 + 0x4b) || *(param_2 + 0x50) == 0xfffffff9) && Script_FormatString_6(param_2 + 0x11c))
        {
            Script_SpawnNewTask_7(param_2 + 0x11c, param_2);
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
            char* item_1c_2;

            if (!*(param_2 + 0xd4))
                item_1c_2 = "menu_sel";
            else
                item_1c_2 = param_2 + 0xd4;

            SoundSys_AttachLipsync_8(item_1c_2, 0, 0);
        }
    }

    *(param_2 + 0x50) = 0;
    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(param_2);
}
