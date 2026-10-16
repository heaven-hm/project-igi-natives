#include "gi_platform.h"
#include "00440A40-AlarmControl_Setup.h"
int32_t AlarmControl_Setup(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x2a8));

    if (result)
        return result;

    (*(int32_t*)(uintptr_t)(a1 + 0x2a8)) = 1;
    ((int(*)())(uintptr_t)(*(((Env_UpdateCameraLens_3() + Script_FormatString_5() * 0x180) << 2) + &g_a96ae0)))(a1);
    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d8_1 = &v_c0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.isTrigger");
    SymbolRegister_Bool8(&v_80, a1 + 0x2a0);
    void* v_ec_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isAlarm");
    SymbolRegister_Bool8(&v_80, a1 + 0x2a1);
    void* v_100_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nTriggerLastTick");
    return SymbolRegister_Int16(&v_80, a1 + 0x2a4);
}
