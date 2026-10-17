// Original IGI.EXE function: AmmoPickup_Update (VA 0x0046D930; static CFG gate PASS, CFG score 1.000).
#include "AmmoPickup_Update.h"
int32_t AmmoPickup_Update(void* a1)

{
    char result = *(a1 + 0x108);

    if (!result)
        return result;

    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    *(a1 + 0x108) = 0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isPickedUp");
    return Game_DataSymbolRemoveThunk(&v_80);
}
