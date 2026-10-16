#include "gi_platform.h"
#include "00404FA0-Config_FillPlayerProfileListBox.h"
int32_t Config_FillPlayerProfileListBox(int32_t a1)

// Sig: void Config_FillPlayerProfileListBox()
// Note: Fills the current menu list box with all player profiles (name per row,
// row index = profile index). Use inside the profile-selection list box
// collect-items script.
{
    int32_t i = 0;

    if (g_bc2380 > 0)
    {
        int32_t* dstD1 = &g_bc28c8;

        do
        {
            Menu_DrawWidget_9(dstD1, i);
            i += 1;
            dstD1 = &dstD1[0x159];
        } while (i < g_bc2380);
    }

    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
