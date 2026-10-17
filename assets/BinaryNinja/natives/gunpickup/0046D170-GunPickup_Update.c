// Original IGI.EXE function: GunPickup_Update (VA 0x0046D170; static CFG gate PASS, CFG score 1.000).
#include "GunPickup_Update.h"
int32_t GunPickup_Update(void* context)

{
    char result = *(context + 0x128);

    if (result)
        return result;

    *(context + 0x128) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isPickedUp");
    return SymbolRegister_Bool8(&item_80, context + 0x129);
}
