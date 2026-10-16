#include "00484F60-Define_Mission.h"
/* 0x00484f60 Define_Mission full linked: callers=0 callees=14 */
int32_t Define_Mission(int32_t a1, float a2 @ 0xc)

// Sig: void Define_Mission(...)
// Note: Defines a MISSION entry during mission-list parsing (480-byte parser).
// Called by the engine's mission definition grammar; do NOT call from gameplay
// scripts.
{
    int32_t eax = sub_4b8a20(a2, 0);
    *(g_5c89fc * 0x4a8 + &g_5c1590) = eax;

    if (!sub_485170(eax))
    {
        int32_t eax_4 = g_5c89fc;
        char* var_24_2 = 0x20;
        int32_t var_2c = 1;
        float var_30 = a2;
        sub_4b8a80(var_30, var_2c, eax_4 * 0x4a8 + &g_5c1594, var_24_2);
        sub_4b8a80(a2, 2, g_5c89fc * 0x4a8 + &g_5c15b4, 0x100);
        sub_4b8a80(a2, 3, g_5c89fc * 0x4a8 + &g_5c16b4, 0x20);
        int32_t edi_1 = g_5c89fc * 0x4a8;
        *(edi_1 + 0x5c1a34) = sub_4b8a20(a2, 4);
        sub_4b8a80(a2, 5, edi_1 + 0x5c16d4, 0x100);
        int32_t eax_12 = g_5c89fc;
        char* var_24_3 = 0x100;
        int32_t var_2c_1 = 6;
        var_30 = a2;
        sub_4b8a80(var_30, var_2c_1, eax_12 * 0x4a8 + &g_5c17d4, var_24_3);
        sub_4b8a80(a2, 7, g_5c89fc * 0x4a8 + &g_5c18d4, 0x100);
        sub_4b8a80(a2, 8, g_5c89fc * 0x4a8 + &g_5c19d4, 0x20);
        sub_4b8a80(a2, 9, g_5c89fc * 0x4a8 + &g_5c19f4, 0x20);
        int32_t eax_20 = g_5c89fc;
        char* var_24_4 = 0x20;
        int32_t var_2c_2 = 0xa;
        var_30 = a2;
        sub_4b8a80(var_30, var_2c_2, eax_20 * 0x4a8 + &g_5c1a14, var_24_4);
        g_5c89fc += 1;
        int32_t var_18 = 1;
        int32_t var_10 = 0;
        int32_t var_c = 0x3ff00000;
        char* var_8 = &g_567c74;
        memcpy(a1, &var_18, 0x18);
        return a1;
    }

    int32_t __saved_edi_1 = *(g_5c89fc * 0x4a8 + &g_5c1590);
    Error_Show("Mission ID %d not unique");

    while (true)
        /* nop */
}
