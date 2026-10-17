// Original IGI.EXE function: ListBox_Cleanup (VA 0x0041F1E0; static CFG gate PASS, CFG score 1.000).
#include "ListBox_Cleanup.h"
int32_t ListBox_Cleanup(void* context)

{
    char result = *(context + 0xbf0);

    if (result)
        return result;

    *(context + 0xbf0) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.nActiveID");
    return SymbolRegister_Int32(&item_80, context + 0xbe8);
}
