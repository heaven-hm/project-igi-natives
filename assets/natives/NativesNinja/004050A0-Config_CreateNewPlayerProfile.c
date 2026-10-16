#include "004050A0-Config_CreateNewPlayerProfile.h"
/* 0x004050a0 Config_CreateNewPlayerProfile full linked: callers=0 callees=14 */
int32_t Config_CreateNewPlayerProfile(int32_t a1, float a2 @ 0xc)

// Sig: int Config_CreateNewPlayerProfile(char* name, int sourceIndex)
// Note: Creates a new player profile. Params: name = new profile name (string),
// sourceIndex = existing profile index to copy initial settings from. RETURNS 1
// on success, 0 on failure (e.g. name taken/slots full). Use on the
// create-profile screen.
{
    int32_t var_20;

    if (g_bc2380 >= 0x10)
    {
        var_20 = 0;
        int32_t var_18_3 = 0;
        int32_t var_14_3 = 0;
        char* var_10_3 = &g_567c74;
        memcpy(a1, &var_20, 0x18);
        return a1;
    }

    char* var_34 = 0x20;
    int32_t* var_38 = &var_20;
    sub_4b8a80(a2, 0, var_38, var_34);
    int32_t* edi = &var_20;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:1_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:1_1)
            break;
    }

    int32_t ecx = ~i;
    int32_t i_2 = ecx - 1;

    if (ecx != 1)
    {
        int32_t __saved_ebx;
        void* edx_1 = (&__saved_ebx + 3);
        int32_t i_1;

        do
        {
            char eax = *((&__saved_ebx + 3) + i_2);

            if (eax != 0x20 && eax != 9)
            {
                if (!i_2)
                    break;

                int32_t eax_2 = g_bc2380;
                int32_t esi = 0;
                *(&var_20 + i_2) = 0;

                if (eax_2 <= 0)
                {
                label_405269:
                    Config_SaveGraphicOptions();
                    char* var_34_3 = 0x20;
                    var_38 = &g_bc28c8;
                    sub_4b8a80(a2, 0, var_38, var_34_3);
                    g_bc2388 = sub_4b8a20(a2, 1);
                }
                else
                {
                    char* edi_2 = &g_bc28c8;
                    int32_t ecx_2;

                    do
                    {
                        var_38 = &var_20;
                        eax_2 = sub_4a5980(eax_2, edx_1, &var_20, var_38, edi_2);

                        if (!eax_2)
                        {
                            var_20 = 0;
                            int32_t var_18_1 = 0;
                            int32_t var_14_1 = 0;
                            char* var_10_1 = &g_567c74;
                            memcpy(a1, &var_20, 0x18);
                            return a1;
                        }

                        ecx_2 = g_bc2380;
                        esi += 1;
                        edi_2 = &edi_2[0x564];
                    } while (esi < ecx_2);

                    if (ecx_2 <= 0)
                        goto label_405269;

                    int32_t var_34_2 = 1;
                    int32_t ecx_3 = g_bc2384;
                    var_38 = a2;
                    int32_t eax_6 = ecx_2 * 0x45;
                    int32_t eax_10 = ecx_3 * 0x45;
                    (&g_bc2388)[eax_6 * 5] = (&g_bc2388)[eax_10 * 5];
                    (&g_bc238c)[eax_6 * 5] = (&g_bc238c)[eax_10 * 5];
                    *(eax_6 * 0x14 + &g_bc2390) = *(eax_10 * 0x14 + &g_bc2390);
                    memcpy(eax_6 * 0x14 + &g_bc2394, eax_10 * 0x14 + &g_bc2394,
                        0x218);
                    (&g_bc25ac)[eax_6 * 5] = (&g_bc25ac)[eax_10 * 5];
                    (&g_bc25b0)[eax_6 * 5] = (&g_bc25b0)[eax_10 * 5];
                    (&g_bc25b4)[eax_6 * 5] = (&g_bc25b4)[eax_10 * 5];
                    *(eax_6 * 0x14 + &g_bc25b8) = *(eax_10 * 0x14 + &g_bc25b8);
                    memcpy(eax_6 * 0x14 + &g_bc25bc, eax_10 * 0x14 + &g_bc25bc,
                        0x30c);
                    (&g_bc2388)[eax_6 * 5] = sub_4b8a20(var_38, var_34_2);
                    int32_t eax_14 = g_bc2380;
                    g_bc2384 = eax_14;
                    g_bc2380 = eax_14 + 1;
                    sub_4b8a80(a2, 0, &(&g_bc28c8)[eax_6 * 5], 0x20);
                    (&g_bc28e8)[eax_6 * 5] = 1;
                }

                var_20 = 1;
                int32_t var_18_2 = 0;
                int32_t var_14_2 = 0x3ff00000;
                char* var_10_2 = &g_567c74;
                memcpy(a1, &var_20, 0x18);
                return a1;
            }

            i_1 = i_2;
            i_2 -= 1;
        } while (i_1 != 1);
    }

    var_20 = 0;
    int32_t var_18 = 0;
    int32_t var_14 = 0;
    char* var_10 = &g_567c74;
    memcpy(a1, &var_20, 0x18);
    return a1;
}
