// IGI native provenance: HumanPlayer_PlayFootstep_8 - 0x0040FA20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040FA20-HumanPlayer_PlayFootstep_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
