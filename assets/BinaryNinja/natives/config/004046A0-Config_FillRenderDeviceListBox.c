// Original IGI.EXE function: Config_FillRenderDeviceListBox (VA 0x004046A0; static CFG gate FAIL, CFG score 0.833).
#include "Config_FillRenderDeviceListBox.h"
int32_t Config_FillRenderDeviceListBox(int32_t context)

// Sig: void Config_FillRenderDeviceListBox()
// Note: Fills the currently-active menu list box with installed render devices
// (Direct3D device GUIDs/names). Use inside a list box collect-items script on
// the video-options screen.
{
    int32_t i = 0;

    if (g_567c90 > 0)
    {
        int32_t dest_1 = 0x567d18;

        do
        {
            Menu_DrawWidget_9(dest_1, i);
            i += 1;
            dest_1 += 0x404;
        } while (i < g_567c90);
    }

    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
