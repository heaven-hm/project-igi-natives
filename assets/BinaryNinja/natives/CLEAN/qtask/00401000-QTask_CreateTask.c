// IGI native provenance: QTask_CreateTask - 0x00401000 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401000-QTask_CreateTask.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_CreateTask.h"
int32_t QTask_CreateTask()

{
    FX_ExplosionSpawn_23(&g_536144);
    FX_ExplosionSpawn_27(1);
    Flow_RunHandler();
    Flow_CreateHandler(nullptr);

    if (FX_ExplosionSpawn_25())
    {
        int32_t data_2 = Flow_SetState(2);
        data_2 = 1;
        return data_2;
    }

    int32_t data_1 = Flow_SetState(4);
    data_1 = 1;
    return data_1;
}
