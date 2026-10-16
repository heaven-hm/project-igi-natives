#include "00407F50-Define_GameMaterial.h"
/* 0x00407f50 Define_GameMaterial full linked: callers=0 callees=16 */
int32_t Define_GameMaterial(long double a1 @ st0, long double a2 @ st1, long double a3 @ st2, long double a4 @ st3, int32_t a5, float a6 @ 0xc)

// Sig: void Define_GameMaterial(...)
// Note: Defines a GameMaterial entry during a game-material definition block
// (855-byte parser function). Call only from gamematerial .qsc definition
// contexts; arg layout follows the Define block grammar (registration argc
// unknown).
{
    float edi = a6;
    char* var_28 = 0x20;
    int32_t eax_1 = g_53851c * 0x268;
    *(eax_1 + &g_569474) = 1;
    int32_t var_30 = 0;
    sub_4b8a80(edi, var_30, eax_1 + 0x569230, var_28);
    Profile_ValueSet(edi, 1.40129846e-45f);
    *(g_53851c * 0x268 + &g_569250) = a1;
    Profile_ValueSet(edi, 2.80259693e-45f);
    *(g_53851c * 0x268 + &g_569254) = a2;
    Profile_ValueSet(edi, 4.20389539e-45f);
    *(g_53851c * 0x268 + &g_569258) = a3;
    int32_t esi = 6;
    *(g_53851c * 0x268 + &g_56925c) = sub_4b8a20(edi, 4);
    Profile_ValueSet(edi, 7.00649232e-45f);
    int32_t eax_10 = g_53851c;
    int32_t ebp = 0;
    *(eax_10 * 0x268 + &g_569260) = a4;

    while (true)
    {
        int32_t ecx_7 = esi;
        char* var_28_1 = 0x20;
        esi += 1;
        var_30 = ecx_7;
        sub_4b8a80(edi, var_30, ebp + eax_10 * 0x268 + 0x569264, var_28_1);
        ebp += 0x20;

        if (esi - 6 >= 6)
            break;

        eax_10 = g_53851c;
    }

    int32_t eax_13 = g_53851c;
    char* var_28_2 = 0x20;
    var_30 = esi;
    sub_4b8a80(edi, var_30, eax_13 * 0x268 + &g_569324, var_28_2);
    int32_t esi_2 = esi + 2;
    sub_4b8a80(edi, esi + 1, g_53851c * 0x268 + &g_569344, 0x20);

    for (int32_t i = 0; i < 0xc0; i += 0x20)
    {
        int32_t eax_17 = g_53851c;
        int32_t ecx_10 = esi_2;
        char* var_28_3 = 0x20;
        esi_2 += 1;
        var_30 = ecx_10;
        sub_4b8a80(edi, var_30, i + eax_17 * 0x268 + 0x569364, var_28_3);
    }

    for (int32_t i_1 = 0; i_1 < 0x40; i_1 += 0x20)
    {
        int32_t eax_19 = g_53851c;
        int32_t ecx_11 = esi_2;
        char* var_28_4 = 0x20;
        esi_2 += 1;
        var_30 = ecx_11;
        sub_4b8a80(edi, var_30, i_1 + eax_19 * 0x268 + 0x569424, var_28_4);
    }

    int32_t esi_3 = esi_2 + 1;
    int32_t ebp_2 = g_53851c * 0x268;
    *(ebp_2 + 0x569464) = sub_4b8a20(edi, esi_2);
    uint32_t eax_24 = *g_538518;
    int32_t ecx_13 = 0;
    *(ebp_2 + 0x569468) = 0;
    ecx_13 = *(ebp_2 + 0x569464);
    int32_t eax_28 = *(((eax_24 * 0x180 + ecx_13) << 2) + &g_a96ae0);
    void* var_18;

    if (eax_28)
    {
        eax_28(0, &a6);
        float eax_29 = a6;
        var_30 = 4;
        void* eax_30 = Mem_Alloc(eax_29, var_30);
        int32_t ecx_14 = g_53851c;
        var_18 = eax_30;
        float var_14_1 = edi;
        int32_t var_10_1 = esi_3;
        int32_t ecx_16 = ecx_14 * 0x268;
        *(ecx_16 + 0x569468) = eax_30;
        int32_t eax_31 = 0;
        eax_31 = *(ecx_16 + 0x569464);
        int32_t eax_32 = 0;
        eax_32 = g_538519;
        (*(((eax_31 + eax_32 * 0x180) << 2) + &g_a96ae0))(0, &var_18);
        int32_t var_c;
        esi_3 += var_c;
    }

    int32_t ebp_4 = g_53851c * 0x268;
    *(ebp_4 + 0x56946c) = sub_4b8a20(edi, esi_3);
    uint32_t eax_37 = *g_538518;
    int32_t ecx_20 = 0;
    *(ebp_4 + &g_569470) = 0;
    ecx_20 = *(ebp_4 + 0x56946c);
    int32_t eax_41 = *(((eax_37 * 0x180 + ecx_20) << 2) + &g_a96ae0);

    if (eax_41)
    {
        eax_41(0, &a6);
        float eax_42 = a6;
        var_30 = 4;
        void* eax_43 = Mem_Alloc(eax_42, var_30);
        int32_t ecx_21 = g_53851c;
        var_18 = eax_43;
        float var_14_2 = edi;
        int32_t ecx_23 = ecx_21 * 0x268;
        *(ecx_23 + &g_569470) = eax_43;
        int32_t eax_44 = 0;
        eax_44 = *(ecx_23 + 0x56946c);
        int32_t var_10_2 = esi_3 + 1;
        int32_t eax_45 = 0;
        eax_45 = g_538519;
        (*(((eax_44 + eax_45 * 0x180) << 2) + &g_a96ae0))(0, &var_18);
    }

    var_18 = 1;
    int32_t var_10_3 = 0;
    int32_t var_c_1 = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a5, &var_18, 0x18);
    return a5;
}
