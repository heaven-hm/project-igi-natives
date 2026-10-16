#include "Generator_Process.h"
int32_t Generator_Process(void* a1)

{
    char result = *(a1 + 0x23d);

    if (result)
    {
        (*(((FX_TrailUpdate() + Script_SpawnNewTask_6() * 0x180) << 2) + &g_a96ae0))(a1);
        void v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d8_1 = &v_c0;
        void v_80;
        Game_DataSymbolLoad(&v_80, "%s.isOn");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_e8_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.nBackupTimer");
        result = Game_DataSymbolRemoveThunk(&v_80);
        *(a1 + 0x23d) = 0;
    }

    return result;
}
