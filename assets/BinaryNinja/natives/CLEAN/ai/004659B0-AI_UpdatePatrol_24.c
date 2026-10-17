// IGI native provenance: AI_UpdatePatrol_24 - 0x004659B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004659B0-AI_UpdatePatrol_24.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdatePatrol_24.h"
void* AI_UpdatePatrol_24(void* context, float param_2)

{
    *(context + 0x1c4) = param_2;
    *(context + 0x1c8) = 0;
    return context;
}
