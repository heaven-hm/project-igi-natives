// IGI native provenance: Define_GameMaterial - 0x00407F50 - CFG score 98.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00407F50-Define_GameMaterial.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Define_GameMaterial.h"
int32_t Define_GameMaterial(long double context , long double param_2 , long double param_3 , long double param_4 , int32_t param_5, float param_6 )

// Sig: void Define_GameMaterial(...)
// Note: Defines a GameMaterial entry during a game-material definition block
// (855-byte parser function). Call only from gamematerial .qsc definition
// contexts; arg layout follows the Define block grammar (registration argc
// unknown).
{
    float dest_val = param_6;
    char* item_28 = 0x20;
    int32_t data_1 = g_53851c * 0x268;
    *(data_1 + &g_569474) = 1;
    int32_t item_30 = 0;
    Sys_ResolveSymbol_23(dest_val, item_30, data_1 + 0x569230, item_28);
    Profile_ValueSet(dest_val, 1.40129846e-45.0f);
    *(g_53851c * 0x268 + &g_569250) = context;
    Profile_ValueSet(dest_val, 2.80259693e-45.0f);
    *(g_53851c * 0x268 + &g_569254) = param_2;
    Profile_ValueSet(dest_val, 4.20389539e-45.0f);
    *(g_53851c * 0x268 + &g_569258) = param_3;
    int32_t source_val = 6;
    *(g_53851c * 0x268 + &g_56925c) = Script_GetArg(dest_val, 4);
    Profile_ValueSet(dest_val, 7.00649232e-45.0f);
    int32_t data_10 = g_53851c;
    int32_t flagP = 0;
    *(data_10 * 0x268 + &g_569260) = param_4;

    while (true)
    {
        int32_t entity_7 = source_val;
        char* item_28_1 = 0x20;
        source_val += 1;
        item_30 = entity_7;
        Sys_ResolveSymbol_23(dest_val, item_30, flagP + data_10 * 0x268 + 0x569264, item_28_1);
        flagP += 0x20;

        if (source_val - 6 >= 6)
            break;

        data_10 = g_53851c;
    }

    int32_t data_13 = g_53851c;
    char* item_28_2 = 0x20;
    item_30 = source_val;
    Sys_ResolveSymbol_23(dest_val, item_30, data_13 * 0x268 + &g_569324, item_28_2);
    int32_t source_2 = source_val + 2;
    Sys_ResolveSymbol_23(dest_val, source_val + 1, g_53851c * 0x268 + &g_569344, 0x20);

    for (int32_t i = 0; i < 0xc0; i += 0x20)
    {
        int32_t data_17 = g_53851c;
        int32_t entity_10 = source_2;
        char* item_28_3 = 0x20;
        source_2 += 1;
        item_30 = entity_10;
        Sys_ResolveSymbol_23(dest_val, item_30, i + data_17 * 0x268 + 0x569364, item_28_3);
    }

    for (int32_t i_1 = 0; i_1 < 0x40; i_1 += 0x20)
    {
        int32_t data_19 = g_53851c;
        int32_t entity_11 = source_2;
        char* item_28_4 = 0x20;
        source_2 += 1;
        item_30 = entity_11;
        Sys_ResolveSymbol_23(dest_val, item_30, i_1 + data_19 * 0x268 + 0x569424, item_28_4);
    }

    int32_t source_3 = source_2 + 1;
    int32_t flagP2 = g_53851c * 0x268;
    *(flagP2 + 0x569464) = Script_GetArg(dest_val, source_2);
    uint32_t data_24 = *g_538518;
    int32_t entity_13 = 0;
    *(flagP2 + 0x569468) = 0;
    entity_13 = *(flagP2 + 0x569464);
    int32_t data_28 = *(((data_24 * 0x180 + entity_13) << 2) + &g_a96ae0);
    void* item_18;

    if (data_28)
    {
        data_28(0, &param_6);
        float data_29 = param_6;
        item_30 = 4;
        void* data_30 = Mem_Alloc(data_29, item_30);
        int32_t entity_14 = g_53851c;
        item_18 = data_30;
        float item_14_1 = dest_val;
        int32_t item_10_1 = source_3;
        int32_t entity_16 = entity_14 * 0x268;
        *(entity_16 + 0x569468) = data_30;
        int32_t data_31 = 0;
        data_31 = *(entity_16 + 0x569464);
        int32_t data_32 = 0;
        data_32 = g_538519;
        (*(((data_31 + data_32 * 0x180) << 2) + &g_a96ae0))(0, &item_18);
        int32_t item_c;
        source_3 += item_c;
    }

    int32_t flagP4 = g_53851c * 0x268;
    *(flagP4 + 0x56946c) = Script_GetArg(dest_val, source_3);
    uint32_t data_37 = *g_538518;
    int32_t entity_20 = 0;
    *(flagP4 + &g_569470) = 0;
    entity_20 = *(flagP4 + 0x56946c);
    int32_t data_41 = *(((data_37 * 0x180 + entity_20) << 2) + &g_a96ae0);

    if (data_41)
    {
        data_41(0, &param_6);
        float data_42 = param_6;
        item_30 = 4;
        void* data_43 = Mem_Alloc(data_42, item_30);
        int32_t entity_21 = g_53851c;
        item_18 = data_43;
        float item_14_2 = dest_val;
        int32_t entity_23 = entity_21 * 0x268;
        *(entity_23 + &g_569470) = data_43;
        int32_t data_44 = 0;
        data_44 = *(entity_23 + 0x56946c);
        int32_t item_10_2 = source_3 + 1;
        int32_t data_45 = 0;
        data_45 = g_538519;
        (*(((data_44 + data_45 * 0x180) << 2) + &g_a96ae0))(0, &item_18);
    }

    item_18 = 1;
    int32_t item_10_3 = 0;
    int32_t item_c_1 = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(param_5, &item_18, 0x18);
    return param_5;
}
