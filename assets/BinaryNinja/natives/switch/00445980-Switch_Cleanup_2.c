#include "Switch_Cleanup_2.h"
int32_t Switch_Cleanup_2(void* a1)

{
    char result = *(a1 + 0x1cc);

    if (result)
    {
        void v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        *(a1 + 0x1cc) = 0;
        void v_80;
        Game_DataSymbolLoad(&v_80, "%s.isOn");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_e0_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isDestroyed");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_f0_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isPressed");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_100_1 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isLastOn");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_cc_2 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isLastDestroyed");
        Game_DataSymbolRemoveThunk(&v_80);
        void* v_dc_2 = &v_c0;
        Game_DataSymbolLoad(&v_80, "%s.isLastPressed");
        result = Game_DataSymbolRemoveThunk(&v_80);
        *(a1 + 0x1cc) = 0;
    }

    return result;
}
