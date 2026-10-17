// IGI native provenance: Camera_ApplyLineFilter_19 - 0x004AA0A0 - CFG score 34.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004AA0A0-Camera_ApplyLineFilter_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyLineFilter_19.h"
int32_t Camera_ApplyLineFilter_19(char context )

{
    int32_t data_1 = 0;
    data_1 = context;
    /* tailcall */
    return sub_4aa0a6(data_1);
}
