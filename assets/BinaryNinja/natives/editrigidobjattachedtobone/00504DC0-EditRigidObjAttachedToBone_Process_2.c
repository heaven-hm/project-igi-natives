// Original IGI.EXE function: EditRigidObjAttachedToBone_Process_2 (VA 0x00504DC0; static CFG gate PASS, CFG score 1.000).
#include "EditRigidObjAttachedToBone_Process_2.h"
void* EditRigidObjAttachedToBone_Process_2(int32_t* context, int32_t* param_2)

{
    param_2[1] = 0;
    *param_2 = 0;
    return Camera_SetFieldOfView_33(*context, param_2);
}
