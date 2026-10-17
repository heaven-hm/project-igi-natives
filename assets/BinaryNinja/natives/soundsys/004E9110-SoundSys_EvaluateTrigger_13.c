// Original IGI.EXE function: SoundSys_EvaluateTrigger_13 (VA 0x004E9110; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_EvaluateTrigger_13.h"
int32_t SoundSys_EvaluateTrigger_13(void* context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5)

{
    int32_t data_1;
    int32_t temp_val;
    temp_val = HIGHD(0xff - param_5);
    data_1 = LOWD(0xff - param_5);
    int32_t dest_1 = (data_1 - temp_val) >> 1;
    int32_t result;

    if (!dest_1)
        result = param_2;

    if (dest_1 || result || param_3 || param_4)
    {
        int32_t entity_1 = Display_ClearSurfaces_13(context + 0x30, 1);

        if (dest_1)
        {
            int32_t data_4 = dest_1 & 0xff;
            int32_t entity_2 = *(context + 0x54);
            int32_t item_30_1 = entity_2;
            int32_t item_34_1 = entity_2;
            int32_t item_38_1 = entity_2;
            int32_t entity_3 = *(context + 0x48);
            int32_t item_3c_1 = entity_3;
            entity_1 = Sys_ReadFileBlock_14(entity_3, *(context + 0x4c), *(context + 0x50), entity_2, data_4, data_4, data_4,
                0x10, 0);
        }

        result = param_2;

        if (result || param_3 || param_4)
        {
            int32_t item_24_2 = entity_1;
            int32_t item_28_2 = entity_1;
            int32_t item_2c_2 = entity_1;
            int32_t item_30_3 = entity_1;
            int32_t item_34_3 = entity_1;
            int32_t entity_4 = *(context + 0x4c);
            int32_t item_38_3 = entity_4;
            int32_t item_3c_3 = entity_4;
            result = Sys_ReadFileBlock_14(*(context + 0x48), entity_4, *(context + 0x50), *(context + 0x54),
                result & 0xff, param_3 & 0xff, param_4 & 0xff, 8, 0);
        }
    }

    return result;
}
