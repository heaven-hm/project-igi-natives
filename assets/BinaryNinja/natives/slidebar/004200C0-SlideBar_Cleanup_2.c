// Original IGI.EXE function: SlideBar_Cleanup_2 (VA 0x004200C0; static CFG gate PASS, CFG score 1.000).
#include "SlideBar_Cleanup_2.h"
int32_t SlideBar_Cleanup_2(void* a1)

{
    char result = *(a1 + 0xb5);

    if (result)
        return result;

    *(a1 + 0xb5) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.vValue");
    SymbolRegister_Real32(&v_80, a1 + 0xa0);
    void* v_e4_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nValue");
    return SymbolRegister_Int32(&v_80, a1 + 0xb0);
}
