#include "0047A540-Weapon_ReloadClip_6.h"
/* 0x0047a540 Weapon_ReloadClip_6 full linked: callers=1 callees=13 */
int32_t sub_47a540(int32_t* a1, float a2)

{
    int32_t* esi = a1;
    int32_t ebp = 0;
    int32_t* ebx = esi[0x4b];
    a1 = nullptr;
    int32_t eax = g_c28b44;
    int32_t ecx = g_c28b48;
    int32_t edx = esi[0x51];
    void* edi = esi[5];
    uint32_t eax_2 = sub_47cdc0();
    int32_t ecx_1 = 0;
    ecx_1 = *(edi + 0x1c);
    int32_t eax_6 = *(((eax_2 * 0x180 + ecx_1) << 2) + &g_a96ae0);

    if (eax_6)
        eax_6(edi, &a1);

    int32_t* eax_8 = sub_47cee0(a1, *ebx);

    if (eax_8)
        ebp = eax_8[1];

    int32_t ebx_1 = esi[0x67] + (6 - edx) * 0xa;

    if (ebx_1 < 0)
        ebx_1 = 0;

    int32_t var_60_3 = ebp;
    void var_10;
    Game_DataSymbolLoad(&var_10, "%-4d");
    float esi_1 = a2;
    sub_4b6e90(*(esi_1 + 0x4e0), &var_10);
    long double x87_r7_2 = eax * 0.984375f - 4f;
    a2 = x87_r7_2;
    long double x87_r7_6 = ecx * 0.895833313f + 4f;
    float var_3c = x87_r7_6;
    float var_40_2 = x87_r7_2 - 8f - sub_4b6ce0(esi_1 + 0x104) - sub_4b7df0(*(esi_1 + 0x4e0));
    float var_34 = sub_4b6ce0(esi_1 + 0x104);
    long double x87_r7_13 = sub_4b6d00(esi_1 + 0x104) + var_3c;
    long double x87_r6_1 = var_34 + var_40_2;
    Qsprite_Register4Az(esi_1 + 0x104, var_40_2, var_3c, var_40_2, x87_r7_13, x87_r6_1, var_3c,
        x87_r6_1, x87_r7_13, 128f, 128f, 128f, 0, 0, ebx_1, 0, 0);
    *(*(esi_1 + 0x4e0) + 4) = a2 - sub_4b7df0(*(esi_1 + 0x4e0));
    *(*(esi_1 + 0x4e0) + 8) = x87_r7_6;
    return sub_4b6f50(*(esi_1 + 0x4e0));
}
