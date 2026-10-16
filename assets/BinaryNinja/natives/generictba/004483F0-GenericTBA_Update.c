#include "GenericTBA_Update.h"
int32_t GenericTBA_Update(void* a1)

{
    char result = *(a1 + 0x248);

    if (!result)
        return result;

    (*(((FX_TrailUpdate() + Script_SpawnNewTask_6() * 0x180) << 2) + &g_a96ae0))(a1);
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d8_1 = &v_c0;
    *(a1 + 0x248) = 0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isInUse");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_e8_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isLastInUse");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_f8_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isOn");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_108_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isFinished");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_d0_2 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isFinishedThisTick");
    return Game_DataSymbolRemoveThunk(&v_80);
}
