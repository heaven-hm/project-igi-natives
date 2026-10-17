// IGI native provenance: Camera_ApplyBandFilter_33 - 0x004AF930 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AF930-Camera_ApplyBandFilter_33.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyBandFilter_33.h"
void** Camera_ApplyBandFilter_33(int32_t* context)

{
    void** result = *context;

    if (result == &context[1])
        return 0;

    void* entity_1 = *result;
    *context = entity_1;
    *(entity_1 + 4) = context;
    result[1] = 0;
    *result = nullptr;
    return result;
}
