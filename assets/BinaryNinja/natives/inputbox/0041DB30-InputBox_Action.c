// Original IGI.EXE function: InputBox_Action (VA 0x0041DB30; static CFG gate PASS, CFG score 1.000).
#include "InputBox_Action.h"
int32_t InputBox_Action(void* a1)

{
    char result = *(a1 + 0x194);

    if (!result)
    {
        void v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        void v_80;
        Game_DataSymbolLoad(&v_80, "%s.zData");
        result = Sys_PushStack_22(&v_80, a1 + 0x54, 0x28);
        *(a1 + 0x194) = 1;
    }

    return result;
}
