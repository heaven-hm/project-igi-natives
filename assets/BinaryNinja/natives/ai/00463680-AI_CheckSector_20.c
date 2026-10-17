// Original IGI.EXE function: AI_CheckSector_20 (VA 0x00463680; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckSector_20.h"
int32_t AI_CheckSector_20(void* a1)

{
    int32_t* objC = *(a1 + 0x768);

    if (!objC)
        return 0;

    return *objC;
}
