#include "004507D0-HumanAI_Cleanup.h"
/* 0x004507d0 HumanAI_Cleanup full linked: callers=0 callees=3 */
int32_t sub_4507d0(void* a1)

{
    char result = *(a1 + 0x3ab8);

    if (!result)
        return result;

    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d0_1 = &var_c0;
    *(a1 + 0x3ab8) = 0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isDetection");
    return Game_DataSymbolRemoveThunk(&var_80);
}
