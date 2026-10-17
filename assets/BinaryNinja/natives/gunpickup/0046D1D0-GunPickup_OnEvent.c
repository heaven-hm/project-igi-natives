// Original IGI.EXE function: GunPickup_OnEvent (VA 0x0046D1D0; static CFG gate PASS, CFG score 1.000).
#include "GunPickup_OnEvent.h"
int32_t GunPickup_OnEvent(void* a1)

{
    char result = *(a1 + 0x128);

    if (!result)
        return result;

    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    *(a1 + 0x128) = 0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isPickedUp");
    return Game_DataSymbolRemoveThunk(&v_80);
}
