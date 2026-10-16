#include "0047A360-Weapon_FireBullet_6.h"
/* 0x0047a360 Weapon_FireBullet_6 full linked: callers=1 callees=11 */
int32_t sub_47a360(void* a1, float a2)

{
    void* edi = a1;
    int32_t* eax = *(edi + 0x128);
    int32_t* ebx = *(edi + 0x12c);
    int32_t* var_24 = nullptr;
    a1 = nullptr;
    int32_t ecx = g_c28b44;
    int32_t edx = g_c28b48;
    int32_t ebp = *(edi + 0x144);
    void* esi = *(edi + 0x14);
    uint32_t eax_2 = sub_47cdc0();
    int32_t ecx_1 = 0;
    ecx_1 = *(esi + 0x1c);
    int32_t eax_6 = *(((eax_2 * 0x180 + ecx_1) << 2) + &g_a96ae0);

    if (eax_6)
        eax_6(esi, &var_24);

    int32_t* eax_8 = sub_47cee0(var_24, *ebx);

    if (eax_8)
        a1 = eax_8[1];

    int32_t temp0 = ebp * 0x3c / eax[0x192];
    eax[0x192];
    int32_t ebp_1 = 0x3c - temp0;

    if (0x3c - temp0 < 0)
        ebp_1 = 0;

    float esi_1 = a2;
    int32_t* ebx_1;

    if (*eax != 0xc)
        ebx_1 = esi_1 + 0xec;
    else
    {
        ebp_1 = 0;
        ebx_1 = esi_1 + 0xd4;

        if (!ebp)
            ebx_1 = nullptr;

        if (*(edi + 0x144))
            a1 += 1;
    }

    void* var_38_3 = a1;
    void var_10;
    Game_DataSymbolLoad(&var_10, "%-4d");
    sub_4b6e90(*(esi_1 + 0x4e0), &var_10);
    a2 = ecx * 0.984375f - 4f;
    *(*(esi_1 + 0x4e0) + 4) = a2 - sub_4b7df0(*(esi_1 + 0x4e0));
    long double x87_r7_7 = edx * 0.895833313f + 4f;
    float var_14_1 = x87_r7_7;
    *(*(esi_1 + 0x4e0) + 8) = x87_r7_7;
    int32_t result = sub_4b6f50(*(esi_1 + 0x4e0));

    if (!ebx_1)
        return result;

    return sub_4b4e00(ebx_1, a2 - 8f - sub_4b6ce0(ebx_1) - sub_4b7df0(*(esi_1 + 0x4e0)),
        var_14_1, 128f, 128f, 128f, ebp_1, 0, 0);
}
