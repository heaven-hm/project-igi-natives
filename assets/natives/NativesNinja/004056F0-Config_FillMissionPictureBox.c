#include "004056F0-Config_FillMissionPictureBox.h"
/* 0x004056f0 Config_FillMissionPictureBox full linked: callers=0 callees=4 */
int32_t Config_FillMissionPictureBox(int32_t a1)

// Sig: void Config_FillMissionPictureBox()
// Note: Fills the current picture box with the selected mission's briefing
// image. Use inside the mission-picture control's script right after a mission
// row is chosen.
{
    void* eax_1;

    for (int32_t i = 1; i != 0xffffffff; i = *(eax_1 + 0x4a4))
    {
        eax_1 = sub_485170(i);
        Menu_DrawWidget_7(eax_1 + 0x484, i);
    }

    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
