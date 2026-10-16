#include "005284A0-AnimCam_Init.h"
/* 0x005284a0 AnimCam_Init full linked: callers=1 callees=42 */
int32_t* sub_5284a0()

{
    int32_t var_224 = 0;
    int16_t eax_1 = TaskType_Register("AnimCam", 0x220, sub_530260(), 0);
    g_54f198 = eax_1;
    QTask_TriggerEvent(eax_1, 1, sub_52a180);
    QTask_TriggerEvent(g_54f198, 2, sub_4d3710);
    QTask_RemoveEventCallback(g_54f198, 0, sub_528760);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_54f198, eax_3, sub_528cf0);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_228_1 = eax_4;
    eax_4 = g_54f198;
    QTask_RemoveEventCallback(eax_4, var_228_1, sub_4d3710);
    int32_t eax_5 = sub_4f40d0();
    QTask_RemoveEventCallback(g_54f198, eax_5, sub_528d00);
    int32_t eax_6 = sub_4f40e0();
    QTask_RemoveEventCallback(g_54f198, eax_6, sub_529a70);
    int32_t eax_7 = sub_4f4110();
    int32_t var_228_4 = eax_7;
    eax_7 = g_54f198;
    QTask_RemoveEventCallback(eax_7, var_228_4, sub_52a1c0);
    int32_t eax_8 = sub_4f4120();
    QTask_RemoveEventCallback(g_54f198, eax_8, sub_52a1d0);
    int32_t eax_9 = sub_4f4130();
    QTask_RemoveEventCallback(g_54f198, eax_9, sub_52a1f0);
    int32_t eax_10 = sub_4f4140();
    int32_t var_228_7 = eax_10;
    eax_10 = g_54f198;
    QTask_RemoveEventCallback(eax_10, var_228_7, sub_529aa0);
    g_a84388 = sub_4f1950(0xa);
    int32_t eax_12 = sub_4f0fa0();
    void var_220;
    void var_148;
    sub_4f1a80(g_a84388, &var_220, &var_148, eax_12, 7, 0);
    int32_t eax_14 = sub_4f0fa0();
    void var_144;
    sub_4f1a80(g_a84388, &var_220, &var_144, eax_14, 7, 0);
    int32_t eax_16 = sub_4f0fa0();
    void var_140;
    sub_4f1a80(g_a84388, &var_220, &var_140, eax_16, 7, 0);
    int32_t eax_18 = sub_4f0fa0();
    void var_13c;
    sub_4f1a80(g_a84388, &var_220, &var_13c, eax_18, 7, 0);
    int32_t eax_20 = sub_4f0fa0();
    void var_138;
    sub_4f1a80(g_a84388, &var_220, &var_138, eax_20, 7, 0);
    int32_t eax_22 = sub_4f0fa0();
    void var_134;
    sub_4f1a80(g_a84388, &var_220, &var_134, eax_22, 7, 0);
    int32_t eax_24 = sub_4f0fa0();
    void var_130;
    sub_4f1a80(g_a84388, &var_220, &var_130, eax_24, 7, 0);
    int32_t eax_26 = sub_4f0fa0();
    void var_12c;
    sub_4f1a80(g_a84388, &var_220, &var_12c, eax_26, 7, 0);
    int32_t eax_28 = sub_4f0fa0();
    void var_128;
    sub_4f1a80(g_a84388, &var_220, &var_128, eax_28, 7, 0);
    int32_t eax_30 = sub_4f0fa0();
    void var_124;
    return sub_4f1a80(g_a84388, &var_220, &var_124, eax_30, 7, 0);
}
