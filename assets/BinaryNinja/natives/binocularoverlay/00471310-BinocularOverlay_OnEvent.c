// Original IGI.EXE function: BinocularOverlay_OnEvent (VA 0x00471310; static CFG gate PASS, CFG score 1.000).
#include "BinocularOverlay_OnEvent.h"
int32_t* BinocularOverlay_OnEvent(void* context)

{
    *(context + 0x74) = 0;
    int32_t* result = Script_ExecuteLevelScript_6(context + 0x24);
    *(context + 0x20) = 0;
    return result;
}
