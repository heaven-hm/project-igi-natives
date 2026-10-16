#include "ModelViewBox_OnEvent.h"
int32_t ModelViewBox_OnEvent(void* a1)

{
    char result = *(a1 + 0x54);

    if (result)
    {
        void v_c0;
        Script_ParseEnumString_6(&v_c0, a1);
        void* v_d0_1 = &v_c0;
        void v_80;
        result = Game_DataSymbolLoad(&v_80, "%s.isOn");
        *(a1 + 0x54) = 0;
    }

    return result;
}
