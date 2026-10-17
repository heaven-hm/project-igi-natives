// Original IGI.EXE function: AlarmControl_Process (VA 0x00440B20; static CFG gate PASS, CFG score 1.000).
#include "AlarmControl_Process.h"
int32_t AlarmControl_Process(void* context)

{
    char result = *(context + 0x2a8);

    if (!result)
        return result;

    (*(((Env_UpdateCameraLens_3() + Script_SpawnNewTask_6() * 0x180) << 2) + &g_a96ae0))(context);
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d8_1 = &item_c0;
    *(context + 0x2a8) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isTrigger");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_e8_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isAlarm");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_f8_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nTriggerLastTick");
    return Game_DataSymbolRemoveThunk(&item_80);
}
