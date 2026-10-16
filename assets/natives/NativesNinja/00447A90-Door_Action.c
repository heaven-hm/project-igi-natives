#include "00447A90-Door_Action.h"
/* 0x00447a90 Door_Action full linked: callers=0 callees=15 */
int32_t sub_447a90(void* a1)

{
    char result = *(a1 + 0x19e);

    if (result)
        return result;

    *(a1 + 0x19e) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isLocked");
    SymbolRegister_Bool8(&var_80, a1 + 0x198);
    void* var_e4_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isOpen");
    SymbolRegister_Bool8(&var_80, a1 + 0x199);
    void* var_f8_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isClosed");
    SymbolRegister_Bool8(&var_80, a1 + 0x19a);
    void* var_c8_2 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isLastClosed");
    SymbolRegister_Bool8(&var_80, a1 + 0x19c);
    void* var_dc_2 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isLastOpen");
    SymbolRegister_Bool8(&var_80, a1 + 0x19b);
    void* var_f0_2 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isPicked");
    SymbolRegister_Bool8(&var_80, a1 + 0x19d);
    void* var_104_2 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nDoorOpenTicks");
    return SymbolRegister_Int32(&var_80, a1 + 0x298);
}
