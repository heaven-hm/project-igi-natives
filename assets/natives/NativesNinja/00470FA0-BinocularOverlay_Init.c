#include "00470FA0-BinocularOverlay_Init.h"
/* 0x00470fa0 BinocularOverlay_Init full linked: callers=1 callees=24 */
int32_t* sub_470fa0()

{
    int32_t var_7c = 0;
    int16_t eax_1 = TaskType_Register("BinocularOverlay", 0x2e00, QTask_OpenEvent_2(), 0);
    g_5401f8 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_471120);
    QTask_TriggerEvent(g_5401f8, 1, sub_4d3710);
    QTask_TriggerEvent(g_5401f8, 2, sub_4713c0);
    int32_t eax_3 = sub_487190();
    QTask_RemoveEventCallback(g_5401f8, eax_3, sub_471440);
    int32_t eax_4 = sub_4e7530();
    int32_t var_80_1 = eax_4;
    eax_4 = g_5401f8;
    QTask_TriggerEvent(eax_4, var_80_1, sub_472400);
    int32_t eax_5 = sub_460bf0();
    QTask_RemoveEventCallback(g_5401f8, eax_5, sub_472440);
    g_5be344 = Level_LoadObjects_6("binoculars.spr");
    int32_t var_7c_1 = 0;
    int16_t eax_8 = TaskType_Register("BinocularOverlayHolder", 0x78, QTask_OpenEvent_2(), 0);
    g_5401fa = eax_8;
    QTask_RemoveEventCallback(eax_8, 0, sub_471310);
    QTask_TriggerEvent(g_5401fa, 1, sub_471330);
    QTask_TriggerEvent(g_5401fa, 2, sub_471400);
    int32_t eax_10 = sub_4f1a60();
    QTask_RemoveEventCallback(g_5401fa, eax_10, sub_4723d0);
    int32_t eax_11 = sub_4f1a70();
    QTask_RemoveEventCallback(g_5401fa, eax_11, sub_4723e0);
    g_5be348 = sub_4f1950(1);
    int32_t eax_13 = sub_4f0fc0();
    void var_78;
    void var_54;
    return sub_4f1a80(g_5be348, &var_78, &var_54, eax_13, 7, 0);
}
