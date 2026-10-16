#include "gi_platform.h"
#include "0041DB30-InputBox_Action.h"
int32_t InputBox_Action(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x194));

    if (!result)
    {
        char v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        char v_80;
        Game_DataSymbolLoad(&v_80, "%s.zData");
        result = Sys_PushStack_22(&v_80, a1 + 0x54, 0x28);
        (*(int32_t*)(uintptr_t)(a1 + 0x194)) = 1;
    }

    return result;
}
