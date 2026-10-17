// Original IGI.EXE function: Camera_ApplyLineFilter (VA 0x004A1470; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter.h"
int32_t Camera_ApplyLineFilter()

{
    RigidDynCubeObj_Init();
    int32_t valA = Render_DrawSplineMesh_4();
    QTask_RemoveEventCallback(DynObj_LookupHashItem_5(), valA, Camera_ApplyBandFilter);
    int32_t valA2 = QObj_OnEvent();
    return QTask_RemoveEventCallback(DynObj_LookupHashItem_5(), valA2, sub_4a14b0);
}
