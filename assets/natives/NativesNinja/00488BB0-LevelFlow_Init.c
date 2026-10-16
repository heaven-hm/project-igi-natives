#include "00488BB0-LevelFlow_Init.h"
/* 0x00488bb0 LevelFlow_Init full linked: callers=1 callees=35 */
void* sub_488bb0()

{
    g_5c8ab4 = sub_4ceba0("306_01_1");
    int32_t var_12c = 0;
    int16_t eax_2 = TaskType_Register("LevelFlow", 0x128, sub_5034d0(), 0);
    g_5c8ab8 = eax_2;
    QTask_RemoveEventCallback(eax_2, 0, sub_488ed0);
    QTask_TriggerEvent(g_5c8ab8, 1, sub_489290);
    QTask_TriggerEvent(g_5c8ab8, 2, sub_489200);
    int32_t eax_4 = sub_4f1a60();
    QTask_RemoveEventCallback(g_5c8ab8, eax_4, sub_489280);
    int32_t eax_5 = sub_4f1a70();
    int32_t var_130_1 = eax_5;
    eax_5 = g_5c8ab8;
    QTask_RemoveEventCallback(eax_5, var_130_1, sub_489400);
    int32_t eax_6 = sub_4f1210();
    QTask_TriggerEvent(g_5c8ab8, eax_6, sub_488f90);
    int32_t eax_7 = sub_4f1220();
    QTask_TriggerEvent(g_5c8ab8, eax_7, sub_4890f0);
    QTask_RemoveEventCallback(g_5c8ab8, 7, 0);
    g_5c8aa4 = sub_4f1950(7);
    int32_t eax_10 = sub_4f1010();
    void var_128;
    void var_108;
    sub_4f1a80(g_5c8aa4, &var_128, &var_108, eax_10, 7, 0);
    int32_t eax_12 = sub_4f0f70();
    void var_f0;
    sub_4f1a80(g_5c8aa4, &var_128, &var_f0, eax_12, 7, 0);
    sub_4f1cb0();
    int32_t eax_14 = sub_4f0f50();
    void var_bc;
    sub_4f1a80(g_5c8aa4, &var_128, &var_bc, eax_14, 7, &g_a76be8);
    int32_t eax_16 = sub_4f0fc0();
    void var_ac;
    sub_4f1a80(g_5c8aa4, &var_128, &var_ac, eax_16, 7, 0);
    int32_t eax_18 = sub_4f0fc0();
    void var_5c;
    sub_4f1a80(g_5c8aa4, &var_128, &var_5c, eax_18, 7, 0);
    int32_t eax_20 = sub_4f1000();
    void var_b8;
    sub_4f1a80(g_5c8aa4, &var_128, &var_b8, eax_20, 7, 0);
    int32_t eax_22 = sub_4f0f50();
    void var_b4;
    sub_4f1a80(g_5c8aa4, &var_128, &var_b4, eax_22, 7, 0);
    TaskType_Set("TASKTYPE_LEVELFLOW", *g_5c8ab8);
    Game_DefineOptions("LevelFlow_GetBreakCutSceneKey", LevelFlow_GetBreakCutSceneKey, 0, 0);
    Game_DefineOptions("LevelFlow_LevelFailed", LevelFlow_LevelFailed, 0, 0);
    return Game_DefineOptions("LevelFlow_IsCountryUSA", LevelFlow_IsCountryUSA, 0, 0);
}
