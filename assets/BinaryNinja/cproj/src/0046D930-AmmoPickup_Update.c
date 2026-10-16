#include "gi_platform.h"
#include "0046D930-AmmoPickup_Update.h"
int32_t AmmoPickup_Update(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x108));

    if (!result)
        return result;

    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    (*(int32_t*)(uintptr_t)(a1 + 0x108)) = 0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.isPickedUp");
    return Game_DataSymbolRemoveThunk(&v_80);
}
