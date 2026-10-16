#include "00421070-MenuText_LoadParameters.h"
/* 0x00421070 MenuText_LoadParameters full linked: callers=0 callees=6 */
int32_t MenuText_LoadParameters(void* a1)

{
    if (*(a1 + 0x11c))
    {
        Menu_UpdateLanguage_14(a1, *(a1 + 0x20), *(a1 + 0x24), *(a1 + 0x28),
            *(a1 + 0x2c), nullptr, nullptr);

        if (*(a1 + 0x49) && !*(a1 + 0x48))
            menu_high(*(a1 + 0x44), a1);

        if ((*(a1 + 0x4b) || *(a1 + 0x50) == 0xfffffff9) && sub_4f16c0(a1 + 0x11c))
        {
            sub_4f16e0(a1 + 0x11c, a1);
            char* var_14_2;

            if (!*(a1 + 0xd4))
                var_14_2 = "menu_sel";
            else
                var_14_2 = a1 + 0xd4;

            sub_4e7180(var_14_2, 0, 0);
        }
    }

    *(a1 + 0x50) = 0;
    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(a1);
}
