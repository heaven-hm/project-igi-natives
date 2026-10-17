// Original IGI.EXE function: Config_FillMissionTextBox (VA 0x00405760; static CFG gate PASS, CFG score 0.917).
#include "Config_FillMissionTextBox.h"
int32_t Config_FillMissionTextBox(int32_t context)

// Sig: void Config_FillMissionTextBox()
// Note: Fills the current text box with the selected mission's briefing text.
// Use inside the mission-briefing text control's script.
{
    void* data_1;

    for (int32_t i = 1; i != 0xffffffff; i = *(data_1 + 0x4a4))
    {
        data_1 = FX_ExplosionSpawn_6(i);
        Menu_FormatScreen_7(data_1 + 0x24, i);
    }

    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
