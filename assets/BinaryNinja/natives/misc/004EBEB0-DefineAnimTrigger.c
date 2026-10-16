#include "DefineAnimTrigger.h"
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
    float dstD = a2;
    int32_t valA = Script_GetArg(dstD, 0);
    int32_t objC = g_a5ef84;
    int32_t v_2c = 1;
    float v_30 = dstD;
    int32_t srcS1 = objC * 0xc;
    *(objC * 0xc + &g_a5ec80) = valA;
    *(srcS1 + 0xa5ec84) = Script_GetArg(v_30, v_2c);
    int32_t valA2 = 0;
    valA2 = g_54db81;
    int32_t objC1 = 0;
    *(srcS1 + &g_a5ec88) = 0;
    objC1 = *(srcS1 + 0xa5ec84);
    int32_t valA6 = *(((valA2 * 0x180 + objC1) << 2) + &g_a96ae0);
    void* v_18;

    if (valA6)
    {
        valA6(0, &a2);
        int32_t v_2c_1 = 4;
        v_30 = a2;
        void* valA8 = Mem_Alloc(v_30, v_2c_1);
        int32_t objC2 = g_a5ef84;
        v_18 = valA8;
        int32_t tmpD1 = 0;
        float v_14_1 = dstD;
        int32_t v_10_1 = 2;
        int32_t objC4 = objC2 * 0xc;
        *(objC4 + &g_a5ec88) = valA8;
        tmpD1 = *(objC4 + 0xa5ec84);
        int32_t valA9 = 0;
        valA9 = g_54db82;
        (*(((tmpD1 + valA9 * 0x180) << 2) + &g_a96ae0))(0, &v_18, v_30);
    }

    g_a5ef84 += 1;
    v_18 = 1;
    int32_t v_10_2 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
