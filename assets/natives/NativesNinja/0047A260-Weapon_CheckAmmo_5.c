#include "0047A260-Weapon_CheckAmmo_5.h"
/* 0x0047a260 Weapon_CheckAmmo_5 full linked: callers=1 callees=8 */
int32_t sub_47a260(int32_t* a1, int32_t a2)

{
    int32_t* esi = a1;
    int32_t ebx = 0;
    a1 = nullptr;
    int32_t* edi = esi[0x4b];
    int32_t eax = g_c28b44;
    int32_t ecx = g_c28b48;
    void* esi_1 = esi[5];
    uint32_t eax_2 = sub_47cdc0();
    int32_t eax_3 = 0;
    eax_3 = *(esi_1 + 0x1c);
    int32_t eax_4 = *(((eax_2 * 0x180 + eax_3) << 2) + &g_a96ae0);

    if (eax_4)
        eax_4(esi_1, &a1);

    int32_t* eax_6 = sub_47cee0(a1, *edi);

    if (eax_6)
        ebx = eax_6[1];

    int32_t var_28_3 = ebx;
    void var_10;
    Game_DataSymbolLoad(&var_10, "%-4d");
    sub_4b6e90(*(a2 + 0x4e0), &var_10);
    *(*(a2 + 0x4e0) + 4) = eax * 0.984375f - 4f - sub_4b7df0(*(a2 + 0x4e0));
    *(*(a2 + 0x4e0) + 8) = ecx * 0.895833313f + 4f;
    return sub_4b6f50(*(a2 + 0x4e0));
}
