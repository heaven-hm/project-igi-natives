#include "gi_platform.h"
#include "0043B250-Radio_Process.h"
int32_t Radio_Process(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x241));

    if (result)
    {
        ((int(*)())(uintptr_t)(*(((FX_TrailUpdate() + Script_SpawnNewTask_6() * 0x180) << 2) + &g_a96ae0)))(a1);
        char v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d8_1 = &v_c0;
        char v_80;
        Game_DataSymbolLoad(&v_80, "%s.isOn");
        result = Game_DataSymbolRemoveThunk(&v_80);
        (*(int32_t*)(uintptr_t)(a1 + 0x241)) = 0;
    }

    return result;
}
