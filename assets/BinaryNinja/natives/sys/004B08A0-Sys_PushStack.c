// IGI native provenance: Sys_PushStack - 0x004B08A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B08A0-Sys_PushStack.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PushStack.h"
int32_t Sys_PushStack(int32_t* context, int32_t* param_2, char* param_3, int32_t param_4, int32_t param_5)

{
    if (!Camera_UpdateViewCone_33(0x93aae0, 0x936280, param_3))
        return 0;

    return Sys_AllocateMemory(context, param_2, param_4, 0x93aae0, 0x936280, param_5);
}
