// Original IGI.EXE function: BoneDynCubeObj_OnEvent (VA 0x004D95A0; static CFG gate FAIL, CFG score 0.833).
#include "BoneDynCubeObj_OnEvent.h"
int32_t BoneDynCubeObj_OnEvent(void* a1, double* a2)

{
    int32_t result = WorldObject_CommitTransform(g_a44344, a1, a2, *(a1 + 0xa0));
    memcpy(a1 + 0x78, &a2[3], 0x28);
    return result;
}
