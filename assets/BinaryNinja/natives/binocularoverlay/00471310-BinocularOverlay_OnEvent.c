#include "BinocularOverlay_OnEvent.h"
int32_t* BinocularOverlay_OnEvent(void* a1)

{
    *(a1 + 0x74) = 0;
    int32_t* result = Script_ExecuteLevelScript_6(a1 + 0x24);
    *(a1 + 0x20) = 0;
    return result;
}
