#include "gi_platform.h"
#include "00422190-MenuScreen_Update.h"
void* MenuScreen_Update(void* a1)

{
    void* result = (*(int32_t*)(uintptr_t)(a1 + 0x1a0));

    if (result)
        return result;

    (*(int32_t*)(uintptr_t)(a1 + 0x1a0)) = 1;
    char v_100;
    Script_ParseEnumString_6(&v_100, a1);
    void* v_110_1 = &v_100;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.nUserData");
    return SymbolRegister_Int32(&v_80, a1 + 0x19c);
}
