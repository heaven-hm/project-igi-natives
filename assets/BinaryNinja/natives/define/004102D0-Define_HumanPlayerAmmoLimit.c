#include "Define_HumanPlayerAmmoLimit.h"
int32_t Define_HumanPlayerAmmoLimit(int32_t a1, int32_t* a2 @ 0xc)

// Sig: void Define_HumanPlayerAmmoLimit(...)
// Note: Registers an ammo-limit entry (max carried ammo class) for the human
// player during a humanplayer definition block (argc unknown - parser context).
{
    int32_t i = 0;
    g_56df98 = 0;

    if (*a2 > 0)
    {
        do
        {
            int32_t* ctxB1 = (g_56df98 << 3) + &g_56df9c;
            *ctxB1 = Script_GetArg(a2, i);
            int32_t v_30 = i + 1;
            i += 2;
            ctxB1[1] = Script_GetArg(a2, v_30);
            g_56df98 += 1;
        } while (i < *a2);
    }

    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
