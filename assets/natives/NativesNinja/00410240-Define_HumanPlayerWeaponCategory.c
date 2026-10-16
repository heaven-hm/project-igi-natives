#include "00410240-Define_HumanPlayerWeaponCategory.h"
/* 0x00410240 Define_HumanPlayerWeaponCategory full linked: callers=0 callees=3 */
int32_t Define_HumanPlayerWeaponCategory(int32_t a1, float a2 @ 0xc)

// Sig: void Define_HumanPlayerWeaponCategory(...)
// Note: Registers one weapon-category entry for the human player during a
// humanplayer definition block (argc unknown - parser context). Pairs with
// DefineHumanPlayerWeaponCycle/Cycle ordering.
{
    int32_t* i = &g_56e0a4;
    int32_t esi = 0;
    int32_t* i_1 = &g_56e0a4;

    do
    {
        int32_t eax_1 = esi;
        esi += 1;
        int32_t var_30 = eax_1;
        int32_t j_2 = sub_4b8a20(a2, var_30);
        i[-1] = j_2;

        if (j_2 > 0)
        {
            int32_t j_1 = j_2;
            int32_t j;

            do
            {
                int32_t eax_2 = esi;
                esi += 1;
                var_30 = eax_2;
                *i = sub_4b8a20(a2, var_30);
                i = &i[1];
                j = j_1;
                j_1 -= 1;
            } while (j != 1);
            i = i_1;
        }

        i = &i[9];
        i_1 = i;
    } while (i < &g_56e1e8);

    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
