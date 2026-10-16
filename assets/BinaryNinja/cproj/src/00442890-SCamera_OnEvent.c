#include "gi_platform.h"
#include "00442890-SCamera_OnEvent.h"
int32_t SCamera_OnEvent(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x171));

    if (result)
        return result;

    (*(int32_t*)(uintptr_t)(a1 + 0x171)) = 1;
    char v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d0_1 = &v_c0;
    char v_80;
    Game_DataSymbolLoad(&v_80, "%s.isDetection");
    SymbolRegister_Bool8(&v_80, a1 + 0x169);
    void* v_e4_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isLastDetection");
    SymbolRegister_Bool8(&v_80, a1 + 0x16a);
    void* v_f8_1 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.nDetectionTime");
    SymbolRegister_Int32(&v_80, a1 + 0x16c);
    void* v_c8_2 = &v_c0;
    Game_DataSymbolLoad(&v_80, "%s.isExploded");
    return SymbolRegister_Bool8(&v_80, a1 + 0x170);
}
