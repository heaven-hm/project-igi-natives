#include "004207E0-MenuTextConditional_LoadParameters.h"
/* 0x004207e0 MenuTextConditional_LoadParameters full linked: callers=0 callees=8 */
int32_t MenuTextConditional_LoadParameters(int80_t a1 @ st0, void* a2)

{
    if (sub_4f16c0(a2 + 0x16c))
    {
        sub_4f16e0(a2 + 0x16c, a2);
        int32_t var_8_1 = a1;
        *(a2 + 0x210) = var_8_1;
        *(a2 + 0x4c) = var_8_1;
    }

    if (*(a2 + 0x11c) && *(a2 + 0x210))
    {
        Menu_UpdateLanguage_14(a2, *(a2 + 0x20), *(a2 + 0x24), *(a2 + 0x28),
            *(a2 + 0x2c), nullptr, nullptr);

        if (*(a2 + 0x49) && !*(a2 + 0x48))
            menu_high(*(a2 + 0x44), a2);

        if ((*(a2 + 0x4b) || *(a2 + 0x50) == 0xfffffff9) && sub_4f16c0(a2 + 0x11c))
        {
            sub_4f16e0(a2 + 0x11c, a2);
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
            char* var_1c_2;

            if (!*(a2 + 0xd4))
                var_1c_2 = "menu_sel";
            else
                var_1c_2 = a2 + 0xd4;

            sub_4e7180(var_1c_2, 0, 0);
        }
    }

    *(a2 + 0x50) = 0;
    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(a2);
}
