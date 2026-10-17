// Original IGI.EXE function: Car_Cleanup_2 (VA 0x0042FCE0; static CFG gate PASS, CFG score 1.000).
#include "Car_Cleanup_2.h"
int32_t Car_Cleanup_2(void* a1)

{
    char result = *(a1 + 0x2ed4);

    if (result)
        return result;

    *(a1 + 0x2ed4) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isExploded");
    return SymbolRegister_Bool8(&v_80, a1 + 0x2ed5);
}
