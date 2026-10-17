// IGI native provenance: Env_ActivateEntity - 0x00440C00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00440C00-Env_ActivateEntity.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_ActivateEntity.h"
void* Env_ActivateEntity(void* context)

{
    void* result = context;
    result = *(result + 0x2a1);
    return result;
}
