#include "0047A750-Weapon_ComputeAccuracy_6.h"
/* 0x0047a750 Weapon_ComputeAccuracy_6 full linked: callers=1 callees=11 */
int32_t sub_47a750(int32_t a1, float a2)

{
    int32_t edi = 0;
    int32_t* ebx = *(a1 + 0x12c);
    int32_t* var_1c = nullptr;
    int32_t eax = g_c28b44;
    int32_t ecx = g_c28b48;
    int32_t ebp = *(a1 + 0x144);
    void* esi_1 = *(a1 + 0x14);
    uint32_t eax_2 = sub_47cdc0();
    int32_t eax_3 = 0;
    eax_3 = *(esi_1 + 0x1c);
    int32_t eax_4 = *(((eax_2 * 0x180 + eax_3) << 2) + &g_a96ae0);

    if (eax_4)
        eax_4(esi_1, &var_1c);

    int32_t* eax_6 = sub_47cee0(var_1c, *ebx);

    if (eax_6)
        edi = eax_6[1];

    int32_t ebx_1 = 7 - ebp;

    if (7 - ebp < 0)
        ebx_1 = 0;

    int32_t var_30_3 = edi;
    void var_10;
    Game_DataSymbolLoad(&var_10, "%-4d");
    float esi_2 = a2;
    sub_4b6e90(*(esi_2 + 0x4e0), &var_10);
    a2 = eax * 0.984375f - 4f;
    float var_18_2 = ecx * 0.895833313f + 4f;
    sub_4b4e00(esi_2 + 0x11c, a2 - 8f - sub_4b6ce0(esi_2 + 0x11c) - sub_4b7df0(*(esi_2 + 0x4e0)),
        var_18_2, 128f, 128f, 128f, ebx_1, 0, 0);
    *(*(esi_2 + 0x4e0) + 4) = a2 - sub_4b7df0(*(esi_2 + 0x4e0));
    *(*(esi_2 + 0x4e0) + 8) = var_18_2;
    return sub_4b6f50(*(esi_2 + 0x4e0));
}
