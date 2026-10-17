// Original IGI.EXE function: SmoothQTask_Update (VA 0x0051F1F0; static CFG gate PASS, CFG score 1.000).
#include "SmoothQTask_Update.h"
int32_t SmoothQTask_Update(void* context)

{
    char result = *(context + 0xf8);

    if (result)
        return result;

    *(context + 0xf8) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.vRealValue");
    SymbolRegister_Real32(&item_80, context + 0x68);
    void* item_e4_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.vIdealValue");
    return SymbolRegister_Real32(&item_80, context + 0x68);
}
