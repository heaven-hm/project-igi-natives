// IGI native provenance: SlideBar_Process - 0x0041F6C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041F6C0-SlideBar_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SlideBar_Process.h"
int32_t SlideBar_Process(void* context)

{
    Script_CallNativeHandler_6(context + 0xb8);
    Script_CallNativeHandler_6(context + 0x108);
    Script_CallNativeHandler_6(context + 0x158);
    Script_CallNativeHandler_6(context + 0x1a8);
    Script_CallNativeHandler_6(context + 0x1f8);
    Menu_FormatScreen_3(*(context + 0x98));
    Menu_FormatScreen_3(*(context + 0x9c));
    int32_t data_3 = Script_SpawnNewTask_6();
    int32_t temp_2 = 0;
    temp_2 = *(context + 0x1c);
    return (*(((data_3 * 0x180 + temp_2) << 2) + &g_a96ae0))(context);
}
