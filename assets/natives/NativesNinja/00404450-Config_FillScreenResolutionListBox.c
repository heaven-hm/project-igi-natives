#include "00404450-Config_FillScreenResolutionListBox.h"
/* 0x00404450 Config_FillScreenResolutionListBox full linked: callers=0 callees=4 */
int32_t Config_FillScreenResolutionListBox(int32_t a1, float a2 @ 0xc)

// Sig: void Config_FillScreenResolutionListBox(int deviceIndex)
// Note: Fills the currently-active menu list box with the screen resolutions
// available for a device. Param: deviceIndex = render-device index. Use only
// inside a menu list box 'collect items' script so the items land in that
// control.
{
    int32_t i = 0;
    int32_t edi_3 = sub_4b8a20(a2, 0) * 0x404;
    int32_t* esi = edi_3 + 0x567d98;

    if (*(edi_3 + &g_568098) > 0)
    {
        do
        {
            int32_t var_128_1 = esi[2];
            int32_t var_12c_1 = esi[1];
            int32_t var_130 = *esi;
            void var_100;
            Game_DataSymbolLoad(&var_100, "%dx%dx%d");
            Menu_DrawWidget_9(&var_100, (esi[2] << 0xd | *esi) << 0xd | esi[1]);
            esi = &esi[3];
            i += 1;
        } while (i < *(edi_3 + &g_568098));
    }

    int32_t var_118 = 0;
    int32_t var_110 = 0;
    int32_t var_10c = 0;
    char* var_108 = &g_567c74;
    memcpy(a1, &var_118, 0x18);
    return a1;
}
