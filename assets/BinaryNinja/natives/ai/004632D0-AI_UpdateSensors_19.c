// IGI native provenance: AI_UpdateSensors_19 - 0x004632D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004632D0-AI_UpdateSensors_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdateSensors_19.h"
int32_t* AI_UpdateSensors_19(void* context)

{
    *(context + 0x2f4) &= 0xfffffffb;
    int32_t* result = AI_UpdateSensors_20(context, nullptr);
    *(context + 0x6f8) = 0;
    *(context + 0x728) = 0;
    *(context + 0x72c) = 0;
    *(context + 0x730) = 0;
    return result;
}
