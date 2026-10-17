// Original IGI.EXE function: Config_GraphicOptionsGetResolution (VA 0x004045B0; static CFG gate PASS, CFG score 0.933).
#include "Config_GraphicOptionsGetResolution.h"
int32_t Config_GraphicOptionsGetResolution(int32_t context, float param_2 )

// Sig: int Config_GraphicOptionsGetResolution()
// Note: Returns the active profile's display-mode/resolution index (same index
// space as Config_GraphicOptionsSetResolution). Use in video-options UI scripts
// to preselect the current value.
{
    int32_t data_1 = Script_GetArg(param_2, 0);
    int32_t flagP = *Config_GetActiveGraphicOptions();
    int32_t entity_val = *(Config_GetActiveGraphicOptions() + 4);
    int32_t temp_val = *(Config_GetActiveGraphicOptions() + 8);
    int32_t* context_val = nullptr;
    int32_t data_8 = data_1 * 0x404;
    int32_t dest_val = 0x7fffffff;
    int32_t* source_1 = data_8 + 0x567d98;
    float data_9 = *(data_8 + &g_568098);

    if (data_9 > 0)
    {
        param_2 = data_9;
        bool flag_0_1;

        do
        {
            int32_t data_12;
            int32_t temp_1;
            temp_1 = HIGHD(source_1[1] - entity_val);
            data_12 = LOWD(source_1[1] - entity_val);
            int32_t data_15;
            int32_t temp_2;
            temp_2 = HIGHD(*source_1 - flagP);
            data_15 = LOWD(*source_1 - flagP);
            int32_t data_20;
            int32_t temp_4;
            temp_4 = HIGHD(source_1[2] - temp_val);
            data_20 = LOWD(source_1[2] - temp_val);
            int32_t entity_6 = ((data_12 ^ temp_1) - temp_1) * ((data_15 ^ temp_2) - temp_2)
                + (((data_20 ^ temp_4) - temp_4) << 0x18);

            if (entity_6 < dest_val)
            {
                context_val = source_1;
                dest_val = entity_6;
            }

            source_1 = &source_1[3];
            flag_0_1 = param_2 != 1;
            param_2 -= 1;
        } while (flag_0_1);
    }

    char* item_8 = &g_567c74;
    float data_30 = (context_val[2] << 0xd | *context_val) << 0xd | context_val[1];
    float item_18 = data_30;
    double item_10 = data_30;
    memcpy(context, &item_18, 0x18);
    return context;
}
