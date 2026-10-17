// Original IGI.EXE function: CutScene_OnEvent (VA 0x004F4FB0; static CFG gate PASS, CFG score 1.000).
#include "CutScene_OnEvent.h"
int32_t CutScene_OnEvent(void* context)

{
    char result = *(context + 0x62);

    if (result)
        return result;

    *(context + 0x62) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isRun");
    SymbolRegister_Bool8(&item_80, context + 0x60);
    void* item_e4_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isFinished");
    SymbolRegister_Bool8(&item_80, context + 0x61);
    void* item_f8_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nTick");
    return SymbolRegister_Int16(&item_80, context + 0x64);
}
