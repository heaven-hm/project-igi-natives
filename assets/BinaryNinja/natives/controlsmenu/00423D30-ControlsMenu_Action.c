// Original IGI.EXE function: ControlsMenu_Action (VA 0x00423D30; static CFG gate PASS, CFG score 1.000).
#include "ControlsMenu_Action.h"
int32_t ControlsMenu_Action(void* a1)

{
    char result = *(a1 + 0x358);

    if (result)
    {
        void v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        void v_80;
        Game_DataSymbolLoad(&v_80, "%s.nOffset");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_e0_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isReset");
        result = Game_DataSymbolRemoveThunk(&v_80);
        *(a1 + 0x358) = 0;
    }

    return result;
}
