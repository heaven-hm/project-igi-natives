// IGI native provenance: Sys_DispatchOpcode - 0x004B0850 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B0850-Sys_DispatchOpcode.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_DispatchOpcode.h"
int32_t Sys_DispatchOpcode(int32_t* context, int32_t* param_2, int32_t* param_3, char* param_4, int32_t param_5, int32_t param_6)

{
    if (!Camera_UpdateViewCone_33(0x938280, 0x9402e0, param_4))
        return 0;

    return Sys_ExecuteBytecode(context, param_2, param_3, param_5, 0x938280, 0x9402e0, param_6);
}
