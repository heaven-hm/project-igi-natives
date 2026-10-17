// Original IGI.EXE function: AI_CheckHearing_21 (VA 0x00463740; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckHearing_21.h"
int32_t AI_CheckHearing_21(void* context)

{
    int32_t* entity_val = *(context + 0x7b0);

    if (!entity_val)
        return 0;

    return *entity_val;
}
