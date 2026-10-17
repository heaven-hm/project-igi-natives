// Original IGI.EXE function: ScrollListBox_Action (VA 0x0041C5A0; static CFG gate PASS, CFG score 1.000).
#include "ScrollListBox_Action.h"
int32_t ScrollListBox_Action(void* context)

{
    char result = *(context + 0x12a8);

    if (result)
        return result;

    *(context + 0x12a8) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.nActiveID");
    return SymbolRegister_Int32(&item_80, context + 0x12a0);
}
