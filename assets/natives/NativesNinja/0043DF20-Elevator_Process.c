#include "0043DF20-Elevator_Process.h"
/* 0x0043df20 Elevator_Process full linked: callers=0 callees=17 */
int32_t Elevator_Process(void* a1)

{
    char result = *(a1 + 0x1c0);

    if (result)
        return result;

    *(a1 + 0x1c0) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d8_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.vFloor");
    SymbolRegister_Real32(&var_80, a1 + 0x1a0);
    void* var_ec_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.vLastFloor");
    SymbolRegister_Real32(&var_80, a1 + 0x1a8);
    int32_t i = 0;
    void* ebx_1 = a1 + 0x1b0;

    do
    {
        int32_t i_1 = i;
        void* var_d4_2 = &var_c0;
        Game_DataSymbolLoad(&var_80, "%s.isWantedFloor%d");
        SymbolRegister_Bool8(&var_80, ebx_1);
        i += 1;
        ebx_1 += 1;
    } while (i < 0xa);

    void* var_d0_2 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nInactive");
    SymbolRegister_Int16(&var_80, a1 + 0x1bc);
    void* var_e4_3 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nWantedFloor");
    SymbolRegister_Int16(&var_80, a1 + 0x19c);
    void* var_f8_2 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isMoving");
    SymbolRegister_Bool8(&var_80, a1 + 0x5d6);
    void* var_10c_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isStart");
    SymbolRegister_Bool8(&var_80, a1 + 0x5d7);
    void* var_d8_3 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isStop");
    return SymbolRegister_Bool8(&var_80, a1 + 0x5d8);
}
