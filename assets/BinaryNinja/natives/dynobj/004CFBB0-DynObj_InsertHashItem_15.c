// Original IGI.EXE function: DynObj_InsertHashItem_15 (VA 0x004CFBB0; static CFG gate PASS, CFG score 1.000).
#include "DynObj_InsertHashItem_15.h"
int32_t DynObj_InsertHashItem_15(int32_t* context)

{
    Resource_Flush(context[4]);
    Camera_ApplyHandiCam_33(context);
    return Sys_ExecuteBytecode_2(context);
}
