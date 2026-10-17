// Original IGI.EXE function: MoveRigidObj_Update (VA 0x0051F980; static CFG gate PASS, CFG score 1.000).
#include "MoveRigidObj_Update.h"
int32_t MoveRigidObj_Update(void* a1)

{
    char result = *(a1 + 0x204);

    if (result)
        return result;

    *(a1 + 0x204) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.vValue");
    return SymbolRegister_Real32(&v_80, a1 + 0x1a0);
}
