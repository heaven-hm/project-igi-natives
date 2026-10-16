#include "0047AAB0-Weapon_UpdateRecoil_6.h"
/* 0x0047aab0 Weapon_UpdateRecoil_6 full linked: callers=1 callees=8 */
int32_t sub_47aab0(float* a1, float* a2, int32_t a3, int32_t a4)

{
    int32_t esi = a3;
    int32_t edi = 0;
    int32_t* ebp = *(esi + 0x128);
    int32_t* ebx = *(esi + 0x12c);
    a3 = 0;
    int32_t eax = g_c28b44;
    int32_t ecx = g_c28b48;
    void* esi_1 = *(esi + 0x14);
    uint32_t eax_2 = sub_47cdc0();
    int32_t eax_3 = 0;
    eax_3 = *(esi_1 + 0x1c);
    int32_t eax_4 = *(((eax_2 * 0x180 + eax_3) << 2) + &g_a96ae0);

    if (eax_4)
        eax_4(esi_1, &a3);

    int32_t* eax_6 = sub_47cee0(a3, *ebx);

    if (eax_6)
        edi = eax_6[1];

    int32_t var_2c_3 = edi;
    void var_10;
    Game_DataSymbolLoad(&var_10, "%-4d");
    sub_4b6e90(*(a4 + 0x4e0), &var_10);
    void* eax_9 = a4 + 0x14c;

    if (*ebp != 0xc)
        eax_9 = a4 + 0xec;

    *a1 = eax * 0.984375f - 4f - 8f;
    *a2 = ecx * 0.895833313f + 4f;
    long double x87_r7_7 = sub_4b6ce0(eax_9);
    *a1 = *a1 - x87_r7_7;
    int32_t result = sub_4b7df0(*(a4 + 0x4e0));
    a3 = result;
    *a1 = *a1 - a3;
    return result;
}
