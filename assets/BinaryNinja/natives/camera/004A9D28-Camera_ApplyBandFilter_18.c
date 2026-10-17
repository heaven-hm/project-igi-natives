// IGI native provenance: Camera_ApplyBandFilter_18 - 0x004A9D28 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A9D28-Camera_ApplyBandFilter_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyBandFilter_18.h"
int32_t __checkTOS_withFB(int32_t context ) {
    int32_t data_val = context & 0x7ff00000;

    if (data_val == 0x7ff00000)
        return context;

    return data_val;
}
