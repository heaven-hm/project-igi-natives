#include "00473620-GunM16A2_Setup.h"
/* 0x00473620 GunM16A2_Setup full linked: callers=0 callees=14 */
int32_t sub_473620(int32_t a1, float a2)

{
    int32_t* edi = a2;
    int32_t ebp = 0;
    int32_t* var_18 = nullptr;
    int32_t esi = *edi;
    (*(((sub_487190() * 0x180 + sub_477bf0()) << 2) + &g_a96ae0))(a1, edi);
    void* ebx_3 = *(a1 + 0x14);
    uint32_t eax_6 = sub_47cdc0();
    int32_t ecx = 0;
    ecx = *(ebx_3 + 0x1c);
    int32_t eax_10 = *(((eax_6 * 0x180 + ecx) << 2) + &g_a96ae0);

    if (eax_10)
        eax_10(ebx_3, &var_18);

    int32_t eax_11 = sub_47cda0("AMMO_ID_M203");
    int32_t* eax_13 = sub_47cee0(var_18, eax_11);

    if (eax_13)
        ebp = eax_13[1];

    float var_14;
    sub_47aab0(&a2, &var_14, a1, esi);
    int32_t var_3c = ebp;
    void var_10;
    Game_DataSymbolLoad(&var_10, "%-4d");
    sub_4b6e90(*(esi + 0x4e0), &var_10);
    long double x87_r7 = sub_4b7df0(*(esi + 0x4e0));
    long double x87_r7_1 = a2 - x87_r7;
    a2 = x87_r7_1;
    *(*(esi + 0x4e0) + 4) = x87_r7_1;
    *(*(esi + 0x4e0) + 8) = var_14;
    sub_4b6f50(*(esi + 0x4e0));
    a2 = a2 - 8f;
    int32_t eax_17 = sub_4b6ce0(esi + 0x14c);
    float edx_2 = var_14;
    a2 = a2 - eax_17;
    return sub_4b4e00(esi + 0x14c, a2, edx_2, 128f, 128f, 128f, 0, 0, 0);
}
