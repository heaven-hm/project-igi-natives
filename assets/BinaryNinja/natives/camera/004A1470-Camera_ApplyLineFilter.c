// IGI native provenance: Camera_ApplyLineFilter - 0x004A1470 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A1470-Camera_ApplyLineFilter.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyLineFilter.h"
int32_t Camera_ApplyLineFilter()

{
    RigidDynCubeObj_Init();
    int32_t data_val = Render_DrawSplineMesh_4();
    QTask_RemoveEventCallback(DynObj_LookupHashItem_5(), data_val, Camera_ApplyBandFilter);
    int32_t data_2 = QObj_OnEvent();
    return QTask_RemoveEventCallback(DynObj_LookupHashItem_5(), data_2, sub_4a14b0);
}
