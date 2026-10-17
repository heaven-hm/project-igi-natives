// Original IGI.EXE function: InputBox_Action (VA 0x0041DB30; static CFG gate PASS, CFG score 1.000).
#include "InputBox_Action.h"
int32_t InputBox_Action(void* context)

{
    char result = *(context + 0x194);

    if (!result)
    {
        void item_c0;
        Script_ParseEnumString_6(&item_c0, context);
        void* item_d0_1 = &item_c0;
        void item_80;
        Game_DataSymbolLoad(&item_80, "%s.zData");
        result = Sys_PushStack_22(&item_80, context + 0x54, 0x28);
        *(context + 0x194) = 1;
    }

    return result;
}
