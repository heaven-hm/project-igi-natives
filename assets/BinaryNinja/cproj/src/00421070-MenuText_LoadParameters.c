#include "gi_platform.h"
#include "00421070-MenuText_LoadParameters.h"
int32_t MenuText_LoadParameters(void* a1)

{
    if ((*(int32_t*)(uintptr_t)(a1 + 0x11c)))
    {
        Menu_UpdateLanguage_14(a1, (*(int32_t*)(uintptr_t)(a1 + 0x20)), (*(int32_t*)(uintptr_t)(a1 + 0x24)), (*(int32_t*)(uintptr_t)(a1 + 0x28)),
            (*(int32_t*)(uintptr_t)(a1 + 0x2c)), nullptr, nullptr);

        if ((*(int32_t*)(uintptr_t)(a1 + 0x49)) && !(*(int32_t*)(uintptr_t)(a1 + 0x48)))
            menu_high((*(int32_t*)(uintptr_t)(a1 + 0x44)), a1);

        if (((*(int32_t*)(uintptr_t)(a1 + 0x4b)) || (*(int32_t*)(uintptr_t)(a1 + 0x50)) == 0xfffffff9) && Script_FormatString_6(a1 + 0x11c))
        {
            Script_SpawnNewTask_7(a1 + 0x11c, a1);
            char* v_14_2;

            if (!(*(int32_t*)(uintptr_t)(a1 + 0xd4)))
                v_14_2 = "menu_sel";
            else
                v_14_2 = a1 + 0xd4;

            SoundSys_AttachLipsync_8(v_14_2, 0, 0);
        }
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x50)) = 0;
    return ((int(*)())(uintptr_t)(*((Menu_PlayMusic_13() << 2) + &g_a970e0)))(a1);
}
