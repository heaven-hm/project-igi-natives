// IGI native provenance: AI_FireWeapon_18 - 0x00460CE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00460CE0-AI_FireWeapon_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_FireWeapon_18.h"
void* AI_FireWeapon_18(void* context)

{
    *(context + 0x7c8) = 1;
    return context;
}
