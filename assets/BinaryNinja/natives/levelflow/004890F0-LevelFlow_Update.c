// IGI native provenance: LevelFlow_Update - 0x004890F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004890F0-LevelFlow_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "LevelFlow_Update.h"
int32_t LevelFlow_Update(void* context)

{
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d0 = &item_c0;
    *(context + 0x78) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isComplete");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_e0 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.isFailed");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_f0 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.nTick");
    Game_DataSymbolRemoveThunk(&item_80);
    void* item_100 = &item_c0;
    Game_DataSymbolLoad(&item_80, "%s.eDifficulty");
    Game_DataSymbolRemoveThunk(&item_80);
    Game_DataSymbolRemoveThunk("Key0.isPressed");
    Game_DataSymbolRemoveThunk("Key1.isPressed");
    Game_DataSymbolRemoveThunk("Key2.isPressed");
    Game_DataSymbolRemoveThunk("Key3.isPressed");
    Game_DataSymbolRemoveThunk("Key4.isPressed");
    Game_DataSymbolRemoveThunk("Key5.isPressed");
    Game_DataSymbolRemoveThunk("Key6.isPressed");
    Game_DataSymbolRemoveThunk("Key7.isPressed");
    Game_DataSymbolRemoveThunk("Key8.isPressed");
    int32_t result = Game_DataSymbolRemoveThunk("Key9.isPressed");
    *(context + 0x78) = 0;
    return result;
}
