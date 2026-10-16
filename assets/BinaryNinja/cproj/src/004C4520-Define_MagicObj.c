#include "gi_platform.h"
#include "004C4520-Define_MagicObj.h"
int32_t Define_MagicObj(int32_t a1, float a2 )

// Sig: void Define_MagicObj(...)
// Note: Defines a MAGIC OBJECT type during magicobj definition parsing (pairs
// with the MAGICOBJ\ folder data). Parser-context only.
{
    int32_t valA1 = g_a4433c * 0x28;
    float dstD = a2;
    *(valA1 + &g_b97e24) = 0;
    char* v_24 = 0x10;
    int32_t v_2c = 0;
    float v_30 = dstD;
    Sys_ResolveSymbol_23(v_30, v_2c, valA1 + &g_b97e00, v_24);
    Sys_ResolveSymbol_23(dstD, 1, g_a4433c * 0x28 + &g_b97e10, 0x10);
    int32_t srcS1 = g_a4433c * 0x28;
    *(srcS1 + 0xb97e20) = Script_GetArg(dstD, 2);
    int32_t valA6 = 0;
    valA6 = g_547f3d;
    int32_t objC1 = 0;
    *(srcS1 + &g_b97e24) = 0;
    objC1 = *(srcS1 + 0xb97e20);
    int32_t valA10 = *(((valA6 * 0x180 + objC1) << 2) + &g_a96ae0);
    void* v_18;

    if (valA10)
    {
        valA10(0, &a2);
        int32_t v_2c_1 = 4;
        v_30 = a2;
        void* valA12 = Mem_Alloc(v_30, v_2c_1);
        int32_t objC2 = g_a4433c;
        v_18 = valA12;
        int32_t tmpD1 = 0;
        float v_14_1 = dstD;
        int32_t v_10_1 = 3;
        int32_t objC4 = objC2 * 0x28;
        *(objC4 + &g_b97e24) = valA12;
        tmpD1 = *(objC4 + 0xb97e20);
        ((int(*)())(uintptr_t)(*(((tmpD1 + *g_547f3c * 0x180) << 2) + &g_a96ae0)))(0, &v_18, v_30);
    }

    g_a4433c += 1;
    v_18 = 1;
    int32_t v_10_2 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
