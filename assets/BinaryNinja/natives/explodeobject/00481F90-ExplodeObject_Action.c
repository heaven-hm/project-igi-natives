// Original IGI.EXE function: ExplodeObject_Action (VA 0x00481F90; static CFG gate PASS, CFG score 1.000).
#include "ExplodeObject_Action.h"
int32_t ExplodeObject_Action(void* context)

{
    char result = *(context + 0x191);

    if (result)
        return result;

    *(context + 0x191) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isExploded");
    return SymbolRegister_Bool8(&item_80, context + 0x190);
}
