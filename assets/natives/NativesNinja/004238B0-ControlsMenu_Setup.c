#include "004238B0-ControlsMenu_Setup.h"
/* 0x004238b0 ControlsMenu_Setup full linked: callers=0 callees=5 */
int32_t ControlsMenu_Setup(int32_t a1)

{
    int32_t esi = a1;
    long double x87_r7_1 = (Menu_FormatScreen_4(*(esi + 0x44)) - 8) * 0.125f;
    long double temp0 = 0f;
    x87_r7_1 - temp0;

    a1 = *(&((x87_r7_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : x87_r7_1;

    (*(((Menu_PlayMusic_13() + sub_4e7530() * 0x180) << 2) + &g_a96ae0))(esi);
    Menu_HandleInput_12(esi, a1);
    return Menu_RequestScreen_13(esi, a1);
}
