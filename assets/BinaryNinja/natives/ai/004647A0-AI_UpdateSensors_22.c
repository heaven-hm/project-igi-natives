// IGI native provenance: AI_UpdateSensors_22 - 0x004647A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004647A0-AI_UpdateSensors_22.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdateSensors_22.h"
void* AI_UpdateSensors_22(void* context, float param_2, int32_t param_3)

{
    *(context + 0x1d0) = param_2;
    *(context + 0x1dc) = param_3;
    *(context + 0x1cc) = param_2;
    *(context + 0x1d8) = param_3;
    return context;
}
