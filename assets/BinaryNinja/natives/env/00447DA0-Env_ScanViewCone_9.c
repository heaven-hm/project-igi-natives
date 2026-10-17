// IGI native provenance: Env_ScanViewCone_9 - 0x00447DA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00447DA0-Env_ScanViewCone_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_ScanViewCone_9.h"
void* Env_ScanViewCone_9(void* context)

{
    *(context + 0x290) ^= 1;
    return context;
}
