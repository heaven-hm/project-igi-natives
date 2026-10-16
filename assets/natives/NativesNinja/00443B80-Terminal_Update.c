#include "00443B80-Terminal_Update.h"
/* 0x00443b80 Terminal_Update full linked: callers=0 callees=13 */
int32_t sub_443b80(void* a1)

{
    char result = *(a1 + 0x248);

    if (!result)
        return result;

    (*(((sub_481340() + sub_4f1220() * 0x180) << 2) + &g_a96ae0))(a1);
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d8_1 = &var_c0;
    *(a1 + 0x248) = 0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isInUse");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_e8_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isLastInUse");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_f8_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isOn");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_108_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isHacked");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_d0_2 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isHackedThisTick");
    return Game_DataSymbolRemoveThunk(&var_80);
}
