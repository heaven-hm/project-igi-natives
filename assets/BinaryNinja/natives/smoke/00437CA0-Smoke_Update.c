// Original IGI.EXE function: Smoke_Update (VA 0x00437CA0; static CFG gate PASS, CFG score 1.000).
#include "Smoke_Update.h"
int32_t Smoke_Update(void* a1)

{
    char result = *(a1 + 0x20);

    if (result)
        return result;

    *(a1 + 0x20) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.vGenerateFactor");
    return SymbolRegister_Real32(&v_80, a1 + 0x98);
}
