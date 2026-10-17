// IGI native provenance: HumanPlayer_PlayFootstep_9 - 0x004113C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004113C0-HumanPlayer_PlayFootstep_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_PlayFootstep_9.h"
int32_t HumanPlayer_PlayFootstep_9(void* context)

{
    int32_t result = *(context + 0xde0);

    if (result)
    {
        result -= 1;
        *(context + 0xde0) = result;
    }

    return result;
}
