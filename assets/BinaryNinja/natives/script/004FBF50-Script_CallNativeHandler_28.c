// Original IGI.EXE function: Script_CallNativeHandler_28 (VA 0x004FBF50; static CFG gate PASS, CFG score 1.000).
#include "Script_CallNativeHandler_28.h"
int32_t Script_CallNativeHandler_28(void* context, float param_2 , float param_3, int32_t param_4, float param_5 )

{
    return Script_SpawnNewTask_30(context + 0xf0, param_2, param_3, *(context + param_4 * 0x38 + 0x1dc), param_5);
}
