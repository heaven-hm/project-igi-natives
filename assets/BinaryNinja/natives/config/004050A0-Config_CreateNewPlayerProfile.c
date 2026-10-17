// Original IGI.EXE function: Config_CreateNewPlayerProfile (VA 0x004050A0; static CFG gate PASS, CFG score 0.857).
#include "Config_CreateNewPlayerProfile.h"
int32_t Config_CreateNewPlayerProfile(int32_t context, float param_2 )

// Sig: int Config_CreateNewPlayerProfile(char* name, int sourceIndex)
// Note: Creates a new player profile. Params: name = new profile name (string),
// sourceIndex = existing profile index to copy initial settings from. RETURNS 1
// on success, 0 on failure (e.g. name taken/slots full). Use on the
// create-profile screen.
{
    int32_t item_20;

    if (g_bc2380 >= 0x10)
    {
        item_20 = 0;
        int32_t item_18_3 = 0;
        int32_t item_14_3 = 0;
        char* item_10_3 = &g_567c74;
        memcpy(context, &item_20, 0x18);
        return context;
    }

    char* item_34 = 0x20;
    int32_t* item_38 = &item_20;
    Sys_ResolveSymbol_23(param_2, 0, item_38, item_34);
    int32_t* dest_val = &item_20;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_1_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_1_1)
            break;
    }

    int32_t entity_val = ~i;
    int32_t i_2 = entity_val - 1;

    if (entity_val != 1)
    {
        int32_t saved_obj;
        void* temp_1 = (&saved_obj + 3);
        int32_t i_1;

        do
        {
            char data_val = *((&saved_obj + 3) + i_2);

            if (data_val != 0x20 && data_val != 9)
            {
                if (!i_2)
                    break;

                int32_t data_2 = g_bc2380;
                int32_t source_val = 0;
                *(&item_20 + i_2) = 0;

                if (data_2 <= 0)
                {
                label_405269:
                    Config_SaveGraphicOptions();
                    char* item_34_3 = 0x20;
                    item_38 = &g_bc28c8;
                    Sys_ResolveSymbol_23(param_2, 0, item_38, item_34_3);
                    g_bc2388 = Script_GetArg(param_2, 1);
                }
                else
                {
                    char* dest_2 = &g_bc28c8;
                    int32_t entity_2;

                    do
                    {
                        item_38 = &item_20;
                        data_2 = Camera_UpdateTransform_6(data_2, temp_1, &item_20, item_38, dest_2);

                        if (!data_2)
                        {
                            item_20 = 0;
                            int32_t item_18_1 = 0;
                            int32_t item_14_1 = 0;
                            char* item_10_1 = &g_567c74;
                            memcpy(context, &item_20, 0x18);
                            return context;
                        }

                        entity_2 = g_bc2380;
                        source_val += 1;
                        dest_2 = &dest_2[0x564];
                    } while (source_val < entity_2);

                    if (entity_2 <= 0)
                        goto label_405269;

                    int32_t item_34_2 = 1;
                    int32_t entity_3 = g_bc2384;
                    item_38 = param_2;
                    int32_t data_6 = entity_2 * 0x45;
                    int32_t data_10 = entity_3 * 0x45;
                    (&g_bc2388)[data_6 * 5] = (&g_bc2388)[data_10 * 5];
                    (&g_bc238c)[data_6 * 5] = (&g_bc238c)[data_10 * 5];
                    *(data_6 * 0x14 + &g_bc2390) = *(data_10 * 0x14 + &g_bc2390);
                    memcpy(data_6 * 0x14 + &g_bc2394, data_10 * 0x14 + &g_bc2394,
                        0x218);
                    (&g_bc25ac)[data_6 * 5] = (&g_bc25ac)[data_10 * 5];
                    (&g_bc25b0)[data_6 * 5] = (&g_bc25b0)[data_10 * 5];
                    (&g_bc25b4)[data_6 * 5] = (&g_bc25b4)[data_10 * 5];
                    *(data_6 * 0x14 + &g_bc25b8) = *(data_10 * 0x14 + &g_bc25b8);
                    memcpy(data_6 * 0x14 + &g_bc25bc, data_10 * 0x14 + &g_bc25bc,
                        0x30c);
                    (&g_bc2388)[data_6 * 5] = Script_GetArg(item_38, item_34_2);
                    int32_t data_14 = g_bc2380;
                    g_bc2384 = data_14;
                    g_bc2380 = data_14 + 1;
                    Sys_ResolveSymbol_23(param_2, 0, &(&g_bc28c8)[data_6 * 5], 0x20);
                    (&g_bc28e8)[data_6 * 5] = 1;
                }

                item_20 = 1;
                int32_t item_18_2 = 0;
                int32_t item_14_2 = 0x3ff00000;
                char* item_10_2 = &g_567c74;
                memcpy(context, &item_20, 0x18);
                return context;
            }

            i_1 = i_2;
            i_2 -= 1;
        } while (i_1 != 1);
    }

    item_20 = 0;
    int32_t item_18 = 0;
    int32_t item_14 = 0;
    char* item_10 = &g_567c74;
    memcpy(context, &item_20, 0x18);
    return context;
}
