// IGI native provenance: Env_InitLadder_2 - 0x00440C10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00440C10-Env_InitLadder_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_InitLadder_2.h"
void* Env_InitLadder_2(void* context)

{
    void* result = context;
    result = *(result + 0x2a2);
    return result;
}
