// Original IGI.EXE function: SCameraControl_Setup (VA 0x00440EA0; static CFG gate PASS, CFG score 1.000).
#include "SCameraControl_Setup.h"
int32_t SCameraControl_Setup(void* context)

{
    char result = *(context + 0x2a1);

    if (result)
        return result;

    *(context + 0x2a1) = 1;
    (*(((Env_UpdateCameraLens_3() + Script_FormatString_5() * 0x180) << 2) + &g_a96ae0))(context);
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d8_1 = &item_c0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isDetection");
    return SymbolRegister_Bool8(&item_80, context + 0x2a0);
}
