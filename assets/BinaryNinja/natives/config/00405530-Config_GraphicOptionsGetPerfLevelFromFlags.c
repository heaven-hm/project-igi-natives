// Original IGI.EXE function: Config_GraphicOptionsGetPerfLevelFromFlags (VA 0x00405530; static CFG gate FAIL, CFG score 0.833).
#include "Config_GraphicOptionsGetPerfLevelFromFlags.h"
int32_t Config_GraphicOptionsGetPerfLevelFromFlags(int32_t context, float param_2 )

// Sig: int Config_GraphicOptionsGetPerfLevelFromFlags(int flags)
// Note: Converts a performance-flag bitmask back into its detail LEVEL number.
// Param: flags = bitmask from the profile/performance setting. Use to show the
// current detail level in UI.
{
    int32_t item_20 = 0x1f;
    int32_t data_1 = Script_GetArg(param_2, 0);
    float context_val = 0.0f;

    for (int32_t* i = &g_537b74; i < &g_537b90; )
    {
        int32_t j_1 = 0x20;
        int32_t entity_2 = *i ^ data_1;
        int32_t temp_1 = 0;
        int32_t j;

        do
        {
            temp_1 += entity_2 & 1;
            entity_2 s>>= 1;
            j = j_1;
            j_1 -= 1;
        } while (j != 1);

        if (temp_1 < item_20)
        {
            item_20 = temp_1;
            param_2 = context_val;
        }

        i = &i[1];
        context_val += 1;
    }

    long double fpu7 = param_2;
    char* item_8 = &g_567c74;
    item_20 = fpu7;
    int32_t item_18 = item_20;
    double item_10 = fpu7;
    memcpy(context, &item_18, 0x18);
    return context;
}
