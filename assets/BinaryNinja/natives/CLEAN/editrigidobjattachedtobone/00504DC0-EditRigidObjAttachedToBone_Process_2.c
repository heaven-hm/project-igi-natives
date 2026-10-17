// IGI native provenance: EditRigidObjAttachedToBone_Process_2 - 0x00504DC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00504DC0-EditRigidObjAttachedToBone_Process_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "EditRigidObjAttachedToBone_Process_2.h"
void* EditRigidObjAttachedToBone_Process_2(int32_t* context, int32_t* param_2)

{
    param_2[1] = 0;
    *param_2 = 0;
    return Camera_SetFieldOfView_33(*context, param_2);
}
