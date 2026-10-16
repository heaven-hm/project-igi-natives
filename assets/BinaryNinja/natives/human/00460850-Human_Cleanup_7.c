#include "Human_Cleanup_7.h"
int32_t Human_Cleanup_7(void* a1)

{
    char result = *(a1 + 0xcf4);

    if (result)
        return result;

    *(a1 + 0xcf4) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isDead");
    SymbolRegister_Bool8(&v_80, a1 + 0xcf5);
    void* v_e4_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.eTeam");
    return SymbolRegister_Int32(&v_80, a1 + 0xfc);
}
