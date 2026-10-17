// Original IGI.EXE function: MoveRigidObj_OnEvent (VA 0x0051F9E0; static CFG gate PASS, CFG score 1.000).
#include "MoveRigidObj_OnEvent.h"
int32_t MoveRigidObj_OnEvent(void* a1)

{
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0 = &v_c0;
    *(a1 + 0x204) = 0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.vValue");
    int32_t result = Game_DataSymbolRemoveThunk(&v_80);
    *(a1 + 0x204) = 0;
    return result;
}
