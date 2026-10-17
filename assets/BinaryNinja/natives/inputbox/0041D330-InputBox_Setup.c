// Original IGI.EXE function: InputBox_Setup (VA 0x0041D330; static CFG gate PASS, CFG score 1.000).
#include "InputBox_Setup.h"
int32_t InputBox_Setup(void* context)

{
    int32_t* data_val = *(context + 0x19c);

    if (data_val)
    {
        Sys_ReadFileBlock_18(data_val);
        *(context + 0x19c) = 0;
    }

    Script_CallNativeHandler_6(context + 0xa4);
    Script_CallNativeHandler_6(context + 0xf4);
    Script_CallNativeHandler_6(context + 0x144);
    int32_t data_2 = Script_SpawnNewTask_6();
    int32_t entity_1 = 0;
    entity_1 = *(context + 0x1c);
    return (*(((data_2 * 0x180 + entity_1) << 2) + &g_a96ae0))(context);
}
