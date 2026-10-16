#include "AreaActivate_Update.h"
int32_t AreaActivate_Update(void* a1)

{
    char result = *(a1 + 0xb5);

    if (result)
        return result;

    *(a1 + 0xb5) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.nActive");
    return SymbolRegister_Int16(&v_80, a1 + 0xa8);
}
