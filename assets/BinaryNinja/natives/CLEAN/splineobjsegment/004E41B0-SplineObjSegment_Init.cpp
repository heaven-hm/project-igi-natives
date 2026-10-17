// IGI native provenance: SplineObjSegment_Init - 0x004E41B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E41B0-SplineObjSegment_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SplineObjSegment_Init.h"
uint32_t SplineObjSegment_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("SplineObjSegment", 0x5b8, DynObj_LookupHashItem_5(), 0);
    g_a5e3f4 = data_1;
    QTask_TriggerEvent(data_1, 2, SplineObjSegment_LoadParameters);
    QTask_RemoveEventCallback(g_a5e3f4, 4, SplineObjSegment_Setup);
    QTask_RemoveEventCallback(g_a5e3f4, 0xa, SplineObjSegment_Process);
    QTask_RemoveEventCallback(g_a5e3f4, 0xb, AIGraph_LoadParameters);
    QTask_RemoveEventCallback(g_a5e3f4, 9, SplineObjSegment_Process);
    QTask_RemoveEventCallback(g_a5e3f4, 0xc, sub_4e4280);
    int32_t data_4 = SoundSys_PlaySoundSample_3();
    QTask_RemoveEventCallback(g_a5e3f4, data_4, SplineObjSegment_Action);
    QTask_DispatchEvent_3(0x10000000);
    return QTask_RegisterEventCallback_3(g_a5e3f4, 0x10000000);
}
