// IGI native provenance: Define_HumanPlayerWeaponCategory - 0x00410240 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00410240-Define_HumanPlayerWeaponCategory.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Define_HumanPlayerWeaponCategory.h"
int32_t Define_HumanPlayerWeaponCategory(int32_t context, float param_2 )

// Sig: void Define_HumanPlayerWeaponCategory(...)
// Note: Registers one weapon-category entry for the human player during a
// humanplayer definition block (argc unknown - parser context). Pairs with
// DefineHumanPlayerWeaponCycle/Cycle ordering.
{
    int32_t* i = &g_56e0a4;
    int32_t source_val = 0;
    int32_t* i_1 = &g_56e0a4;

    do
    {
        int32_t data_1 = source_val;
        source_val += 1;
        int32_t item_30 = data_1;
        int32_t j_2 = Script_GetArg(param_2, item_30);
        i[-1] = j_2;

        if (j_2 > 0)
        {
            int32_t j_1 = j_2;
            int32_t j;

            do
            {
                int32_t data_2 = source_val;
                source_val += 1;
                item_30 = data_2;
                *i = Script_GetArg(param_2, item_30);
                i = &i[1];
                j = j_1;
                j_1 -= 1;
            } while (j != 1);
            i = i_1;
        }

        i = &i[9];
        i_1 = i;
    } while (i < &g_56e1e8);

    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
