// IGI native provenance: HumanPlayer_TakeDamage_10 - 0x00413B90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00413B90-HumanPlayer_TakeDamage_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_TakeDamage_10.h"
void* HumanPlayer_TakeDamage_10(int32_t context) {
    return context * 0x6e8 + &g_56e258;
}
