// Original IGI.EXE function: ListBox_Process (VA 0x0041E9D0; static CFG gate PASS, CFG score 1.000).
#include "ListBox_Process.h"
int32_t ListBox_Process(void* a1)

{
    int32_t* valA = *(a1 + 0xbf4);

    if (valA)
    {
        Sys_ReadFileBlock_18(valA);
        *(a1 + 0xbf4) = 0;
    }

    Menu_UpdateLanguage_9(a1);
    Menu_FormatScreen_3(*(a1 + 0xd4));
    Menu_FormatScreen_3(*(a1 + 0xd8));
    Script_CallNativeHandler_6(a1 + 0xbf8);
    Script_CallNativeHandler_6(a1 + 0xc48);
    Script_CallNativeHandler_6(a1 + 0xc98);
    Script_CallNativeHandler_6(a1 + 0xce8);
    int32_t valA3 = Script_SpawnNewTask_6();
    int32_t objC2 = 0;
    objC2 = *(a1 + 0x1c);
    return (*(((valA3 * 0x180 + objC2) << 2) + &g_a96ae0))(a1);
}
