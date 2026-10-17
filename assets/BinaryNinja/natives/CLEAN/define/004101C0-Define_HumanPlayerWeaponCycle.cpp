// IGI native provenance: Define_HumanPlayerWeaponCycle - 0x004101C0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004101C0-Define_HumanPlayerWeaponCycle.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Define_HumanPlayerWeaponCycle.h"
int32_t Define_HumanPlayerWeaponCycle(int32_t context, int32_t* param_2 )

// Sig: void Define_HumanPlayerWeaponCycle(...)
// Note: Collects the weapon-cycle list for the human player: loops the parsed
// entries and stores them into the cycle table at 0x56DF1C with count at
// 0x56DF18 (verified in igi.exe). Call within a humanplayer weapon-cycle
// definition block; argc unknown (parser context).
{
    int32_t i = 0;
    g_56df18 = 0;

    if (*param_2 > 0)
    {
        do
        {
            int32_t i_1 = i;
            i += 1;
            *((g_56df18 << 2) + &g_56df1c) = Script_GetArg(param_2, i_1);
            g_56df18 += 1;
        } while (i < *param_2);
    }

    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
