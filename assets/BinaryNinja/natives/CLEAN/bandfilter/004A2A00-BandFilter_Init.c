// IGI native provenance: BandFilter_Init - 0x004A2A00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A2A00-BandFilter_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BandFilter_Init.h"
int32_t BandFilter_Init()

{
    TaskType_Set("CAMERAFILTER_TYPE_NONE", 0);
    TaskType_Set("CAMERAFILTER_TYPE_LINE", 1);
    TaskType_Set("CAMERAFILTER_TYPE_BAND", 2);
    TaskType_Set("CAMERAFILTER_TYPE_BAND_UPDATE", 3);
    TaskType_Set("CAMERAFILTER_TYPE_HANDICAM", 4);
    int32_t item_4 = 0;
    g_543d4c = TaskType_Register("LineFilter", 0x38, QTask_OpenEvent_2(), 0);
    int32_t item_4_1 = 0;
    g_543d4e = TaskType_Register("WideScreenFilter", 0x44, QTask_OpenEvent_2(), 0);
    int32_t item_4_2 = 0;
    g_543d50 = TaskType_Register("BandFilter", 0x74, QTask_OpenEvent_2(), 0);
    int32_t item_4_3 = 0;
    g_543d58 = TaskType_Register("HandiCamFilter", 0x54, QTask_OpenEvent_2(), 0);
    int32_t data_8 = StatusScreen_GetEvent();
    int32_t item_8 = data_8;
    data_8 = g_543d4c;
    QTask_TriggerEvent(data_8, item_8, BandFilter_LoadParameters);
    QTask_TriggerEvent(g_543d4c, 1, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_543d4c, 2, AnimSound_LoadParameters);
    int32_t data_9 = StatusScreen_GetEvent();
    int32_t item_8_1 = data_9;
    data_9 = g_543d4e;
    QTask_TriggerEvent(data_9, item_8_1, BandFilter_Update);
    QTask_TriggerEvent(g_543d4e, 1, AIGraph_LoadParameters);
    int32_t data_10 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_543d50, data_10, BandFilter_Action);
    QTask_TriggerEvent(g_543d50, 1, BandFilter_Cleanup_5);
    QTask_TriggerEvent(g_543d50, 2, BandFilter_Cleanup);
    int32_t data_12 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_543d58, data_12, BandFilter_Cleanup_6);
    QTask_TriggerEvent(g_543d58, 1, sub_4a4cb0);
    QTask_TriggerEvent(g_543d58, 2, BandFilter_Cleanup_2);
    g_936010 = Sys_RendermodeFailedToCr_2("DrawLineFilter");
    g_935c00 = Sys_RendermodeFailedToCr_2("DrawBandFilter");
    int32_t data_16 = Sys_RendermodeFailedToCr_2("DrawHandiCamFilter");
    int32_t temp_3 = g_936010;
    g_935bfc = data_16;
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), temp_3, DrawLineFilter);
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_935c00, DrawBandFilter);
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_935bfc, DrawHandiCamFilter);
    g_936014 = Display_RestoreDevice_14("LineFilter");
    g_936018 = Display_RestoreDevice_14("WideScreenFilter");
    g_935c0c = Display_RestoreDevice_14("BandFilter");
    int32_t data_24 = Display_RestoreDevice_14("HandiCamFilter");
    int32_t temp_4 = g_936014;
    g_935c08 = data_24;
    Display_SetGammaRamp_14(temp_4, BandFilter_Cleanup_3);
    Display_SetGammaRamp_14(g_936018, BandFilter_Cleanup_4);
    Display_SetGammaRamp_14(g_935c0c, sub_4a36b0);
    Display_SetGammaRamp_14(g_935c08, sub_4a4c90);
    Sys_ResolveSymbol_13(0x935bf0);
    int32_t result;
    long double fp0;
    fp0 = Sys_AllocateMemory_14(0x935bf0);
    g_936038 = fp0 * 21600.0f;
    return result;
}
