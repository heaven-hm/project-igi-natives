// Original IGI.EXE function: Config_CreateNewPlayerProfile (VA 0x004050A0; static CFG gate PASS, CFG score 0.857).
#include "Config_CreateNewPlayerProfile.h"
int32_t Config_CreateNewPlayerProfile(int32_t a1, float a2 @ 0xc)

// Sig: int Config_CreateNewPlayerProfile(char* name, int sourceIndex)
// Note: Creates a new player profile. Params: name = new profile name (string),
// sourceIndex = existing profile index to copy initial settings from. RETURNS 1
// on success, 0 on failure (e.g. name taken/slots full). Use on the
// create-profile screen.
{
    int32_t v_20;

    if (g_bc2380 >= 0x10)
    {
        v_20 = 0;
        int32_t v_18_3 = 0;
        int32_t v_14_3 = 0;
        char* v_10_3 = &g_567c74;
        memcpy(a1, &v_20, 0x18);
        return a1;
    }

    char* v_34 = 0x20;
    int32_t* v_38 = &v_20;
    Sys_ResolveSymbol_23(a2, 0, v_38, v_34);
    int32_t* dstD = &v_20;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_1_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_1_1)
            break;
    }

    int32_t objC = ~i;
    int32_t i_2 = objC - 1;

    if (objC != 1)
    {
        int32_t saved_obj;
        void* tmpD1 = (&saved_obj + 3);
        int32_t i_1;

        do
        {
            char valA = *((&saved_obj + 3) + i_2);

            if (valA != 0x20 && valA != 9)
            {
                if (!i_2)
                    break;

                int32_t valA2 = g_bc2380;
                int32_t srcS = 0;
                *(&v_20 + i_2) = 0;

                if (valA2 <= 0)
                {
                label_405269:
                    Config_SaveGraphicOptions();
                    char* v_34_3 = 0x20;
                    v_38 = &g_bc28c8;
                    Sys_ResolveSymbol_23(a2, 0, v_38, v_34_3);
                    g_bc2388 = Script_GetArg(a2, 1);
                }
                else
                {
                    char* dstD2 = &g_bc28c8;
                    int32_t objC2;

                    do
                    {
                        v_38 = &v_20;
                        valA2 = Camera_UpdateTransform_6(valA2, tmpD1, &v_20, v_38, dstD2);

                        if (!valA2)
                        {
                            v_20 = 0;
                            int32_t v_18_1 = 0;
                            int32_t v_14_1 = 0;
                            char* v_10_1 = &g_567c74;
                            memcpy(a1, &v_20, 0x18);
                            return a1;
                        }

                        objC2 = g_bc2380;
                        srcS += 1;
                        dstD2 = &dstD2[0x564];
                    } while (srcS < objC2);

                    if (objC2 <= 0)
                        goto label_405269;

                    int32_t v_34_2 = 1;
                    int32_t objC3 = g_bc2384;
                    v_38 = a2;
                    int32_t valA6 = objC2 * 0x45;
                    int32_t valA10 = objC3 * 0x45;
                    (&g_bc2388)[valA6 * 5] = (&g_bc2388)[valA10 * 5];
                    (&g_bc238c)[valA6 * 5] = (&g_bc238c)[valA10 * 5];
                    *(valA6 * 0x14 + &g_bc2390) = *(valA10 * 0x14 + &g_bc2390);
                    memcpy(valA6 * 0x14 + &g_bc2394, valA10 * 0x14 + &g_bc2394,
                        0x218);
                    (&g_bc25ac)[valA6 * 5] = (&g_bc25ac)[valA10 * 5];
                    (&g_bc25b0)[valA6 * 5] = (&g_bc25b0)[valA10 * 5];
                    (&g_bc25b4)[valA6 * 5] = (&g_bc25b4)[valA10 * 5];
                    *(valA6 * 0x14 + &g_bc25b8) = *(valA10 * 0x14 + &g_bc25b8);
                    memcpy(valA6 * 0x14 + &g_bc25bc, valA10 * 0x14 + &g_bc25bc,
                        0x30c);
                    (&g_bc2388)[valA6 * 5] = Script_GetArg(v_38, v_34_2);
                    int32_t valA14 = g_bc2380;
                    g_bc2384 = valA14;
                    g_bc2380 = valA14 + 1;
                    Sys_ResolveSymbol_23(a2, 0, &(&g_bc28c8)[valA6 * 5], 0x20);
                    (&g_bc28e8)[valA6 * 5] = 1;
                }

                v_20 = 1;
                int32_t v_18_2 = 0;
                int32_t v_14_2 = 0x3ff00000;
                char* v_10_2 = &g_567c74;
                memcpy(a1, &v_20, 0x18);
                return a1;
            }

            i_1 = i_2;
            i_2 -= 1;
        } while (i_1 != 1);
    }

    v_20 = 0;
    int32_t v_18 = 0;
    int32_t v_14 = 0;
    char* v_10 = &g_567c74;
    memcpy(a1, &v_20, 0x18);
    return a1;
}
