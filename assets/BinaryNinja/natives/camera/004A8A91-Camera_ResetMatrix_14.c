// IGI native provenance: Camera_ResetMatrix_14 - 0x004A8A91 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A8A91-Camera_ResetMatrix_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ResetMatrix_14.h"
long double __fload(double context, int16_t param_2 ) {
    if ((param_2 & 0x7ff0) != 0x7ff0)
        return context;

    int16_t item_6_1 = param_2 | 0x7fff;
    int32_t context_1 = context;
    int32_t item_a_1 = *(&context + 4) << 0xb | context_1 >> 0x15;
    return context_1;
}
