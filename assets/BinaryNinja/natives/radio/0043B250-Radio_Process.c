// Original IGI.EXE function: Radio_Process (VA 0x0043B250; static CFG gate PASS, CFG score 1.000).
#include "Radio_Process.h"
int32_t Radio_Process(void* a1)

{
    char result = *(a1 + 0x241);

    if (result)
    {
        (*(((FX_TrailUpdate() + Script_SpawnNewTask_6() * 0x180) << 2) + &g_a96ae0))(a1);
        void v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d8_1 = &v_c0;
        void v_80;
        Game_DataSymbolLoad(&v_80, "%s.isOn");
        result = Game_DataSymbolRemoveThunk(&v_80);
        *(a1 + 0x241) = 0;
    }

    return result;
}
