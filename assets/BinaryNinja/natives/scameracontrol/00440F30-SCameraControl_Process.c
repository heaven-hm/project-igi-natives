// IGI native provenance: SCameraControl_Process - 0x00440F30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00440F30-SCameraControl_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
