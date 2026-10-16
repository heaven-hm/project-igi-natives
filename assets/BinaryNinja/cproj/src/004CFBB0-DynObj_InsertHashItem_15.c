#include "gi_platform.h"
#include "004CFBB0-DynObj_InsertHashItem_15.h"
int32_t DynObj_InsertHashItem_15(int32_t* a1)

{
    Resource_Flush(a1[4]);
    Camera_ApplyHandiCam_33(a1);
    return Sys_ExecuteBytecode_2(a1);
}
