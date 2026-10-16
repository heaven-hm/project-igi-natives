#include "004EBEB0-DefineAnimTrigger.h"
/* 0x004ebeb0 DefineAnimTrigger full linked: callers=0 callees=4 */
int32_t DefineAnimTrigger(int32_t a1, float a2 @ 0xc)

// Sig: unknown DefineAnimTrigger(unknown param1, unknown param2)
// Note: Registered at 0x4EBEA2 via registrar 0x4B8890 (push 0x4EBEB0 +
// 'DefineAnimTrigger'), argc bounds (0, -1). Config parser; corroborates
// cataloged AnimTrigger_ParseConfigFile family.  Verified: r2 forced-analysis
// confirmed exact start (size 264); P3 byte-level name<->address binding at
// registrar callsite 0x4EBEA2 via 0x4B8890; P6 SHA-256(first 32 code
// bytes)=8d8596b3b0925dc5ff62e61171fc68c6e9c092c1c519e972629a790081ddd636;
// re-agent reverser/checker loop ran on this native (C decompilation pending
// ARM64 native port).
{
    float edi = a2;
    int32_t eax = sub_4b8a20(edi, 0);
    int32_t ecx = g_a5ef84;
    int32_t var_2c = 1;
    float var_30 = edi;
    int32_t esi_1 = ecx * 0xc;
    *(ecx * 0xc + &g_a5ec80) = eax;
    *(esi_1 + 0xa5ec84) = sub_4b8a20(var_30, var_2c);
    int32_t eax_2 = 0;
    eax_2 = g_54db81;
    int32_t ecx_1 = 0;
    *(esi_1 + &g_a5ec88) = 0;
    ecx_1 = *(esi_1 + 0xa5ec84);
    int32_t eax_6 = *(((eax_2 * 0x180 + ecx_1) << 2) + &g_a96ae0);
    void* var_18;

    if (eax_6)
    {
        eax_6(0, &a2);
        int32_t var_2c_1 = 4;
        var_30 = a2;
        void* eax_8 = Mem_Alloc(var_30, var_2c_1);
        int32_t ecx_2 = g_a5ef84;
        var_18 = eax_8;
        int32_t edx_1 = 0;
        float var_14_1 = edi;
        int32_t var_10_1 = 2;
        int32_t ecx_4 = ecx_2 * 0xc;
        *(ecx_4 + &g_a5ec88) = eax_8;
        edx_1 = *(ecx_4 + 0xa5ec84);
        int32_t eax_9 = 0;
        eax_9 = g_54db82;
        (*(((edx_1 + eax_9 * 0x180) << 2) + &g_a96ae0))(0, &var_18, var_30);
    }

    g_a5ef84 += 1;
    var_18 = 1;
    int32_t var_10_2 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
