#include "00421600-MenuButton_LoadParameters.h"
/* 0x00421600 MenuButton_LoadParameters full linked: callers=0 callees=6 */
int32_t MenuButton_LoadParameters(int32_t a1)

{
    int32_t esi = a1;
    long double x87_r7_1 = (Menu_FormatScreen_4(*(esi + 0x44)) - 8) * 0.125f;
    long double temp0 = 0f;
    x87_r7_1 - temp0;

    a1 = *(&((x87_r7_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : x87_r7_1;

    (*(((Menu_PlayMusic_13() + sub_4e7530() * 0x180) << 2) + &g_a96ae0))(esi);
    int32_t result = *(esi + 0x94);

    if (!result)
        return result;

    int32_t ecx_3 = (g_c28b48 >> 1) + *(esi + 0x24) - 0xf0;
    int32_t var_30_1 = ecx_3;
    int32_t var_34_1 = ecx_3;
    return sub_4b50b0(*(esi + 0x94), (g_c28b44 >> 1) + *(esi + 0x20) - 0x140, ecx_3, 128f, 128f,
        128f, a1, 0x3f800000, 0, 0x80000, 0);
}
