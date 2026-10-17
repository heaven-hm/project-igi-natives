// Original IGI.EXE function: ListBox_Cleanup (VA 0x0041F1E0; static CFG gate PASS, CFG score 1.000).
#include "ListBox_Cleanup.h"
int32_t ListBox_Cleanup(void* a1)

{
    char result = *(a1 + 0xbf0);

    if (result)
        return result;

    *(a1 + 0xbf0) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.nActiveID");
    return SymbolRegister_Int32(&v_80, a1 + 0xbe8);
}
