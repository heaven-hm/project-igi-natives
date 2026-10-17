// Original IGI.EXE function: Human_Cleanup_7 (VA 0x00460850; static CFG gate PASS, CFG score 1.000).
#include "Human_Cleanup_7.h"
int32_t Human_Cleanup_7(void* context)

{
    char result = *(context + 0xcf4);

    if (result)
        return result;

    *(context + 0xcf4) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isDead");
    SymbolRegister_Bool8(&item_80, context + 0xcf5);
    void* item_e4_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.eTeam");
    return SymbolRegister_Int32(&item_80, context + 0xfc);
}
