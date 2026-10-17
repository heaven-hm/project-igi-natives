// Original IGI.EXE function: SCameraControl_Process (VA 0x00440F30; static CFG gate PASS, CFG score 1.000).
#include "SCameraControl_Process.h"
int32_t SCameraControl_Process(void* context)

{
    char result = *(context + 0x2a1);

    if (!result)
        return result;

    (*(((Env_UpdateCameraLens_3() + Script_SpawnNewTask_6() * 0x180) << 2) + &g_a96ae0))(context);
    void item_c0;
    Script_ParseEnumString_6(&item_c0, context);
    void* item_d8_1 = &item_c0;
    *(context + 0x2a1) = 0;
    void item_80;
    Game_DataSymbolLoad(&item_80, "%s.isDetection");
    return Game_DataSymbolRemoveThunk(&item_80);
}
