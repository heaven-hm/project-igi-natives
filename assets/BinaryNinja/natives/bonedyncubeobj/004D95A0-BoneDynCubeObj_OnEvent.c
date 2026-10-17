// Original IGI.EXE function: BoneDynCubeObj_OnEvent (VA 0x004D95A0; static CFG gate FAIL, CFG score 0.833).
#include "BoneDynCubeObj_OnEvent.h"
int32_t BoneDynCubeObj_OnEvent(void* context, double* param_2)

{
    int32_t result = WorldObject_CommitTransform(g_a44344, context, param_2, *(context + 0xa0));
    memcpy(context + 0x78, &param_2[3], 0x28);
    return result;
}
