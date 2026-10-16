#include "gi_platform.h"
#include "00440EA0-SCameraControl_Setup.h"
int32_t SCameraControl_Setup(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x2a1));

    if (result)
        return result;

    (*(int32_t*)(uintptr_t)(a1 + 0x2a1)) = 1;
    ((int(*)())(uintptr_t)(*(((Env_UpdateCameraLens_3() + Script_FormatString_5() * 0x180) << 2) + &g_a96ae0)))(a1);
    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d8_1 = &v_c0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.isDetection");
    return SymbolRegister_Bool8(&v_80, a1 + 0x2a0);
}
