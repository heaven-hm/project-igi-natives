// Original IGI.EXE function: AI_CheckSector_20 (VA 0x00463680; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckSector_20.h"
int32_t AI_CheckSector_20(void* context)

{
    int32_t* entity_val = *(context + 0x768);

    if (!entity_val)
        return 0;

    return *entity_val;
}
