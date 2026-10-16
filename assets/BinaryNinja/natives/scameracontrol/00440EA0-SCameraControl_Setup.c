#include "SCameraControl_Setup.h"
int32_t SCameraControl_Setup(void* a1)

{
    char result = *(a1 + 0x2a1);

    if (result)
        return result;

    *(a1 + 0x2a1) = 1;
    (*(((Env_UpdateCameraLens_3() + Script_FormatString_5() * 0x180) << 2) + &g_a96ae0))(a1);
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d8_1 = &v_c0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isDetection");
    return SymbolRegister_Bool8(&v_80, a1 + 0x2a0);
}
