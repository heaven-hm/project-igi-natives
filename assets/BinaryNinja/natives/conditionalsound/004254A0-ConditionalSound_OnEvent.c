#include "ConditionalSound_OnEvent.h"
int32_t ConditionalSound_OnEvent(void* a1)

{
    char result = *(a1 + 0xb4);

    if (!result)
        return result;

    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    *(a1 + 0xb4) = 0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isRun");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_e0_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isLastRun");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_f0_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isPlaying");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_100_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nPlayTick");
    return Game_DataSymbolRemoveThunk(&v_80);
}
