#include "AlarmLight_Action.h"
int32_t AlarmLight_Action(void* a1)

{
    char result = *(a1 + 0x1a2);

    if (!result)
        return result;

    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    *(a1 + 0x1a2) = 0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isOn");
    Game_DataSymbolRemoveThunk(&v_80);
    void* v_e0_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isDestroyed");
    return Game_DataSymbolRemoveThunk(&v_80);
}
