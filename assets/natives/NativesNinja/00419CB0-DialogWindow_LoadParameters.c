#include "00419CB0-DialogWindow_LoadParameters.h"
/* 0x00419cb0 DialogWindow_LoadParameters full linked: callers=0 callees=4 */
int32_t DialogWindow_LoadParameters(int32_t a1)

{
    int32_t esi = a1;
    long double x87_r7_1 = Menu_FormatScreen_4(*(esi + 0x44)) * 0.125f;
    long double temp0 = 1f;
    x87_r7_1 - temp0;

    a1 = !(*(&((x87_r7_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0x3f800000 : x87_r7_1;

    (*(((Menu_PlayMusic_13() + sub_4e7530() * 0x180) << 2) + &g_a96ae0))(esi);
    return Menu_FormatScreen_6(esi, a1);
}
