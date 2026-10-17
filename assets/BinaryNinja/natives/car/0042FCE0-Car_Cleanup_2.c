// Original IGI.EXE function: Car_Cleanup_2 (VA 0x0042FCE0; static CFG gate PASS, CFG score 1.000).
#include "Car_Cleanup_2.h"
int32_t Car_Cleanup_2(void* context)

{
    char result = *(context + 0x2ed4);

    if (result)
        return result;

    *(context + 0x2ed4) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isExploded");
    return SymbolRegister_Bool8(&item_80, context + 0x2ed5);
}
