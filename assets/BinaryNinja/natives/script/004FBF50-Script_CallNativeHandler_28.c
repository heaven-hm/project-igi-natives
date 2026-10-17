// IGI native provenance: Script_CallNativeHandler_28 - 0x004FBF50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FBF50-Script_CallNativeHandler_28.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_CallNativeHandler_28.h"
int32_t Script_CallNativeHandler_28(void* context, float param_2 , float param_3, int32_t param_4, float param_5 )

{
    return Script_SpawnNewTask_30(context + 0xf0, param_2, param_3, *(context + param_4 * 0x38 + 0x1dc), param_5);
}
