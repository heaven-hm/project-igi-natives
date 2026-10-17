// Original IGI.EXE function: Define_GameMaterial (VA 0x00407F50; static CFG gate PASS, CFG score 0.980).
#include "Define_GameMaterial.h"
int32_t Define_GameMaterial(long double a1 @ fp0, long double a2 @ fp1, long double a3 @ fp2, long double a4 @ fp3, int32_t a5, float a6 @ 0xc)

// Sig: void Define_GameMaterial(...)
// Note: Defines a GameMaterial entry during a game-material definition block
// (855-byte parser function). Call only from gamematerial .qsc definition
// contexts; arg layout follows the Define block grammar (registration argc
// unknown).
{
    float dstD = a6;
    char* v_28 = 0x20;
    int32_t valA1 = g_53851c * 0x268;
    *(valA1 + &g_569474) = 1;
    int32_t v_30 = 0;
    Sys_ResolveSymbol_23(dstD, v_30, valA1 + 0x569230, v_28);
    Profile_ValueSet(dstD, 1.40129846e-45f);
    *(g_53851c * 0x268 + &g_569250) = a1;
    Profile_ValueSet(dstD, 2.80259693e-45f);
    *(g_53851c * 0x268 + &g_569254) = a2;
    Profile_ValueSet(dstD, 4.20389539e-45f);
    *(g_53851c * 0x268 + &g_569258) = a3;
    int32_t srcS = 6;
    *(g_53851c * 0x268 + &g_56925c) = Script_GetArg(dstD, 4);
    Profile_ValueSet(dstD, 7.00649232e-45f);
    int32_t valA10 = g_53851c;
    int32_t flagP = 0;
    *(valA10 * 0x268 + &g_569260) = a4;

    while (true)
    {
        int32_t objC7 = srcS;
        char* v_28_1 = 0x20;
        srcS += 1;
        v_30 = objC7;
        Sys_ResolveSymbol_23(dstD, v_30, flagP + valA10 * 0x268 + 0x569264, v_28_1);
        flagP += 0x20;

        if (srcS - 6 >= 6)
            break;

        valA10 = g_53851c;
    }

    int32_t valA13 = g_53851c;
    char* v_28_2 = 0x20;
    v_30 = srcS;
    Sys_ResolveSymbol_23(dstD, v_30, valA13 * 0x268 + &g_569324, v_28_2);
    int32_t srcS2 = srcS + 2;
    Sys_ResolveSymbol_23(dstD, srcS + 1, g_53851c * 0x268 + &g_569344, 0x20);

    for (int32_t i = 0; i < 0xc0; i += 0x20)
    {
        int32_t valA17 = g_53851c;
        int32_t objC10 = srcS2;
        char* v_28_3 = 0x20;
        srcS2 += 1;
        v_30 = objC10;
        Sys_ResolveSymbol_23(dstD, v_30, i + valA17 * 0x268 + 0x569364, v_28_3);
    }

    for (int32_t i_1 = 0; i_1 < 0x40; i_1 += 0x20)
    {
        int32_t valA19 = g_53851c;
        int32_t objC11 = srcS2;
        char* v_28_4 = 0x20;
        srcS2 += 1;
        v_30 = objC11;
        Sys_ResolveSymbol_23(dstD, v_30, i_1 + valA19 * 0x268 + 0x569424, v_28_4);
    }

    int32_t srcS3 = srcS2 + 1;
    int32_t flagP2 = g_53851c * 0x268;
    *(flagP2 + 0x569464) = Script_GetArg(dstD, srcS2);
    uint32_t valA24 = *g_538518;
    int32_t objC13 = 0;
    *(flagP2 + 0x569468) = 0;
    objC13 = *(flagP2 + 0x569464);
    int32_t valA28 = *(((valA24 * 0x180 + objC13) << 2) + &g_a96ae0);
    void* v_18;

    if (valA28)
    {
        valA28(0, &a6);
        float valA29 = a6;
        v_30 = 4;
        void* valA30 = Mem_Alloc(valA29, v_30);
        int32_t objC14 = g_53851c;
        v_18 = valA30;
        float v_14_1 = dstD;
        int32_t v_10_1 = srcS3;
        int32_t objC16 = objC14 * 0x268;
        *(objC16 + 0x569468) = valA30;
        int32_t valA31 = 0;
        valA31 = *(objC16 + 0x569464);
        int32_t valA32 = 0;
        valA32 = g_538519;
        (*(((valA31 + valA32 * 0x180) << 2) + &g_a96ae0))(0, &v_18);
        int32_t v_c;
        srcS3 += v_c;
    }

    int32_t flagP4 = g_53851c * 0x268;
    *(flagP4 + 0x56946c) = Script_GetArg(dstD, srcS3);
    uint32_t valA37 = *g_538518;
    int32_t objC20 = 0;
    *(flagP4 + &g_569470) = 0;
    objC20 = *(flagP4 + 0x56946c);
    int32_t valA41 = *(((valA37 * 0x180 + objC20) << 2) + &g_a96ae0);

    if (valA41)
    {
        valA41(0, &a6);
        float valA42 = a6;
        v_30 = 4;
        void* valA43 = Mem_Alloc(valA42, v_30);
        int32_t objC21 = g_53851c;
        v_18 = valA43;
        float v_14_2 = dstD;
        int32_t objC23 = objC21 * 0x268;
        *(objC23 + &g_569470) = valA43;
        int32_t valA44 = 0;
        valA44 = *(objC23 + 0x56946c);
        int32_t v_10_2 = srcS3 + 1;
        int32_t valA45 = 0;
        valA45 = g_538519;
        (*(((valA44 + valA45 * 0x180) << 2) + &g_a96ae0))(0, &v_18);
    }

    v_18 = 1;
    int32_t v_10_3 = 0;
    int32_t v_c_1 = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a5, &v_18, 0x18);
    return a5;
}
