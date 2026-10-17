// Original IGI.EXE function: Config_DeletePlayerProfile (VA 0x00405400; static CFG gate FAIL, CFG score 0.750).
#include "Config_DeletePlayerProfile.h"
int32_t Config_DeletePlayerProfile(int32_t a1, float a2 @ 0xc)

// Sig: int Config_DeletePlayerProfile(int index)
// Note: Deletes a player profile. Param: index = 0-based profile index to
// delete. RETURNS 1 on success, 0 on failure. Do not delete the last remaining
// profile; refresh your list box afterwards.
{
    int32_t valA = Script_GetArg(a2, 0);
    int32_t objC = g_bc2380;
    int32_t v_18;

    if (valA >= objC)
    {
        v_18 = 0;
        int32_t v_10_1 = 0;
        int32_t v_c_1 = 0;
        char* v_8_1 = &g_567c74;
        memcpy(a1, &v_18, 0x18);
        return a1;
    }

    int32_t tmpD = g_bc2384;

    if (tmpD >= valA)
        g_bc2384 = tmpD - 1;

    int32_t valA1 = valA + 1;

    if (valA1 < objC)
    {
        void* tmpD2 = &(&g_bc2388)[valA1 * 0x159];

        do
        {
            valA1 += 1;
            memcpy(tmpD2 - 0x564, tmpD2, 0x564);
            objC = g_bc2380;
            tmpD2 += 0x564;
        } while (valA1 < objC);
    }

    g_bc2380 = objC - 1;
    v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
