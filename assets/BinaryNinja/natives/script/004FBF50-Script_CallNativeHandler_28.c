// Original IGI.EXE function: Script_CallNativeHandler_28 (VA 0x004FBF50; static CFG gate PASS, CFG score 1.000).
#include "Script_CallNativeHandler_28.h"
int32_t Script_CallNativeHandler_28(void* a1, float a2 @ 0xc, float a3, int32_t a4, float a5 @ 0x1c)

{
    return Script_SpawnNewTask_30(a1 + 0xf0, a2, a3, *(a1 + a4 * 0x38 + 0x1dc), a5);
}
