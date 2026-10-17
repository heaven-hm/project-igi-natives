// Original IGI.EXE function: StatusMessage_Update_2 (VA 0x00485770; static CFG gate PASS, CFG score 1.000).
#include "StatusMessage_Update_2.h"
int32_t StatusMessage_Update_2(void* a1)

{
    char result = *(a1 + 0x1d5);

    if (result)
        return result;

    *(a1 + 0x1d5) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isSendt");
    SymbolRegister_Bool8(&v_80, a1 + 0x1d4);
    void* v_e4_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nTickSendt");
    SymbolRegister_Int16(&v_80, a1 + 0x1c8);
    void* v_f8_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isFinishedDisplay");
    SymbolRegister_Bool8(&v_80, a1 + 0x1d6);
    void* v_c8_2 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nFinishedDisplay");
    SymbolRegister_Int16(&v_80, a1 + 0x1cc);
    void* v_dc_2 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nTicksSinceFinishedDisplay");
    return SymbolRegister_Int16(&v_80, a1 + 0x1d0);
}
