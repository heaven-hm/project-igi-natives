#include "0047CAD0-Define_AmmoType.h"
/* 0x0047cad0 Define_AmmoType full linked: callers=0 callees=17 */
int32_t Define_AmmoType(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: void Define_AmmoType(...)
// Note: Defines an AMMO TYPE inside an ammo definition block of a .qsc/.cfg
// script (515-byte parser body; igi.exe embeds str 'DefineAmmoType'). Args
// follow the Define-ammo grammar (name, damage, range, clip...) - not fully
// mapped, treat as parser-internal. Do NOT call outside its define block.
{
    int32_t eax = sub_4b8a20(a3, 0);
    int32_t ecx = g_5c10e4;
    char* var_ac = 0x80;
    void var_80;
    char* var_b0 = &var_80;
    *(ecx * 0x168 + &g_5be3e0) = eax;
    sub_4b8a80(a3, 1, var_b0, var_ac);
    TaskType_Set(&var_80, *(g_5c10e4 * 0x168 + &g_5be3e0));
    sub_4b8a80(a3, 2, g_5c10e4 * 0x168 + &g_5be408, 0x20);
    sub_4b8a80(a3, 3, g_5c10e4 * 0x168 + &g_5be428, 0x100);
    int32_t eax_10 = sub_4b8a20(a3, 4);
    int32_t ecx_5 = g_5c10e4;
    float var_ac_1 = 7.00649232e-45f;
    var_b0 = a3;
    *(ecx_5 * 0x168 + &g_5be3e4) = eax_10;
    Profile_ValueSet(var_b0, var_ac_1);
    *(g_5c10e4 * 0x168 + &g_5be404) = a1;
    *(g_5c10e4 * 0x168 + &g_5be3e8) = sub_4b8a20(a3, 6);
    *(g_5c10e4 * 0x168 + &g_5be3ec) = sub_4b8a20(a3, 7);
    *(g_5c10e4 * 0x168 + &g_5be3f0) = sub_4b8a20(a3, 8);
    *(g_5c10e4 * 0x168 + &g_5be3f4) = sub_4b8a20(a3, 9);
    *(g_5c10e4 * 0x168 + &g_5be3f8) = sub_4b8a20(a3, 0xa);
    int32_t eax_18 = sub_4b8a20(a3, 0xb);
    int32_t ecx_21 = g_5c10e4;
    int32_t var_a4_2 = 0xc;
    *(ecx_21 * 0x168 + &g_5be3fc) = eax_18;
    int32_t edi_1 = ecx_21 * 0x168;
    *(edi_1 + 0x5be400) = sub_4b8a20(a3, var_a4_2);
    char* var_ac_2 = 0x10;
    var_b0 = edi_1 + 0x5be528;
    sub_4b8a80(a3, 0xd, var_b0, var_ac_2);
    sub_4b8a80(a3, 0xe, g_5c10e4 * 0x168 + &g_5be538, 0x10);
    g_5c10e4 += 1;
    int32_t var_98 = 1;
    int32_t var_90 = 0;
    int32_t var_8c = 0x3ff00000;
    char* var_88 = &g_567c74;
    memcpy(a2, &var_98, 0x18);
    return a2;
}
