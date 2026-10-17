// Original IGI.EXE function: Door_Action (VA 0x00447A90; static CFG gate PASS, CFG score 1.000).
#include "Door_Action.h"
int32_t Door_Action(void* a1)

{
    char result = *(a1 + 0x19e);

    if (result)
        return result;

    *(a1 + 0x19e) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isLocked");
    SymbolRegister_Bool8(&v_80, a1 + 0x198);
    void* v_e4_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isOpen");
    SymbolRegister_Bool8(&v_80, a1 + 0x199);
    void* v_f8_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isClosed");
    SymbolRegister_Bool8(&v_80, a1 + 0x19a);
    void* v_c8_2 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isLastClosed");
    SymbolRegister_Bool8(&v_80, a1 + 0x19c);
    void* v_dc_2 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isLastOpen");
    SymbolRegister_Bool8(&v_80, a1 + 0x19b);
    void* v_f0_2 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isPicked");
    SymbolRegister_Bool8(&v_80, a1 + 0x19d);
    void* v_104_2 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nDoorOpenTicks");
    return SymbolRegister_Int32(&v_80, a1 + 0x298);
}
