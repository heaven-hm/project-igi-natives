// Original IGI.EXE function: Elevator_Process (VA 0x0043DF20; static CFG gate PASS, CFG score 1.000).
#include "Elevator_Process.h"
int32_t Elevator_Process(void* a1)

{
    char result = *(a1 + 0x1c0);

    if (result)
        return result;

    *(a1 + 0x1c0) = 1;
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d8_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.vFloor");
    SymbolRegister_Real32(&v_80, a1 + 0x1a0);
    void* v_ec_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.vLastFloor");
    SymbolRegister_Real32(&v_80, a1 + 0x1a8);
    int32_t i = 0;
    void* ctxB1 = a1 + 0x1b0;

    do
    {
        int32_t i_1 = i;
        void* v_d4_2 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isWantedFloor%d");
        SymbolRegister_Bool8(&v_80, ctxB1);
        i += 1;
        ctxB1 += 1;
    } while (i < 0xa);

    void* v_d0_2 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nInactive");
    SymbolRegister_Int16(&v_80, a1 + 0x1bc);
    void* v_e4_3 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nWantedFloor");
    SymbolRegister_Int16(&v_80, a1 + 0x19c);
    void* v_f8_2 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isMoving");
    SymbolRegister_Bool8(&v_80, a1 + 0x5d6);
    void* v_10c_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isStart");
    SymbolRegister_Bool8(&v_80, a1 + 0x5d7);
    void* v_d8_3 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isStop");
    return SymbolRegister_Bool8(&v_80, a1 + 0x5d8);
}
