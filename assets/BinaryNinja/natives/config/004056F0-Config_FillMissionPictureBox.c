#include "Config_FillMissionPictureBox.h"
int32_t Config_FillMissionPictureBox(int32_t a1)

// Sig: void Config_FillMissionPictureBox()
// Note: Fills the current picture box with the selected mission's briefing
// image. Use inside the mission-picture control's script right after a mission
// row is chosen.
{
    void* valA1;

    for (int32_t i = 1; i != 0xffffffff; i = *(valA1 + 0x4a4))
    {
        valA1 = FX_ExplosionSpawn_6(i);
        Menu_DrawWidget_7(valA1 + 0x484, i);
    }

    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
