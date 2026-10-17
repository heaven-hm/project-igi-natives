// Original IGI.EXE function: Config_GraphicOptionsSetDevice (VA 0x004047F0; static CFG gate FAIL, CFG score 0.792).
#include "Config_GraphicOptionsSetDevice.h"
int32_t Config_GraphicOptionsSetDevice(int32_t context, float param_2 )

// Sig: void Config_GraphicOptionsSetDevice(int deviceIndex)
// Note: Applies a render device to the active profile. Param: deviceIndex =
// index from Config_FillRenderDeviceListBox. Use in video-options screen
// script.
{
    int32_t context_3 = Script_GetArg(param_2, 0) * 0x404;
    int32_t dest_val = context_3 + 0x567d18;
    int32_t i = 0xffffffff;
    void* temp_1 = Config_GetActiveGraphicOptions() + 0x113;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_val = ~i;
    int32_t source_1;
    int32_t dest_3;
    dest_3 = memcpy(temp_1, dest_val - entity_val, entity_val & 0xfffffffc);
    memcpy(dest_3, source_1, entity_val & 3);
    void* dest_4 = context_3 + &g_567c98;
    int32_t i_1 = 0xffffffff;
    void* temp_3 = Config_GetActiveGraphicOptions() + 0x13;

    while (i_1)
    {
        bool flag_1_1 = 0 != *dest_4;
        dest_4 += 1;
        i_1 -= 1;

        if (!flag_1_1)
            break;
    }

    int32_t entity_4 = ~i_1;
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t source_3;
    int32_t dest_7;
    dest_7 = memcpy(temp_3, dest_4 - entity_4, entity_4 & 0xfffffffc);
    int32_t item_c = 0;
    memcpy(dest_7, source_3, entity_4 & 3);
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
