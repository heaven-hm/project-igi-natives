// Original IGI.EXE function: HumanAI_Action (VA 0x00450770; static CFG gate PASS, CFG score 1.000).
#include "HumanAI_Action.h"
int32_t HumanAI_Action(void* context)

{
    char result = *(context + 0x3ab8);

    if (result)
        return result;

    *(context + 0x3ab8) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isDetection");
    return SymbolRegister_Bool8(&item_80, context + 0x3ab9);
}
