// IGI native provenance: Camera_ResetMatrix_13 - 0x004A87ED - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A87ED-Camera_ResetMatrix_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ResetMatrix_13.h"
int32_t Camera_ResetMatrix_13()

{
    int32_t entity_val;
    int32_t item_8 = entity_val;
    bool c0;
    bool c1;
    bool c2;
    bool c3;
    *(&item_8 + 2) =
        (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe;
    __fnclex();
    return *(&item_8 + 2);
}
