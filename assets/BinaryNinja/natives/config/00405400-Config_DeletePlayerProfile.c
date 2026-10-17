// Original IGI.EXE function: Config_DeletePlayerProfile (VA 0x00405400; static CFG gate FAIL, CFG score 0.750).
#include "Config_DeletePlayerProfile.h"
int32_t Config_DeletePlayerProfile(int32_t context, float param_2 )

// Sig: int Config_DeletePlayerProfile(int index)
// Note: Deletes a player profile. Param: index = 0-based profile index to
// delete. RETURNS 1 on success, 0 on failure. Do not delete the last remaining
// profile; refresh your list box afterwards.
{
    int32_t data_val = Script_GetArg(param_2, 0);
    int32_t entity_val = g_bc2380;
    int32_t item_18;

    if (data_val >= entity_val)
    {
        item_18 = 0;
        int32_t item_10_1 = 0;
        int32_t item_c_1 = 0;
        char* item_8_1 = &g_567c74;
        memcpy(context, &item_18, 0x18);
        return context;
    }

    int32_t temp_val = g_bc2384;

    if (temp_val >= data_val)
        g_bc2384 = temp_val - 1;

    int32_t data_1 = data_val + 1;

    if (data_1 < entity_val)
    {
        void* temp_2 = &(&g_bc2388)[data_1 * 0x159];

        do
        {
            data_1 += 1;
            memcpy(temp_2 - 0x564, temp_2, 0x564);
            entity_val = g_bc2380;
            temp_2 += 0x564;
        } while (data_1 < entity_val);
    }

    g_bc2380 = entity_val - 1;
    item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
