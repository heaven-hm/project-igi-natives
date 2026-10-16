#include "00405400-Config_DeletePlayerProfile.h"
/* 0x00405400 Config_DeletePlayerProfile full linked: callers=0 callees=4 */
int32_t Config_DeletePlayerProfile(int32_t a1, float a2 @ 0xc)

// Sig: int Config_DeletePlayerProfile(int index)
// Note: Deletes a player profile. Param: index = 0-based profile index to
// delete. RETURNS 1 on success, 0 on failure. Do not delete the last remaining
// profile; refresh your list box afterwards.
{
    int32_t eax = sub_4b8a20(a2, 0);
    int32_t ecx = g_bc2380;
    int32_t var_18;

    if (eax >= ecx)
    {
        var_18 = 0;
        int32_t var_10_1 = 0;
        int32_t var_c_1 = 0;
        char* var_8_1 = &g_567c74;
        memcpy(a1, &var_18, 0x18);
        return a1;
    }

    int32_t edx = g_bc2384;

    if (edx >= eax)
        g_bc2384 = edx - 1;

    int32_t eax_1 = eax + 1;

    if (eax_1 < ecx)
    {
        void* edx_2 = &(&g_bc2388)[eax_1 * 0x159];

        do
        {
            eax_1 += 1;
            memcpy(edx_2 - 0x564, edx_2, 0x564);
            ecx = g_bc2380;
            edx_2 += 0x564;
        } while (eax_1 < ecx);
    }

    g_bc2380 = ecx - 1;
    var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
