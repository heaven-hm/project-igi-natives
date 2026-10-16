#include "gi_platform.h"
#include "004A1470-Camera_ApplyLineFilter.h"
int32_t Camera_ApplyLineFilter()

{
    RigidDynCubeObj_Init();
    int32_t valA = Render_DrawSplineMesh_4();
    QTask_RemoveEventCallback(DynObj_LookupHashItem_5(), valA, Camera_ApplyBandFilter);
    int32_t valA2 = QObj_OnEvent();
    return QTask_RemoveEventCallback(DynObj_LookupHashItem_5(), valA2, sub_4a14b0);
}
