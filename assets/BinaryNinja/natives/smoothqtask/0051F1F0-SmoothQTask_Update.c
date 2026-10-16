#include "SmoothQTask_Update.h"
int32_t SmoothQTask_Update(void* a1)

{
    char result = *(a1 + 0xf8);

    if (result)
        return result;

    *(a1 + 0xf8) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.vRealValue");
    SymbolRegister_Real32(&v_80, a1 + 0x68);
    void* v_e4_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.vIdealValue");
    return SymbolRegister_Real32(&v_80, a1 + 0x68);
}
