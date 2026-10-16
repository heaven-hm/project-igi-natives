#include "gi_platform.h"
#include "004101C0-Define_HumanPlayerWeaponCycle.h"
int32_t Define_HumanPlayerWeaponCycle(int32_t a1, int32_t* a2 )

// Sig: void Define_HumanPlayerWeaponCycle(...)
// Note: Collects the weapon-cycle list for the human player: loops the parsed
// entries and stores them into the cycle table at 0x56DF1C with count at
// 0x56DF18 (verified in igi.exe). Call within a humanplayer weapon-cycle
// definition block; argc unknown (parser context).
{
    int32_t i = 0;
    g_56df18 = 0;

    if (*a2 > 0)
    {
        do
        {
            int32_t i_1 = i;
            i += 1;
            *((g_56df18 << 2) + &g_56df1c) = Script_GetArg(a2, i_1);
            g_56df18 += 1;
        } while (i < *a2);
    }

    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
