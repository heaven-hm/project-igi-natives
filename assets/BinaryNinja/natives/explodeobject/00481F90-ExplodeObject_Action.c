#include "ExplodeObject_Action.h"
int32_t ExplodeObject_Action(void* a1)

{
    char result = *(a1 + 0x191);

    if (result)
        return result;

    *(a1 + 0x191) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isExploded");
    return SymbolRegister_Bool8(&v_80, a1 + 0x190);
}
