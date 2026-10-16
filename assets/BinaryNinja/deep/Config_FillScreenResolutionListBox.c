/* LOGIC NOTE (Config_FillScreenResolutionListBox @ 0x00404450)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , Game
   called by : none
   data refs : none
   strings   : %dx%dx%d
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Config_FillScreenResolutionListBox.h"

int32_t Config_FillScreenResolutionListBox(int32_t arg1, float arg2 @ 0xc)

// Sig: void Config_FillScreenResolutionListBox(int deviceIndex)
// Note: Fills the currently-active menu list box with the screen resolutions
// available for a device. Param: deviceIndex = render-device index. Use only
// inside a menu list box 'collect items' script so the items land in that
// control.
{
    int32_t i = 0;
    int32_t dst_3 = Script_GetArg(arg2, 0) * 0x404;
    int32_t* src = dst_3 + 0x567d98;

    if (*(dst_3 + &data_568098) > 0)
    {
        do
        {
            int32_t v_128_1 = src[2];
            int32_t v_12c_1 = src[1];
            int32_t v_130 = *src;
            void v_100;
            Game_DataSymbolLoad(&v_100, "%dx%dx%d");
            Menu_DrawWidget_9(&v_100, (src[2] << 0xd | *src) << 0xd | src[1]);
            src = &src[3];
            i += 1;
        } while (i < *(dst_3 + &data_568098));
    }

    int32_t v_118 = 0;
    int32_t v_110 = 0;
    int32_t v_10c = 0;
    char* v_108 = &data_567c74;
    __builtin_memcpy(arg1, &v_118, 0x18);
    return arg1;
}
