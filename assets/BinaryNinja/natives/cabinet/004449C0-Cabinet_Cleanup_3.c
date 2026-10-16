#include "Cabinet_Cleanup_3.h"
int32_t Cabinet_Cleanup_3(void* a1)

{
    char result = *(a1 + 0x129);

    if (result)
        return result;

    *(a1 + 0x129) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isInUse");
    SymbolRegister_Bool8(&v_80, a1 + 0x11f);
    void* v_e4_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isLastInUse");
    SymbolRegister_Bool8(&v_80, a1 + 0x120);
    void* v_f8_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isSearched");
    return SymbolRegister_Bool8(&v_80, a1 + 0x128);
}
