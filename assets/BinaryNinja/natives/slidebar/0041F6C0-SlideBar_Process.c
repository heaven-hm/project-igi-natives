#include "SlideBar_Process.h"
int32_t SlideBar_Process(void* a1)

{
    Script_CallNativeHandler_6(a1 + 0xb8);
    Script_CallNativeHandler_6(a1 + 0x108);
    Script_CallNativeHandler_6(a1 + 0x158);
    Script_CallNativeHandler_6(a1 + 0x1a8);
    Script_CallNativeHandler_6(a1 + 0x1f8);
    Menu_FormatScreen_3(*(a1 + 0x98));
    Menu_FormatScreen_3(*(a1 + 0x9c));
    int32_t valA3 = Script_SpawnNewTask_6();
    int32_t tmpD2 = 0;
    tmpD2 = *(a1 + 0x1c);
    return (*(((valA3 * 0x180 + tmpD2) << 2) + &g_a96ae0))(a1);
}
