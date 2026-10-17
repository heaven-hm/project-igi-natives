// IGI native provenance: Camera_ApplyBandFilter_10 - 0x004A7157 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A7157-Camera_ApplyBandFilter_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyBandFilter_10.h"
int32_t Camera_ApplyBandFilter_10()

{
    return Camera_ApplyLineFilter_24(0x10000, 0x30000);
}
