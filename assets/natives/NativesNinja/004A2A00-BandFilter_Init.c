#include "004A2A00-BandFilter_Init.h"
/* 0x004a2a00 BandFilter_Init full linked: callers=1 callees=47 */
int32_t sub_4a2a00()

{
    TaskType_Set("CAMERAFILTER_TYPE_NONE", 0);
    TaskType_Set("CAMERAFILTER_TYPE_LINE", 1);
    TaskType_Set("CAMERAFILTER_TYPE_BAND", 2);
    TaskType_Set("CAMERAFILTER_TYPE_BAND_UPDATE", 3);
    TaskType_Set("CAMERAFILTER_TYPE_HANDICAM", 4);
    int32_t var_4 = 0;
    g_543d4c = TaskType_Register("LineFilter", 0x38, QTask_OpenEvent_2(), 0);
    int32_t var_4_1 = 0;
    g_543d4e = TaskType_Register("WideScreenFilter", 0x44, QTask_OpenEvent_2(), 0);
    int32_t var_4_2 = 0;
    g_543d50 = TaskType_Register("BandFilter", 0x74, QTask_OpenEvent_2(), 0);
    int32_t var_4_3 = 0;
    g_543d58 = TaskType_Register("HandiCamFilter", 0x54, QTask_OpenEvent_2(), 0);
    int32_t eax_8 = sub_4e7530();
    int32_t var_8 = eax_8;
    eax_8 = g_543d4c;
    QTask_TriggerEvent(eax_8, var_8, sub_4a3550);
    QTask_TriggerEvent(g_543d4c, 1, sub_4d3710);
    QTask_TriggerEvent(g_543d4c, 2, sub_4c1780);
    int32_t eax_9 = sub_4e7530();
    int32_t var_8_1 = eax_9;
    eax_9 = g_543d4e;
    QTask_TriggerEvent(eax_9, var_8_1, sub_4a3650);
    QTask_TriggerEvent(g_543d4e, 1, sub_4d3710);
    int32_t eax_10 = sub_4e7530();
    QTask_TriggerEvent(g_543d50, eax_10, sub_4a36d0);
    QTask_TriggerEvent(g_543d50, 1, sub_4a38a0);
    QTask_TriggerEvent(g_543d50, 2, BandFilter_Cleanup);
    int32_t eax_12 = sub_4e7530();
    QTask_TriggerEvent(g_543d58, eax_12, sub_4a4d10);
    QTask_TriggerEvent(g_543d58, 1, sub_4a4cb0);
    QTask_TriggerEvent(g_543d58, 2, sub_4a29a0);
    g_936010 = sub_4b0e70("DrawLineFilter");
    g_935c00 = sub_4b0e70("DrawBandFilter");
    int32_t eax_16 = sub_4b0e70("DrawHandiCamFilter");
    int32_t edx_3 = g_936010;
    g_935bfc = eax_16;
    sub_4b0ec0(sub_4950e0(), edx_3, sub_4a2cd0);
    sub_4b0ec0(sub_4950e0(), g_935c00, sub_4a3940);
    sub_4b0ec0(sub_4950e0(), g_935bfc, sub_4a4300);
    g_936014 = sub_4978d0("LineFilter");
    g_936018 = sub_4978d0("WideScreenFilter");
    g_935c0c = sub_4978d0("BandFilter");
    int32_t eax_24 = sub_4978d0("HandiCamFilter");
    int32_t edx_4 = g_936014;
    g_935c08 = eax_24;
    sub_4978f0(edx_4, sub_4a3530);
    sub_4978f0(g_936018, sub_4a35b0);
    sub_4978f0(g_935c0c, sub_4a36b0);
    sub_4978f0(g_935c08, sub_4a4c90);
    sub_4b4720(0x935bf0);
    int32_t result;
    long double st0;
    st0 = sub_4b4770(0x935bf0);
    g_936038 = st0 * 21600f;
    return result;
}
