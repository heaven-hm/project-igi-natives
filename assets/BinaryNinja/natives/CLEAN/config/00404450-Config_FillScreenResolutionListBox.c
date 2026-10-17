// IGI native provenance: Config_FillScreenResolutionListBox - 0x00404450 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 00404450-Config_FillScreenResolutionListBox.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_FillScreenResolutionListBox.h"
int32_t Config_FillScreenResolutionListBox(int32_t context, float param_2 )

// Sig: void Config_FillScreenResolutionListBox(int deviceIndex)
// Note: Fills the currently-active menu list box with the screen resolutions
// available for a device. Param: deviceIndex = render-device index. Use only
// inside a menu list box 'collect items' script so the items land in that
// control.
{
    int32_t i = 0;
    int32_t dest_3 = Script_GetArg(param_2, 0) * 0x404;
    int32_t* source_val = dest_3 + 0x567d98;

    if (*(dest_3 + &g_568098) > 0)
    {
        do
        {
            int32_t item_128_1 = source_val[2];
            int32_t item_12c_1 = source_val[1];
            int32_t item_130 = *source_val;
            void item_100;
            Game_DataSymbolLoad(&item_100, "%word_data%word_data%d");
            Menu_DrawWidget_9(&item_100, (source_val[2] << 0xd | *source_val) << 0xd | source_val[1]);
            source_val = &source_val[3];
            i += 1;
        } while (i < *(dest_3 + &g_568098));
    }

    int32_t item_118 = 0;
    int32_t item_110 = 0;
    int32_t item_10c = 0;
    char* item_108 = &g_567c74;
    memcpy(context, &item_118, 0x18);
    return context;
}
