// IGI native provenance: Camera_UpdateTransform_2 - 0x004A26C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A26C0-Camera_UpdateTransform_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateTransform_2.h"
int32_t Camera_UpdateTransform_2(void* context)

{
    int32_t result =
        *(context + 0x6c) * 255.0f - ((((*(context + 0x64) * -255.0f) << 8) + *(context + 0x68) * -255.0f) << 8);
    int32_t entity_4;
    int32_t dest_val;
    dest_val = __memfill_u32(0x935c10, result, 0x100);
    return result;
}
