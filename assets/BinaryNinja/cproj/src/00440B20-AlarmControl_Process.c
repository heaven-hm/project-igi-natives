#include "gi_platform.h"
#include "00440B20-AlarmControl_Process.h"
int32_t AlarmControl_Process(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x2a8));

    if (!result)
        return result;

    ((int(*)())(uintptr_t)(*(((Env_UpdateCameraLens_3() + Script_SpawnNewTask_6() * 0x180) << 2) + &g_a96ae0)))(a1);
    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d8_1 = &v_c0;
    (*(int32_t*)(uintptr_t)(a1 + 0x2a8)) = 0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.isTrigger");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_e8_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isAlarm");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_f8_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nTriggerLastTick");
    return Game_DataSymbolRemoveThunk(&v_80);
}
