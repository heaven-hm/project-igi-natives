#include "00405760-Config_FillMissionTextBox.h"
/* 0x00405760 Config_FillMissionTextBox full linked: callers=0 callees=4 */
int32_t Config_FillMissionTextBox(int32_t a1)

// Sig: void Config_FillMissionTextBox()
// Note: Fills the current text box with the selected mission's briefing text.
// Use inside the mission-briefing text control's script.
{
    void* eax_1;

    for (int32_t i = 1; i != 0xffffffff; i = *(eax_1 + 0x4a4))
    {
        eax_1 = sub_485170(i);
        Menu_FormatScreen_7(eax_1 + 0x24, i);
    }

    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
