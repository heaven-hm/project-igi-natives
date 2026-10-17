// Original IGI.EXE function: ScrollListBox_Process (VA 0x0041BC00; static CFG gate PASS, CFG score 1.000).
#include "ScrollListBox_Process.h"
int32_t ScrollListBox_Process(void* a1)

{
    Menu_FormatScreen_3(*(a1 + 0x13f4));
    Menu_FormatScreen_3(*(a1 + 0x13f8));
    int32_t* valA1 = *(a1 + 0x12ac);

    if (valA1)
    {
        Sys_ReadFileBlock_18(valA1);
        *(a1 + 0x12ac) = 0;
    }

    Menu_HandleInput_7(a1);
    Script_CallNativeHandler_6(a1 + 0x12b0);
    Script_CallNativeHandler_6(a1 + 0x1300);
    Script_CallNativeHandler_6(a1 + 0x1350);
    Script_CallNativeHandler_6(a1 + 0x13a0);
    int32_t valA3 = Script_SpawnNewTask_6();
    int32_t objC2 = 0;
    objC2 = *(a1 + 0x1c);
    return (*(((valA3 * 0x180 + objC2) << 2) + &g_a96ae0))(a1);
}
