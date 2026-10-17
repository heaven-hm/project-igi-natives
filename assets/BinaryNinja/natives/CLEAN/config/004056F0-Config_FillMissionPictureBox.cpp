// IGI native provenance: Config_FillMissionPictureBox - 0x004056F0 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 004056F0-Config_FillMissionPictureBox.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_FillMissionPictureBox.h"
int32_t Config_FillMissionPictureBox(int32_t context)

// Sig: void Config_FillMissionPictureBox()
// Note: Fills the current picture box with the selected mission's briefing
// image. Use inside the mission-picture control's script right after a mission
// row is chosen.
{
    void* data_1;

    for (int32_t i = 1; i != 0xffffffff; i = *(data_1 + 0x4a4))
    {
        data_1 = FX_ExplosionSpawn_6(i);
        Menu_DrawWidget_7(data_1 + 0x484, i);
    }

    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
