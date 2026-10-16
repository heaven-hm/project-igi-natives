#include "AlarmLight_OnEvent.h"
int32_t AlarmLight_OnEvent(void* a1)

{
    char result = *(a1 + 0x1a2);

    if (result)
        return result;

    *(a1 + 0x1a2) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isOn");
    SymbolRegister_Bool8(&v_80, a1 + 0x1a0);
    void* v_e4_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isDestroyed");
    return SymbolRegister_Bool8(&v_80, a1 + 0x1a1);
}
