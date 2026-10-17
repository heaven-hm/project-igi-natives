// Original IGI.EXE function: MenuScreen_Update (VA 0x00422190; static CFG gate PASS, CFG score 1.000).
#include "MenuScreen_Update.h"
void* MenuScreen_Update(void* context)

{
    void* result = *(context + 0x1a0);

    if (result)
        return result;

    *(context + 0x1a0) = 1;
    void item_100;
    Script_ParseEnumString_6(&item_100, context);
    void* item_110_1 = &item_100;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.nUserData");
    return SymbolRegister_Int32(&item_80, context + 0x19c);
}
