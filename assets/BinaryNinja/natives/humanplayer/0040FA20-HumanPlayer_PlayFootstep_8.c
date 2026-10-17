// Original IGI.EXE function: HumanPlayer_PlayFootstep_8 (VA 0x0040FA20; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_PlayFootstep_8.h"
int32_t HumanPlayer_PlayFootstep_8(void* context, void* param_2)

{
    char result = AI_CheckSector_22(*(param_2 + 0x4ec));

    if (!result)
        return result;

    void* temp_1 = *(context + 4);
    *(context + 0xc) = *(context + 0x10);
    *(context + 0x10) = 1;
    int32_t entity_2 = *(temp_1 + 4);
    *(context + 0x14) = entity_2;
    return entity_2(context, param_2);
}
