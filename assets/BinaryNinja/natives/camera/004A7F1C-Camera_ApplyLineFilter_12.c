// IGI native provenance: Camera_ApplyLineFilter_12 - 0x004A7F1C - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A7F1C-Camera_ApplyLineFilter_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyLineFilter_12.h"
void* Camera_ApplyLineFilter_12(int32_t* context)

{
    *context += 4;
    void* result = *context;
    result = *(result - 4);
    return result;
}
