// IGI native provenance: Sys_PushStack_28 - 0x004BD040 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BD040-Sys_PushStack_28.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PushStack_28.h"
char* Sys_PushStack_28(float context, int32_t param_2, char* param_3, int32_t param_4)

{
    *param_3 = 0;
    Sys_UnknownDataType_2(param_3, param_4, context, param_2, 3);
    return param_3;
}
