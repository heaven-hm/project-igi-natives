#include "Config_FillScreenResolutionListBox.h"
int32_t Config_FillScreenResolutionListBox(int32_t a1, float a2 @ 0xc)

// Sig: void Config_FillScreenResolutionListBox(int deviceIndex)
// Note: Fills the currently-active menu list box with the screen resolutions
// available for a device. Param: deviceIndex = render-device index. Use only
// inside a menu list box 'collect items' script so the items land in that
// control.
{
    int32_t i = 0;
    int32_t dstD3 = Script_GetArg(a2, 0) * 0x404;
    int32_t* srcS = dstD3 + 0x567d98;

    if (*(dstD3 + &g_568098) > 0)
    {
        do
        {
            int32_t v_128_1 = srcS[2];
            int32_t v_12c_1 = srcS[1];
            int32_t v_130 = *srcS;
            void v_100;
            Game_DataSymbolLoad(&v_100, "%dx%dx%d");
            Menu_DrawWidget_9(&v_100, (srcS[2] << 0xd | *srcS) << 0xd | srcS[1]);
            srcS = &srcS[3];
            i += 1;
        } while (i < *(dstD3 + &g_568098));
    }

    int32_t v_118 = 0;
    int32_t v_110 = 0;
    int32_t v_10c = 0;
    char* v_108 = &g_567c74;
    memcpy(a1, &v_118, 0x18);
    return a1;
}
