// Original IGI.EXE function: GunPickup_Update (VA 0x0046D170; static CFG gate PASS, CFG score 1.000).
#include "GunPickup_Update.h"
int32_t GunPickup_Update(void* a1)

{
    char result = *(a1 + 0x128);

    if (result)
        return result;

    *(a1 + 0x128) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isPickedUp");
    return SymbolRegister_Bool8(&v_80, a1 + 0x129);
}
