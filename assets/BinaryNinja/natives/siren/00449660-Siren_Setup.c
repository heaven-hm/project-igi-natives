#include "Siren_Setup.h"
int32_t Siren_Setup(void* a1)

{
    char result = *(a1 + 0x2d2);

    if (result)
        return result;

    *(a1 + 0x2d2) = 1;
    (*(((FX_TrailUpdate() + Script_FormatString_5() * 0x180) << 2) + &g_a96ae0))(a1);
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d8_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isOn");
    SymbolRegister_Bool8(&v_80, a1 + 0x2d0);
    void* v_ec_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isLastOn");
    return SymbolRegister_Bool8(&v_80, a1 + 0x2d1);
}
