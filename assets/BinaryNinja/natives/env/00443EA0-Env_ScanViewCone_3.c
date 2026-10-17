// IGI native provenance: Env_ScanViewCone_3 - 0x00443EA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00443EA0-Env_ScanViewCone_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_ScanViewCone_3.h"
void* Env_ScanViewCone_3(void* context)

{
    *(context + 0x241) = 1;
    *(context + 0x242) = 1;
    *(context + 0x244) = *(g_bc2360 + 0x68);
    return context;
}
