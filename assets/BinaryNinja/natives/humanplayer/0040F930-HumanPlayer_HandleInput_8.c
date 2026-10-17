// IGI native provenance: HumanPlayer_HandleInput_8 - 0x0040F930 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040F930-HumanPlayer_HandleInput_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_HandleInput_8.h"
void* HumanPlayer_HandleInput_8(void* context, void* param_2)

{
    *(param_2 + 0x4d1) = 1;
    *(context + 0x14) = HumanPlayer_ApplyPhysics_8;
    return param_2;
}
