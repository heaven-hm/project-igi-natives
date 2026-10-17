// IGI native provenance: Camera_ApplyLineFilter_13 - 0x004A865C - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A865C-Camera_ApplyLineFilter_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyLineFilter_13.h"
int32_t Camera_ApplyLineFilter_13(char context) {
    if (context & 0x20)
        return 5;

    if (context & 8)
        return 1;

    if (context & 4)
        return 2;

    if (!(context & 1))
        return (context & 2) << 1;

    return 3;
}
