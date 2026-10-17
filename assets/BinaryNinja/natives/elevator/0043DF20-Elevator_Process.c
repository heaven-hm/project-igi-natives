// Original IGI.EXE function: Elevator_Process (VA 0x0043DF20; static CFG gate PASS, CFG score 1.000).
#include "Elevator_Process.h"
int32_t Elevator_Process(void* context)

{
    char result = *(context + 0x1c0);

    if (result)
        return result;

    *(context + 0x1c0) = 1;
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d8_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.vFloor");
    SymbolRegister_Real32(&item_80, context + 0x1a0);
    void* item_ec_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.vLastFloor");
    SymbolRegister_Real32(&item_80, context + 0x1a8);
    int32_t i = 0;
    void* context_1 = context + 0x1b0;

    do
    {
        int32_t i_1 = i;
        void* item_d4_2 = &item_c0;
        Game_DataSymbolLoad(&item_80, "%s.isWantedFloor%d");
        SymbolRegister_Bool8(&item_80, context_1);
        i += 1;
        context_1 += 1;
    } while (i < 0xa);

    void* item_d0_2 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nInactive");
    SymbolRegister_Int16(&item_80, context + 0x1bc);
    void* item_e4_3 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nWantedFloor");
    SymbolRegister_Int16(&item_80, context + 0x19c);
    void* item_f8_2 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isMoving");
    SymbolRegister_Bool8(&item_80, context + 0x5d6);
    void* item_10c_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isStart");
    SymbolRegister_Bool8(&item_80, context + 0x5d7);
    void* item_d8_3 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isStop");
    return SymbolRegister_Bool8(&item_80, context + 0x5d8);
}
