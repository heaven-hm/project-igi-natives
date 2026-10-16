#include "Config_FillRenderDeviceListBox.h"
int32_t Config_FillRenderDeviceListBox(int32_t a1)

// Sig: void Config_FillRenderDeviceListBox()
// Note: Fills the currently-active menu list box with installed render devices
// (Direct3D device GUIDs/names). Use inside a list box collect-items script on
// the video-options screen.
{
    int32_t i = 0;

    if (g_567c90 > 0)
    {
        int32_t dstD1 = 0x567d18;

        do
        {
            Menu_DrawWidget_9(dstD1, i);
            i += 1;
            dstD1 += 0x404;
        } while (i < g_567c90);
    }

    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
