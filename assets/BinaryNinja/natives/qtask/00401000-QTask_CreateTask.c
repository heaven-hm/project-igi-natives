// Original IGI.EXE function: QTask_CreateTask (VA 0x00401000; static CFG gate PASS, CFG score 1.000).
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
