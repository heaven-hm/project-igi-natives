// IGI native provenance: HumanPlayer_CheckCollision_4 - 0x0040C150 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040C150-HumanPlayer_CheckCollision_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_CheckCollision_4.h"
void* HumanPlayer_CheckCollision_4(void* context)

{
    *(context + 0xd68) = 1;
    return context;
}
