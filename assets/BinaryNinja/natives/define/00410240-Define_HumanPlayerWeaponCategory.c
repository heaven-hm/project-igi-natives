// Original IGI.EXE function: Define_HumanPlayerWeaponCategory (VA 0x00410240; static CFG gate PASS, CFG score 0.889).
#include "Define_HumanPlayerWeaponCategory.h"
int32_t Define_HumanPlayerWeaponCategory(int32_t a1, float a2 @ 0xc)

// Sig: void Define_HumanPlayerWeaponCategory(...)
// Note: Registers one weapon-category entry for the human player during a
// humanplayer definition block (argc unknown - parser context). Pairs with
// DefineHumanPlayerWeaponCycle/Cycle ordering.
{
    int32_t* i = &g_56e0a4;
    int32_t srcS = 0;
    int32_t* i_1 = &g_56e0a4;

    do
    {
        int32_t valA1 = srcS;
        srcS += 1;
        int32_t v_30 = valA1;
        int32_t j_2 = Script_GetArg(a2, v_30);
        i[-1] = j_2;

        if (j_2 > 0)
        {
            int32_t j_1 = j_2;
            int32_t j;

            do
            {
                int32_t valA2 = srcS;
                srcS += 1;
                v_30 = valA2;
                *i = Script_GetArg(a2, v_30);
                i = &i[1];
                j = j_1;
                j_1 -= 1;
            } while (j != 1);
            i = i_1;
        }

        i = &i[9];
        i_1 = i;
    } while (i < &g_56e1e8);

    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
