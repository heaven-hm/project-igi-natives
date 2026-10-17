// IGI native provenance: HumanPlayer_PlaySound_8 - 0x0040FA60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040FA60-HumanPlayer_PlaySound_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_PlaySound_8.h"
void* HumanPlayer_PlaySound_8(void* context, void* param_2)

{
    *(param_2 + 0x4e8) = 0;
    *(context + 0x14) = HumanPlayer_UpdateAnimation_8;
    return param_2;
}
