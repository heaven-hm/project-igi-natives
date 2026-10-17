// Original IGI.EXE function: MoveRigidObj_OnEvent (VA 0x0051F9E0; static CFG gate PASS, CFG score 1.000).
#include "MoveRigidObj_OnEvent.h"
int32_t MoveRigidObj_OnEvent(void* context)

{
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0 = &item_c0;
    *(context + 0x204) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.vValue");
    int32_t result = Game_DataSymbolRemoveThunk(&item_80);
    *(context + 0x204) = 0;
    return result;
}
