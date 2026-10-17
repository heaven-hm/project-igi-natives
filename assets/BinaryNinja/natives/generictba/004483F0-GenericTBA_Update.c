// Original IGI.EXE function: GenericTBA_Update (VA 0x004483F0; static CFG gate PASS, CFG score 1.000).
#include "GenericTBA_Update.h"
int32_t GenericTBA_Update(void* context)

{
    char result = *(context + 0x248);

    if (!result)
        return result;

    (*(((FX_TrailUpdate() + Script_SpawnNewTask_6() * 0x180) << 2) + &g_a96ae0))(context);
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d8_1 = &item_c0;
    *(context + 0x248) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isInUse");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_e8_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isLastInUse");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_f8_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isOn");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_108_1 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isFinished");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_d0_2 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isFinishedThisTick");
    return Game_DataSymbolRemoveThunk(&item_80);
}
