// Original IGI.EXE function: SlideBar_Cleanup_2 (VA 0x004200C0; static CFG gate PASS, CFG score 1.000).
#include "SlideBar_Cleanup_2.h"
int32_t SlideBar_Cleanup_2(void* context)

{
    char result = *(context + 0xb5);

    if (result)
        return result;

    *(context + 0xb5) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.vValue");
    SymbolRegister_Real32(&item_80, context + 0xa0);
    void* item_e4_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nValue");
    return SymbolRegister_Int32(&item_80, context + 0xb0);
}
