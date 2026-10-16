#include "SCameraControl_Process.h"
int32_t SCameraControl_Process(void* a1)

{
    char result = *(a1 + 0x2a1);

    if (!result)
        return result;

    (*(((Env_UpdateCameraLens_3() + Script_SpawnNewTask_6() * 0x180) << 2) + &g_a96ae0))(a1);
    void v_c0;
    Script_ParseEnumString_6(&v_c0, a1);
    void* v_d8_1 = &v_c0;
    *(a1 + 0x2a1) = 0;
    void v_80;
    Game_DataSymbolLoad(&v_80, "%s.isDetection");
    return Game_DataSymbolRemoveThunk(&v_80);
}
