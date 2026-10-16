#include "004102D0-Define_HumanPlayerAmmoLimit.h"
/* 0x004102d0 Define_HumanPlayerAmmoLimit full linked: callers=0 callees=3 */
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
            int32_t* ebx_1 = (g_56df98 << 3) + &g_56df9c;
            *ebx_1 = sub_4b8a20(a2, i);
            int32_t var_30 = i + 1;
            i += 2;
            ebx_1[1] = sub_4b8a20(a2, var_30);
            g_56df98 += 1;
        } while (i < *a2);
    }

    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
