#include "00442890-SCamera_OnEvent.h"
/* 0x00442890 SCamera_OnEvent full linked: callers=0 callees=9 */
int32_t sub_442890(void* a1)

{
    char result = *(a1 + 0x171);

    if (result)
        return result;

    *(a1 + 0x171) = 1;
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isDetection");
    SymbolRegister_Bool8(&var_80, a1 + 0x169);
    void* var_e4_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isLastDetection");
    SymbolRegister_Bool8(&var_80, a1 + 0x16a);
    void* var_f8_1 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.nDetectionTime");
    SymbolRegister_Int32(&var_80, a1 + 0x16c);
    void* var_c8_2 = &var_c0;
    Game_DataSymbolLoad(&var_80, "%s.isExploded");
    return SymbolRegister_Bool8(&var_80, a1 + 0x170);
}
