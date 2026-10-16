#include "Define_AmmoType.h"
int32_t Define_AmmoType(long double a1 @ fp0, int32_t a2, float a3 @ 0xc)

// Sig: void Define_AmmoType(...)
// Note: Defines an AMMO TYPE inside an ammo definition block of a .qsc/.cfg
// script (515-byte parser body; igi.exe embeds str 'DefineAmmoType'). Args
// follow the Define-ammo grammar (name, damage, range, clip...) - not fully
// mapped, treat as parser-internal. Do NOT call outside its define block.
{
    int32_t valA = Script_GetArg(a3, 0);
    int32_t objC = g_5c10e4;
    char* v_ac = 0x80;
    void v_80;
    char* v_b0 = &v_80;
    *(objC * 0x168 + &g_5be3e0) = valA;
    Sys_ResolveSymbol_23(a3, 1, v_b0, v_ac);
    TaskType_Set(&v_80, *(g_5c10e4 * 0x168 + &g_5be3e0));
    Sys_ResolveSymbol_23(a3, 2, g_5c10e4 * 0x168 + &g_5be408, 0x20);
    Sys_ResolveSymbol_23(a3, 3, g_5c10e4 * 0x168 + &g_5be428, 0x100);
    int32_t valA10 = Script_GetArg(a3, 4);
    int32_t objC5 = g_5c10e4;
    float v_ac_1 = 7.00649232e-45f;
    v_b0 = a3;
    *(objC5 * 0x168 + &g_5be3e4) = valA10;
    Profile_ValueSet(v_b0, v_ac_1);
    *(g_5c10e4 * 0x168 + &g_5be404) = a1;
    *(g_5c10e4 * 0x168 + &g_5be3e8) = Script_GetArg(a3, 6);
    *(g_5c10e4 * 0x168 + &g_5be3ec) = Script_GetArg(a3, 7);
    *(g_5c10e4 * 0x168 + &g_5be3f0) = Script_GetArg(a3, 8);
    *(g_5c10e4 * 0x168 + &g_5be3f4) = Script_GetArg(a3, 9);
    *(g_5c10e4 * 0x168 + &g_5be3f8) = Script_GetArg(a3, 0xa);
    int32_t valA18 = Script_GetArg(a3, 0xb);
    int32_t objC21 = g_5c10e4;
    int32_t v_a4_2 = 0xc;
    *(objC21 * 0x168 + &g_5be3fc) = valA18;
    int32_t dstD1 = objC21 * 0x168;
    *(dstD1 + 0x5be400) = Script_GetArg(a3, v_a4_2);
    char* v_ac_2 = 0x10;
    v_b0 = dstD1 + 0x5be528;
    Sys_ResolveSymbol_23(a3, 0xd, v_b0, v_ac_2);
    Sys_ResolveSymbol_23(a3, 0xe, g_5c10e4 * 0x168 + &g_5be538, 0x10);
    g_5c10e4 += 1;
    int32_t v_98 = 1;
    int32_t v_90 = 0;
    int32_t v_8c = 0x3ff00000;
    char* v_88 = &g_567c74;
    memcpy(a2, &v_98, 0x18);
    return a2;
}
