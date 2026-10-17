// Original IGI.EXE function: MoveRigidObj_Update (VA 0x0051F980; static CFG gate PASS, CFG score 1.000).
#include "MoveRigidObj_Update.h"
int32_t MoveRigidObj_Update(void* context)

{
    char result = *(context + 0x204);

    if (result)
        return result;

    *(context + 0x204) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.vValue");
    return SymbolRegister_Real32(&item_80, context + 0x1a0);
}
