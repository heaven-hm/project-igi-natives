#include "Generator_Setup.h"
int32_t Generator_Setup(void* a1)

{
    char result = *(a1 + 0x23d);

    if (result)
        return result;

    *(a1 + 0x23d) = 1;
    (*(((FX_TrailUpdate() + Script_FormatString_5() * 0x180) << 2) + &g_a96ae0))(a1);
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d8_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isOn");
    SymbolRegister_Bool8(&v_80, a1 + 0x23c);
    void* v_ec_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nBackupTimer");
    return SymbolRegister_Int16(&v_80, a1 + 0x2b8);
}
