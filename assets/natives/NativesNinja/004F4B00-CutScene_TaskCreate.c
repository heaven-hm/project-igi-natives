#include "004F4B00-CutScene_TaskCreate.h"
/* 0x004f4b00 CutScene_TaskCreate full linked: callers=1 callees=59 */
int32_t* CutScene_TaskCreate()

// Sig: void* CutScene_TaskCreate(void)
// Note: CREATES the CutScene task during level load: allocates 632-byte
// "CutScene" object via class factory 0x401900, attaches vtable 0x4F4EE0 +
// update cb 0x4F51D0, registers TASKTYPE_CUTSCENE (@0x4F4EB8). TO DELETE
// CUTSCENES: early-return from this function so no CutScene task is ever
// instantiated - flow continues without them. Verified: prologue sub esp,0x278;
// string refs "1721_01_1","CutScene"; corroborated by IGI-MP plugin.
{
    g_a76c60 = 0;
    g_a76c64 = 0x41a00000;
    g_a76c50 = sub_4ceba0("1721_01_1");
    int32_t var_27c = 0;
    int16_t eax_2 = TaskType_Register("CutScene", 0x278, sub_5034d0(), 0);
    g_a76c68 = eax_2;
    QTask_RemoveEventCallback(eax_2, 0, sub_4f4ee0);
    QTask_TriggerEvent(g_a76c68, 1, CutScene_TaskUpdate);
    QTask_TriggerEvent(g_a76c68, 2, sub_4f50e0);
    int32_t eax_4 = sub_4f1a60();
    QTask_RemoveEventCallback(g_a76c68, eax_4, sub_4f51c0);
    int32_t eax_5 = sub_4f1a70();
    int32_t var_280_1 = eax_5;
    eax_5 = g_a76c68;
    QTask_RemoveEventCallback(eax_5, var_280_1, sub_4f63c0);
    int32_t eax_6 = sub_4f1210();
    QTask_TriggerEvent(g_a76c68, eax_6, sub_4f4fb0);
    int32_t eax_7 = sub_4f1220();
    QTask_TriggerEvent(g_a76c68, eax_7, sub_4f5050);
    int32_t eax_8 = sub_4f40d0();
    int32_t var_280_4 = eax_8;
    eax_8 = g_a76c68;
    QTask_RemoveEventCallback(eax_8, var_280_4, sub_4f6500);
    int32_t eax_9 = sub_4f40e0();
    QTask_RemoveEventCallback(g_a76c68, eax_9, sub_4f64f0);
    int32_t eax_10 = sub_4f4110();
    QTask_RemoveEventCallback(g_a76c68, eax_10, sub_4f64e0);
    int32_t eax_11 = sub_4f4140();
    int32_t var_280_7 = eax_11;
    eax_11 = g_a76c68;
    QTask_RemoveEventCallback(eax_11, var_280_7, sub_4d3710);
    int32_t eax_12 = sub_4f4130();
    QTask_RemoveEventCallback(g_a76c68, eax_12, sub_4d3710);
    int32_t eax_13 = sub_4f4120();
    QTask_RemoveEventCallback(g_a76c68, eax_13, sub_4d3710);
    int32_t eax_14 = sub_4cea20();
    int32_t var_280_10 = eax_14;
    eax_14 = g_a76c68;
    QTask_RemoveEventCallback(eax_14, var_280_10, sub_4f6520);
    g_a76c58 = sub_4f1950(0xe);
    int32_t eax_16 = sub_4f1010();
    void var_278;
    void var_258;
    sub_4f1a80(g_a76c58, &var_278, &var_258, eax_16, 7, 0);
    int32_t eax_18 = sub_4f0f70();
    void var_240;
    sub_4f1a80(g_a76c58, &var_278, &var_240, eax_18, 7, 0);
    int32_t eax_20 = sub_4f0fc0();
    void var_1fc;
    sub_4f1a80(g_a76c58, &var_278, &var_1fc, eax_20, 7, 0);
    int32_t eax_22 = sub_4f0fc0();
    void var_1ac;
    sub_4f1a80(g_a76c58, &var_278, &var_1ac, eax_22, 7, 0);
    int32_t eax_24 = sub_4f0fc0();
    void var_15c;
    sub_4f1a80(g_a76c58, &var_278, &var_15c, eax_24, 7, 0);
    int32_t eax_26 = sub_4f0f50();
    void var_210;
    sub_4f1a80(g_a76c58, &var_278, &var_210, eax_26, 7, 0);
    int32_t eax_28 = sub_4f1000();
    void var_218;
    sub_4f1a80(g_a76c58, &var_278, &var_218, eax_28, 7, 0);
    int32_t eax_30 = sub_4f0f50();
    void var_20c;
    sub_4f1a80(g_a76c58, &var_278, &var_20c, eax_30, 7, 0);
    int32_t eax_32 = sub_4f0f50();
    void var_208;
    sub_4f1a80(g_a76c58, &var_278, &var_208, eax_32, 7, 0);
    int32_t eax_34 = sub_4f0f50();
    void var_204;
    sub_4f1a80(g_a76c58, &var_278, &var_204, eax_34, 7, &g_a76c60);
    int32_t eax_36 = sub_4f0f50();
    void var_200;
    sub_4f1a80(g_a76c58, &var_278, &var_200, eax_36, 7, &g_a76c60);
    int32_t eax_38 = sub_4f0f50();
    void var_68;
    sub_4f1a80(g_a76c58, &var_278, &var_68, eax_38, 7, &g_a76c60);
    int32_t eax_40 = sub_4f0fc0();
    void var_10c;
    sub_4f1a80(g_a76c58, &var_278, &var_10c, eax_40, 7, 0);
    int32_t eax_42 = sub_4f0fc0();
    void var_bc;
    sub_4f1a80(g_a76c58, &var_278, &var_bc, eax_42, 7, 0);
    TaskType_Set("TASKTYPE_CUTSCENE", *g_a76c68);
    return sub_4b4720(0xa76c70);
}
