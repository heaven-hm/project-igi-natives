#include "LevelFlow_Update.h"
int32_t LevelFlow_Update(void* a1)

{
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0 = &v_c0;
    *(a1 + 0x78) = 0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isComplete");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_e0 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isFailed");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_f0 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nTick");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_100 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.eDifficulty");
    Game_DataSymbolRemoveThunk(&v_80);
    Game_DataSymbolRemoveThunk("Key0.isPressed");
    Game_DataSymbolRemoveThunk("Key1.isPressed");
    Game_DataSymbolRemoveThunk("Key2.isPressed");
    Game_DataSymbolRemoveThunk("Key3.isPressed");
    Game_DataSymbolRemoveThunk("Key4.isPressed");
    Game_DataSymbolRemoveThunk("Key5.isPressed");
    Game_DataSymbolRemoveThunk("Key6.isPressed");
    Game_DataSymbolRemoveThunk("Key7.isPressed");
    Game_DataSymbolRemoveThunk("Key8.isPressed");
    int32_t result = Game_DataSymbolRemoveThunk("Key9.isPressed");
    *(a1 + 0x78) = 0;
    return result;
}
