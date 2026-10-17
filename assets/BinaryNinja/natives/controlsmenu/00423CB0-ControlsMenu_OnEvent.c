// Original IGI.EXE function: ControlsMenu_OnEvent (VA 0x00423CB0; static CFG gate PASS, CFG score 1.000).
#include "ControlsMenu_OnEvent.h"
int32_t ControlsMenu_OnEvent(void* a1)

{
    char result = *(a1 + 0x358);

    if (!result)
    {
        void v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        void v_80;
        Game_DataSymbolLoad(&v_80, "%s.nOffset");
        SymbolRegister_Int32(&v_80, a1 + 0x354);
        void* v_e4_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isReset");
        result = SymbolRegister_Bool8(&v_80, a1 + 0x35a);
        *(a1 + 0x358) = 1;
    }

    return result;
}
