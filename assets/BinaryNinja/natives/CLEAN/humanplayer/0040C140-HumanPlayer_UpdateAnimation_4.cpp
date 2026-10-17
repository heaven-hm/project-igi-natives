// IGI native provenance: HumanPlayer_UpdateAnimation_4 - 0x0040C140 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040C140-HumanPlayer_UpdateAnimation_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_UpdateAnimation_4.h"
void* HumanPlayer_UpdateAnimation_4(void* context)

{
    *(context + 0xd44) = 1;
    return context;
}
