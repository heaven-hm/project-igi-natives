// Original IGI.EXE function: Define_Mission (VA 0x00484F60; static CFG gate PASS, CFG score 0.976).
#include "Define_Mission.h"
int32_t Define_Mission(int32_t a1, float a2 @ 0xc)

// Sig: void Define_Mission(...)
// Note: Defines a MISSION entry during mission-list parsing (480-byte parser).
// Called by the engine's mission definition grammar; do NOT call from gameplay
// scripts.
{
    int32_t valA = Script_GetArg(a2, 0);
    *(g_5c89fc * 0x4a8 + &g_5c1590) = valA;

    if (!FX_ExplosionSpawn_6(valA))
    {
        int32_t valA4 = g_5c89fc;
        char* v_24_2 = 0x20;
        int32_t v_2c = 1;
        float v_30 = a2;
        Sys_ResolveSymbol_23(v_30, v_2c, valA4 * 0x4a8 + &g_5c1594, v_24_2);
        Sys_ResolveSymbol_23(a2, 2, g_5c89fc * 0x4a8 + &g_5c15b4, 0x100);
        Sys_ResolveSymbol_23(a2, 3, g_5c89fc * 0x4a8 + &g_5c16b4, 0x20);
        int32_t dstD1 = g_5c89fc * 0x4a8;
        *(dstD1 + 0x5c1a34) = Script_GetArg(a2, 4);
        Sys_ResolveSymbol_23(a2, 5, dstD1 + 0x5c16d4, 0x100);
        int32_t valA12 = g_5c89fc;
        char* v_24_3 = 0x100;
        int32_t v_2c_1 = 6;
        v_30 = a2;
        Sys_ResolveSymbol_23(v_30, v_2c_1, valA12 * 0x4a8 + &g_5c17d4, v_24_3);
        Sys_ResolveSymbol_23(a2, 7, g_5c89fc * 0x4a8 + &g_5c18d4, 0x100);
        Sys_ResolveSymbol_23(a2, 8, g_5c89fc * 0x4a8 + &g_5c19d4, 0x20);
        Sys_ResolveSymbol_23(a2, 9, g_5c89fc * 0x4a8 + &g_5c19f4, 0x20);
        int32_t valA20 = g_5c89fc;
        char* v_24_4 = 0x20;
        int32_t v_2c_2 = 0xa;
        v_30 = a2;
        Sys_ResolveSymbol_23(v_30, v_2c_2, valA20 * 0x4a8 + &g_5c1a14, v_24_4);
        g_5c89fc += 1;
        int32_t v_18 = 1;
        int32_t v_10 = 0;
        int32_t v_c = 0x3ff00000;
        char* v_8 = &g_567c74;
        memcpy(a1, &v_18, 0x18);
        return a1;
    }

    int32_t __saved_edi_1 = *(g_5c89fc * 0x4a8 + &g_5c1590);
    Error_Show("Mission ID %d not unique");

    while (true)
        /* nop */
}
