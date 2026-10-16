#include "004890F0-LevelFlow_Update.h"
/* 0x004890f0 LevelFlow_Update full linked: callers=0 callees=19 */
int32_t sub_4890f0(void* a1)

{
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0 = &var_c0;
    *(a1 + 0x78) = 0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isComplete");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_e0 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isFailed");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_f0 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nTick");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_100 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.eDifficulty");
    Game_DataSymbolRemoveThunk(&var_80);
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
