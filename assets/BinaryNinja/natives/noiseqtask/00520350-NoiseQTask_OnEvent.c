// Original IGI.EXE function: NoiseQTask_OnEvent (VA 0x00520350; static CFG gate PASS, CFG score 1.000).
#include "NoiseQTask_OnEvent.h"
int32_t NoiseQTask_OnEvent(void* context)

{
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0 = &item_c0;
    *(context + 0x128) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.vValue");
    int32_t result = Game_DataSymbolRemoveThunk(&item_80);
    *(context + 0x128) = 0;
    return result;
}
