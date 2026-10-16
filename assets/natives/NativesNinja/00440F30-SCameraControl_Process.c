#include "00440F30-SCameraControl_Process.h"
/* 0x00440f30 SCameraControl_Process full linked: callers=0 callees=5 */
int32_t sub_440f30(void* a1)

{
    char result = *(a1 + 0x2a1);

    if (!result)
        return result;

    (*(((sub_443e80() + sub_4f1220() * 0x180) << 2) + &g_a96ae0))(a1);
    void var_c0;
    sub_4f1270(&var_c0, a1);
    void* var_d8_1 = &var_c0;
    *(a1 + 0x2a1) = 0;
    void var_80;
    Game_DataSymbolLoad(&var_80, "%s.isDetection");
    return Game_DataSymbolRemoveThunk(&var_80);
}
