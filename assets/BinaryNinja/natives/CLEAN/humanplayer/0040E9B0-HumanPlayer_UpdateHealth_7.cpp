// IGI native provenance: HumanPlayer_UpdateHealth_7 - 0x0040E9B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040E9B0-HumanPlayer_UpdateHealth_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_UpdateHealth_7.h"
void* HumanPlayer_UpdateHealth_7(void* context)

{
    *(context + 0x14) = HumanPlayer_HandleInput_7;
    return context;
}
