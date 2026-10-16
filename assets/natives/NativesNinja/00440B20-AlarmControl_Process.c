#include "00440B20-AlarmControl_Process.h"
/* 0x00440b20 AlarmControl_Process full linked: callers=0 callees=9 */
int32_t sub_440b20(void* a1)

{
    char result = *(a1 + 0x2a8);

    if (!result)
        return result;

    (*(((sub_443e80() + sub_4f1220() * 0x180) << 2) + &g_a96ae0))(a1);
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d8_1 = &var_c0;
    *(a1 + 0x2a8) = 0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isTrigger");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_e8_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isAlarm");
    Game_DataSymbolRemoveThunk(&var_80);
    void* var_f8_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nTriggerLastTick");
    return Game_DataSymbolRemoveThunk(&var_80);
}
