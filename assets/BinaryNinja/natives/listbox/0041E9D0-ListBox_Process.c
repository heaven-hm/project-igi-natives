// Original IGI.EXE function: ListBox_Process (VA 0x0041E9D0; static CFG gate PASS, CFG score 1.000).
#include "ListBox_Process.h"
int32_t ListBox_Process(void* context)

{
    int32_t* data_val = *(context + 0xbf4);

    if (data_val)
    {
        Sys_ReadFileBlock_18(data_val);
        *(context + 0xbf4) = 0;
    }

    Menu_UpdateLanguage_9(context);
    Menu_FormatScreen_3(*(context + 0xd4));
    Menu_FormatScreen_3(*(context + 0xd8));
    Script_CallNativeHandler_6(context + 0xbf8);
    Script_CallNativeHandler_6(context + 0xc48);
    Script_CallNativeHandler_6(context + 0xc98);
    Script_CallNativeHandler_6(context + 0xce8);
    int32_t data_3 = Script_SpawnNewTask_6();
    int32_t entity_2 = 0;
    entity_2 = *(context + 0x1c);
    return (*(((data_3 * 0x180 + entity_2) << 2) + &g_a96ae0))(context);
}
