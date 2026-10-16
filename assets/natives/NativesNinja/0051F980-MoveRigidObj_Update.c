#include "0051F980-MoveRigidObj_Update.h"
/* 0x0051f980 MoveRigidObj_Update full linked: callers=0 callees=3 */
int32_t sub_51f980(void* a1)

{
    char result = *(a1 + 0x204);

    if (result)
        return result;

    *(a1 + 0x204) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.vValue");
    return SymbolRegister_Real32(&var_80, a1 + 0x1a0);
}
