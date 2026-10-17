// Original IGI.EXE function: ScrollListBox_Process (VA 0x0041BC00; static CFG gate PASS, CFG score 1.000).
#include "ScrollListBox_Process.h"
int32_t ScrollListBox_Process(void* context)

{
    Menu_FormatScreen_3(*(context + 0x13f4));
    Menu_FormatScreen_3(*(context + 0x13f8));
    int32_t* data_1 = *(context + 0x12ac);

    if (data_1)
    {
        Sys_ReadFileBlock_18(data_1);
        *(context + 0x12ac) = 0;
    }

    Menu_HandleInput_7(context);
    Script_CallNativeHandler_6(context + 0x12b0);
    Script_CallNativeHandler_6(context + 0x1300);
    Script_CallNativeHandler_6(context + 0x1350);
    Script_CallNativeHandler_6(context + 0x13a0);
    int32_t data_3 = Script_SpawnNewTask_6();
    int32_t entity_2 = 0;
    entity_2 = *(context + 0x1c);
    return (*(((data_3 * 0x180 + entity_2) << 2) + &g_a96ae0))(context);
}
