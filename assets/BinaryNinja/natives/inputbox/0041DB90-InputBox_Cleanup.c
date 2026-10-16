#include "InputBox_Cleanup.h"
int32_t InputBox_Cleanup(void* a1)

{
    char result = *(a1 + 0x194);

    if (result)
    {
        void v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        void v_80;
        Game_DataSymbolLoad(&v_80, "%s.zData");
        result = Game_DataSymbolRemoveThunk(&v_80);
        *(a1 + 0x194) = 0;
    }

    return result;
}
