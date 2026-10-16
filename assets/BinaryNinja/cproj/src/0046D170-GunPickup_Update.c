#include "gi_platform.h"
#include "0046D170-GunPickup_Update.h"
int32_t GunPickup_Update(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x128));

    if (result)
        return result;

    (*(int32_t*)(uintptr_t)(a1 + 0x128)) = 1;
    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.isPickedUp");
    return SymbolRegister_Bool8(&v_80, a1 + 0x129);
}
